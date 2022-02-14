
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct IsdnCardState {int dummy; } ;
struct TYPE_4__ {int cmd; int mod; int newmod; int try_mod; void* state; void* newcmd; int dpath; } ;
struct TYPE_3__ {TYPE_2__ isar; } ;
struct BCState {TYPE_1__ hw; int Flag; struct IsdnCardState* cs; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;




 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_1 (struct BCState*,int ) ;
 int FUNC_2 (struct IsdnCardState*,int,int,int,int*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct BCState *VAR_14, u_char VAR_15, u_char VAR_16)
{
 struct IsdnCardState *VAR_17 = VAR_14->cs;
 u_char VAR_18 = FUNC_0(VAR_14->hw.isar.dpath);
 u_char VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;

 switch(VAR_15) {
  case 128:
   FUNC_3(VAR_0, &VAR_14->Flag);
   if (VAR_14->hw.isar.state == VAR_13) {
    VAR_21 = VAR_16;
    VAR_19 = VAR_7;
    VAR_20 = 1;
    VAR_14->hw.isar.state = VAR_11;
    VAR_14->hw.isar.cmd = VAR_19;
    VAR_14->hw.isar.mod = VAR_16;
    VAR_14->hw.isar.newmod = 0;
    VAR_14->hw.isar.newcmd = 0;
    VAR_14->hw.isar.try_mod = 3;
   } else if ((VAR_14->hw.isar.state == VAR_9) &&
    (VAR_14->hw.isar.cmd == VAR_7) &&
    (VAR_14->hw.isar.mod == VAR_16)) {
    FUNC_1(VAR_14, VAR_2);
   } else {
    VAR_14->hw.isar.newmod = VAR_16;
    VAR_14->hw.isar.newcmd = VAR_7;
    VAR_20 = 0;
    VAR_19 = VAR_3;
    VAR_14->hw.isar.state = VAR_10;
   }
   break;
  case 129:
   FUNC_3(VAR_0, &VAR_14->Flag);
   if (VAR_14->hw.isar.state == VAR_13) {
    VAR_21 = VAR_16;
    VAR_19 = VAR_6;
    VAR_20 = 1;
    VAR_14->hw.isar.state = VAR_11;
    VAR_14->hw.isar.cmd = VAR_19;
    VAR_14->hw.isar.mod = VAR_16;
    VAR_14->hw.isar.newmod = 0;
    VAR_14->hw.isar.newcmd = 0;
    VAR_14->hw.isar.try_mod = 3;
   } else if ((VAR_14->hw.isar.state == VAR_9) &&
    (VAR_14->hw.isar.cmd == VAR_6) &&
    (VAR_14->hw.isar.mod == VAR_16)) {
    FUNC_1(VAR_14, VAR_2);
   } else {
    VAR_14->hw.isar.newmod = VAR_16;
    VAR_14->hw.isar.newcmd = VAR_6;
    VAR_20 = 0;
    VAR_19 = VAR_3;
    VAR_14->hw.isar.state = VAR_10;
   }
   break;
  case 130:
   FUNC_3(VAR_0, &VAR_14->Flag);
   if (VAR_14->hw.isar.state == VAR_13) {
    VAR_21 = VAR_16;
    VAR_19 = VAR_5;
    VAR_20 = 1;
    VAR_14->hw.isar.state = VAR_11;
    VAR_14->hw.isar.cmd = VAR_19;
    VAR_14->hw.isar.mod = VAR_16;
    VAR_14->hw.isar.newmod = 0;
    VAR_14->hw.isar.newcmd = 0;
    VAR_14->hw.isar.try_mod = 3;
   } else if ((VAR_14->hw.isar.state == VAR_9) &&
    (VAR_14->hw.isar.cmd == VAR_5) &&
    (VAR_14->hw.isar.mod == VAR_16)) {
    FUNC_1(VAR_14, VAR_2);
   } else {
    VAR_14->hw.isar.newmod = VAR_16;
    VAR_14->hw.isar.newcmd = VAR_5;
    VAR_20 = 0;
    VAR_19 = VAR_3;
    VAR_14->hw.isar.state = VAR_10;
   }
   break;
  case 131:
   FUNC_4(VAR_0, &VAR_14->Flag);
   if (VAR_14->hw.isar.state == VAR_13) {
    VAR_21 = VAR_16;
    VAR_19 = VAR_4;
    VAR_20 = 1;
    VAR_14->hw.isar.state = VAR_11;
    VAR_14->hw.isar.cmd = VAR_19;
    VAR_14->hw.isar.mod = VAR_16;
    VAR_14->hw.isar.newmod = 0;
    VAR_14->hw.isar.newcmd = 0;
    VAR_14->hw.isar.try_mod = 3;
   } else if ((VAR_14->hw.isar.state == VAR_9) &&
    (VAR_14->hw.isar.cmd == VAR_4) &&
    (VAR_14->hw.isar.mod == VAR_16)) {
    FUNC_1(VAR_14, VAR_2);
   } else {
    VAR_14->hw.isar.newmod = VAR_16;
    VAR_14->hw.isar.newcmd = VAR_4;
    VAR_20 = 0;
    VAR_19 = VAR_3;
    VAR_14->hw.isar.state = VAR_10;
   }
   break;
  case 132:
   VAR_14->hw.isar.state = VAR_12;
   VAR_20 = 0;
   VAR_19 = VAR_8;
   break;
 }
 if (VAR_19)
  FUNC_2(VAR_17, VAR_18 | VAR_1, VAR_19, VAR_20, &VAR_21);
}
