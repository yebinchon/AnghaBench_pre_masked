
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct IsdnCardState {int dummy; } ;
struct TYPE_3__ {int newmod; int newcmd; int state; int dpath; } ;
struct TYPE_4__ {TYPE_1__ isar; } ;
struct BCState {int mode; int Flag; TYPE_2__ hw; struct IsdnCardState* cs; } ;


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
 int FUNC_0 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (struct IsdnCardState*,int,int,int,int*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct BCState *VAR_25) {
 struct IsdnCardState *VAR_26 = VAR_25->cs;
 u_char VAR_27 = FUNC_0(VAR_25->hw.isar.dpath);
 u_char VAR_28, VAR_29[6];

 switch (VAR_25->mode) {
  case 130:
  case 129:
  case 131:
   FUNC_1(VAR_26, VAR_27 | VAR_3, VAR_7, 0, ((void*)0));
   break;
  case 128:
   VAR_28 = VAR_8;
   if (FUNC_3(VAR_1, &VAR_25->Flag)) {
    VAR_28 |= VAR_4;
    VAR_29[5] = VAR_22;
   } else {
    VAR_29[5] = VAR_21;
   }
   VAR_29[0] = VAR_24;
   VAR_29[1] = VAR_15 | VAR_12 | VAR_13 |
       VAR_14 | VAR_11 | VAR_10;
   VAR_29[2] = VAR_16 | VAR_18 | VAR_17;
   VAR_29[3] = VAR_19;
   VAR_29[4] = VAR_20;
   FUNC_1(VAR_26, VAR_27 | VAR_3, VAR_28, 6, VAR_29);
   break;
  case 132:
   VAR_28 = VAR_9;
   if (FUNC_3(VAR_1, &VAR_25->Flag)) {
    VAR_28 |= VAR_4;
    VAR_29[1] = VAR_6;
   } else {
    VAR_29[1] = VAR_5;
   }
   VAR_29[0] = VAR_24;
   FUNC_1(VAR_26, VAR_27 | VAR_3, VAR_28, 2, VAR_29);
   VAR_25->hw.isar.state = VAR_23;
   VAR_25->hw.isar.newcmd = 0;
   VAR_25->hw.isar.newmod = 0;
   FUNC_2(VAR_0, &VAR_25->Flag);
   break;
 }
 FUNC_4(1000);
 FUNC_1(VAR_26, VAR_27 | VAR_2, 0, 0, ((void*)0));
 FUNC_4(1000);
}
