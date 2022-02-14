
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {TYPE_3__* net; TYPE_1__* udev; } ;
struct sk_buff {scalar_t__ len; int* data; } ;
struct TYPE_5__ {int rx_length_errors; int rx_missed_errors; int rx_frame_errors; int rx_crc_errors; int rx_fifo_errors; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_1, struct sk_buff *VAR_2)
{
 u8 VAR_3;
 int VAR_4;
 if (FUNC_3(VAR_2->len < VAR_0)) {
  FUNC_0(&VAR_1->udev->dev, "unexpected tiny rx frame\n");
  return 0;
 }

 VAR_3 = VAR_2->data[0];
 VAR_4 = (VAR_2->data[1] | (VAR_2->data[2] << 8)) - 4;

 if (FUNC_3(VAR_3 & 0xbf)) {
  if (VAR_3 & 0x01) VAR_1->net->stats.rx_fifo_errors++;
  if (VAR_3 & 0x02) VAR_1->net->stats.rx_crc_errors++;
  if (VAR_3 & 0x04) VAR_1->net->stats.rx_frame_errors++;
  if (VAR_3 & 0x20) VAR_1->net->stats.rx_missed_errors++;
  if (VAR_3 & 0x90) VAR_1->net->stats.rx_length_errors++;
  return 0;
 }

 FUNC_1(VAR_2, 3);
 FUNC_2(VAR_2, VAR_4);

 return 1;
}
