
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cx88_core {int tvnorm; int input; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,char*,int,...) ;
 scalar_t__ VAR_17 ;
 unsigned int FUNC_6 (int) ;
 unsigned int FUNC_7 (int) ;
 unsigned int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

int FUNC_11(struct cx88_core *VAR_18, unsigned int VAR_19, unsigned int VAR_20,
     enum v4l2_field VAR_21)
{
 unsigned int VAR_22 = FUNC_8(VAR_18->tvnorm);
 unsigned int VAR_23 = FUNC_7(VAR_18->tvnorm);
 u32 VAR_24;

 FUNC_5(1,"set_scale: %dx%d [%s%s,%s]\n", VAR_19, VAR_20,
  FUNC_3(VAR_21) ? "T" : "",
  FUNC_2(VAR_21) ? "B" : "",
  FUNC_10(VAR_18->tvnorm));
 if (!FUNC_1(VAR_21))
  VAR_20 *= 2;


 VAR_24 = (VAR_19 * FUNC_6(VAR_18->tvnorm)) / VAR_22;
 VAR_24 &= 0x3fe;
 FUNC_4(VAR_5, VAR_24);
 FUNC_4(VAR_6, VAR_24);
 FUNC_5(1,"set_scale: hdelay  0x%04x (width %d)\n", VAR_24,VAR_22);

 VAR_24 = (VAR_22 * 4096 / VAR_19) - 4096;
 FUNC_4(VAR_7, VAR_24);
 FUNC_4(VAR_8, VAR_24);
 FUNC_5(1,"set_scale: hscale  0x%04x\n", VAR_24);

 FUNC_4(VAR_3, VAR_19);
 FUNC_4(VAR_4, VAR_19);
 FUNC_5(1,"set_scale: hactive 0x%04x\n", VAR_19);


 FUNC_4(VAR_11, FUNC_9(VAR_18->tvnorm));
 FUNC_4(VAR_12, FUNC_9(VAR_18->tvnorm));
 FUNC_5(1,"set_scale: vdelay  0x%04x\n", FUNC_9(VAR_18->tvnorm));

 VAR_24 = (0x10000 - (VAR_23 * 512 / VAR_20 - 512)) & 0x1fff;
 FUNC_4(VAR_13, VAR_24);
 FUNC_4(VAR_14, VAR_24);
 FUNC_5(1,"set_scale: vscale  0x%04x\n", VAR_24);

 FUNC_4(VAR_9, VAR_23);
 FUNC_4(VAR_10, VAR_23);
 FUNC_5(1,"set_scale: vactive 0x%04x\n", VAR_23);


 VAR_24 = 0;
 VAR_24 |= (1 << 19);
 if (VAR_18->tvnorm & VAR_16) {
  VAR_24 |= (1 << 15);
  VAR_24 |= (1 << 16);
 }
 if (FUNC_0(VAR_18->input).type == VAR_0)
  VAR_24 |= (1 << 13) | (1 << 5);
 if (VAR_15 == VAR_21)
  VAR_24 |= (1 << 3);
 if (VAR_19 < 385)
  VAR_24 |= (1 << 0);
 if (VAR_19 < 193)
  VAR_24 |= (1 << 1);
 if (VAR_17)
  VAR_24 |= (3 << 5);

 FUNC_4(VAR_1, VAR_24);
 FUNC_4(VAR_2, VAR_24);
 FUNC_5(1,"set_scale: filter  0x%04x\n", VAR_24);

 return 0;
}
