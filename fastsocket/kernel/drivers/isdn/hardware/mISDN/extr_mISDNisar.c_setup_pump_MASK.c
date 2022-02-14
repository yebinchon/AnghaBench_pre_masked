
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int state; int Flags; } ;
struct isar_ch {int is; TYPE_1__ bch; int newmod; int newcmd; int state; int dpath; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ) ;
 int VAR_26 ;
 int FUNC_1 (int ,int,int,int,int*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct isar_ch *VAR_27) {
 u8 VAR_28 = FUNC_0(VAR_27->dpath);
 u8 VAR_29, VAR_30[6];

 switch (VAR_27->bch.state) {
 case 128:
 case 130:
 case 133:
  FUNC_1(VAR_27->is, VAR_28 | VAR_4, VAR_8, 0, ((void*)0));
  break;
 case 132:
  if (FUNC_3(VAR_0, &VAR_27->bch.Flags)) {
   VAR_30[0] = 5;
   FUNC_1(VAR_27->is, VAR_28 | VAR_4,
    VAR_11, 1, VAR_30);
  } else {
   VAR_30[0] = 40;
   FUNC_1(VAR_27->is, VAR_28 | VAR_4,
    VAR_10, 1, VAR_30);
  }
 case 131:
  VAR_29 = VAR_9;
  if (FUNC_3(VAR_2, &VAR_27->bch.Flags)) {
   VAR_29 |= VAR_5;
   VAR_30[5] = VAR_25;
  } else {
   VAR_30[5] = VAR_24;
  }
  VAR_30[0] = 6;
  VAR_30[1] = VAR_18 | VAR_15 | VAR_16 |
   VAR_17 | VAR_14 | VAR_13;
  VAR_30[2] = VAR_19 | VAR_21 | VAR_20;
  VAR_30[3] = VAR_22;
  VAR_30[4] = VAR_23;
  FUNC_1(VAR_27->is, VAR_28 | VAR_4, VAR_29, 6, VAR_30);
  break;
 case 129:
  VAR_29 = VAR_12;
  if (FUNC_3(VAR_2, &VAR_27->bch.Flags)) {
   VAR_29 |= VAR_5;
   VAR_30[1] = VAR_7;
  } else {
   VAR_30[1] = VAR_6;
  }
  VAR_30[0] = 6;
  FUNC_1(VAR_27->is, VAR_28 | VAR_4, VAR_29, 2, VAR_30);
  VAR_27->state = VAR_26;
  VAR_27->newcmd = 0;
  VAR_27->newmod = 0;
  FUNC_2(VAR_1, &VAR_27->bch.Flags);
  break;
 }
 FUNC_4(1000);
 FUNC_1(VAR_27->is, VAR_28 | VAR_3, 0, 0, ((void*)0));
 FUNC_4(1000);
}
