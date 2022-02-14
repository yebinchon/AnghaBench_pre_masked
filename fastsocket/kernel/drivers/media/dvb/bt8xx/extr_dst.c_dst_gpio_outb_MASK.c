
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mask; int highvals; } ;
struct TYPE_3__ {int mask; int enable; } ;
union dst_gpio_packet {TYPE_2__ outp; TYPE_1__ enb; } ;
typedef int u32 ;
struct dst_state {int bt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,union dst_gpio_packet*) ;
 int FUNC_1 (int ,int ,int,char*,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct dst_state *VAR_5, u32 VAR_6, u32 VAR_7,
    u32 VAR_8, int VAR_9)
{
 union dst_gpio_packet VAR_10;
 union dst_gpio_packet VAR_11;
 int VAR_12;

 VAR_10.enb.mask = VAR_6;
 VAR_10.enb.enable = VAR_7;

 FUNC_1(VAR_4, VAR_2, 1, "mask=[%04x], enbb=[%04x], outhigh=[%04x]", VAR_6, VAR_7, VAR_8);
 if ((VAR_12 = FUNC_0(VAR_5->bt, VAR_0, &VAR_10)) < 0) {
  FUNC_1(VAR_4, VAR_2, 1, "dst_gpio_enb error (err == %i, mask == %02x, enb == %02x)", VAR_12, VAR_6, VAR_7);
  return -VAR_3;
 }
 FUNC_3(1000);

 if (VAR_7 == 0)
  return 0;
 if (VAR_9)
  FUNC_2(10);
 VAR_11.outp.mask = VAR_7;
 VAR_11.outp.highvals = VAR_8;
 if ((VAR_12 = FUNC_0(VAR_5->bt, VAR_1, &VAR_11)) < 0) {
  FUNC_1(VAR_4, VAR_2, 1, "dst_gpio_outb error (err == %i, enbb == %02x, outhigh == %02x)", VAR_12, VAR_7, VAR_8);
  return -VAR_3;
 }

 return 0;
}
