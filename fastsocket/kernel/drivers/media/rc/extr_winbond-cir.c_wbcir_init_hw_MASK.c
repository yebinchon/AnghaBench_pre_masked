
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ duration; } ;
struct wbcir_data {int irdata_active; int irdata_error; scalar_t__ sbase; int dev; TYPE_1__ ev; int rxtrigger; scalar_t__ ebase; scalar_t__ wbase; } ;





 int VAR_0 ;
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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_34 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,scalar_t__) ;
 int VAR_35 ;
 int FUNC_5 (struct wbcir_data*,int ) ;
 int FUNC_6 (scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_7(struct wbcir_data *VAR_36)
{
 u8 VAR_37;


 FUNC_5(VAR_36, VAR_1);
 FUNC_4(VAR_9, VAR_36->sbase + VAR_19);


 VAR_37 = VAR_35 << 4;
 if (VAR_34)
  VAR_37 |= 0x08;
 FUNC_4(VAR_37, VAR_36->wbase + VAR_31);


 FUNC_6(VAR_36->wbase + VAR_33, 0x17, 0x17);


 FUNC_6(VAR_36->wbase + VAR_32, 0x00, 0x07);


 FUNC_6(VAR_36->wbase + VAR_30, 0x4A, 0x7F);


 if (VAR_34)
  FUNC_4(0x04, VAR_36->ebase + VAR_11);
 else
  FUNC_4(0x00, VAR_36->ebase + VAR_11);





 FUNC_4(0x10, VAR_36->ebase + VAR_12);


 FUNC_5(VAR_36, VAR_2);
 FUNC_4(VAR_7, VAR_36->sbase + VAR_16);
 FUNC_4(0x30, VAR_36->sbase + VAR_17);


 switch (VAR_35) {
 case 129:
  FUNC_4(0xA7, VAR_36->sbase + VAR_15);
  break;
 case 128:
  FUNC_4(0x53, VAR_36->sbase + VAR_15);
  break;
 case 130:
  FUNC_4(0x69, VAR_36->sbase + VAR_15);
  break;
 }
 FUNC_4(0x00, VAR_36->sbase + VAR_14);


 FUNC_5(VAR_36, VAR_1);
 FUNC_4(0xC0, VAR_36->sbase + VAR_27);
 FUNC_0(VAR_36->sbase + VAR_26);
 FUNC_0(VAR_36->sbase + VAR_28);


 FUNC_5(VAR_36, VAR_6);
 FUNC_4(0x10, VAR_36->sbase + VAR_29);


 FUNC_5(VAR_36, VAR_3);
 FUNC_4(0x00, VAR_36->sbase + VAR_21);


 FUNC_5(VAR_36, VAR_4);
 FUNC_4(0x00, VAR_36->sbase + VAR_22);


 FUNC_5(VAR_36, VAR_5);
 FUNC_4(0x20, VAR_36->sbase + VAR_23);


 FUNC_5(VAR_36, VAR_6);
 FUNC_4(0xF2, VAR_36->sbase + VAR_24);
 FUNC_4(0x69, VAR_36->sbase + VAR_25);


 if (VAR_34)
  FUNC_4(0x10, VAR_36->sbase + VAR_20);
 else
  FUNC_4(0x00, VAR_36->sbase + VAR_20);


 FUNC_5(VAR_36, VAR_1);
 FUNC_4(0x97, VAR_36->sbase + VAR_18);


 FUNC_4(0xE0, VAR_36->sbase + VAR_13);


 VAR_36->irdata_active = 0;
 FUNC_3(VAR_36->rxtrigger, VAR_0);
 VAR_36->irdata_error = 0;
 VAR_36->ev.duration = 0;
 FUNC_2(VAR_36->dev);
 FUNC_1(VAR_36->dev);


 FUNC_4(VAR_10 | VAR_8, VAR_36->sbase + VAR_19);
}
