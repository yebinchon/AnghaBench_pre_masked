
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dev_addr; int perm_addr; int addr_len; } ;
struct i2400m_bootrom_header {void* data_size; void* target_addr; int command; } ;
struct TYPE_2__ {struct net_device* net_dev; } ;
struct i2400m {int bus_bm_mac_addr_impaired; struct i2400m_bootrom_header* bm_cmd_buf; TYPE_1__ wimax_dev; } ;
struct device {int dummy; } ;
typedef int ack_buf ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*,int) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_3 (int,struct device*,char*,int,int,int,int,int,int) ;
 int FUNC_4 (struct device*,char*,int,...) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (struct i2400m*,struct i2400m_bootrom_header*,int,struct i2400m_bootrom_header*,int,int ) ;
 int FUNC_7 (int ,int ,int) ;
 struct device* FUNC_8 (struct i2400m*) ;
 int FUNC_9 (int ,int*,int ) ;

int FUNC_10(struct i2400m *VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = FUNC_8(VAR_2);
 struct net_device *VAR_5 = VAR_2->wimax_dev.net_dev;
 struct i2400m_bootrom_header *VAR_6;
 struct {
  struct i2400m_bootrom_header ack;
  u8 ack_pl[16];
 } __attribute__((packed)) VAR_7;

 FUNC_2(5, VAR_4, "(i2400m %p)\n", VAR_2);
 VAR_6 = VAR_2->bm_cmd_buf;
 VAR_6->command = FUNC_7(VAR_1, 0, 1);
 VAR_6->target_addr = FUNC_0(0x00203fe8);
 VAR_6->data_size = FUNC_0(6);
 VAR_3 = FUNC_6(VAR_2, VAR_6, sizeof(*VAR_6),
          &VAR_7.ack, sizeof(VAR_7), 0);
 if (VAR_3 < 0) {
  FUNC_4(VAR_4, "BM: read mac addr failed: %d\n", VAR_3);
  goto error_read_mac;
 }
 FUNC_3(2, VAR_4,
   "mac addr is %02x:%02x:%02x:%02x:%02x:%02x\n",
   VAR_7.ack_pl[0], VAR_7.ack_pl[1],
   VAR_7.ack_pl[2], VAR_7.ack_pl[3],
   VAR_7.ack_pl[4], VAR_7.ack_pl[5]);
 if (VAR_2->bus_bm_mac_addr_impaired == 1) {
  VAR_7.ack_pl[0] = 0x00;
  VAR_7.ack_pl[1] = 0x16;
  VAR_7.ack_pl[2] = 0xd3;
  FUNC_5(&VAR_7.ack_pl[3], 3);
  FUNC_4(VAR_4, "BM is MAC addr impaired, faking MAC addr to "
   "mac addr is %02x:%02x:%02x:%02x:%02x:%02x\n",
   VAR_7.ack_pl[0], VAR_7.ack_pl[1],
   VAR_7.ack_pl[2], VAR_7.ack_pl[3],
   VAR_7.ack_pl[4], VAR_7.ack_pl[5]);
  VAR_3 = 0;
 }
 VAR_5->addr_len = VAR_0;
 FUNC_9(VAR_5->perm_addr, VAR_7.ack_pl, VAR_0);
 FUNC_9(VAR_5->dev_addr, VAR_7.ack_pl, VAR_0);
error_read_mac:
 FUNC_1(5, VAR_4, "(i2400m %p) = %d\n", VAR_2, VAR_3);
 return VAR_3;
}
