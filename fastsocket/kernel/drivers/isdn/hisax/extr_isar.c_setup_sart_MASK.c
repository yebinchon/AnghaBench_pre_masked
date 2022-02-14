
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u_char ;
struct IsdnCardState {int dummy; } ;
struct TYPE_3__ {int dpath; } ;
struct TYPE_4__ {TYPE_1__ isar; } ;
struct BCState {int mode; TYPE_2__ hw; struct IsdnCardState* cs; } ;


 char VAR_0 ;
 char VAR_1 ;





 char VAR_2 ;
 char FUNC_0 (int ) ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 int FUNC_1 (struct IsdnCardState*,char,char,int,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct BCState *VAR_9) {
 struct IsdnCardState *VAR_10 = VAR_9->cs;
 u_char VAR_11 = FUNC_0(VAR_9->hw.isar.dpath);
 u_char VAR_12, VAR_13[2];

 switch (VAR_9->mode) {
  case 130:
   FUNC_1(VAR_10, VAR_11 | VAR_1, VAR_4, 0,
    ((void*)0));
   break;
  case 129:
   FUNC_1(VAR_10, VAR_11 | VAR_1, VAR_3, 2,
    "\0\0");
   break;
  case 131:
   VAR_13[0] = 0;
   FUNC_1(VAR_10, VAR_11 | VAR_1, VAR_5, 1,
    VAR_13);
   break;
  case 128:
   VAR_12 = VAR_6 | VAR_2;
   VAR_13[0] = VAR_7;
   VAR_13[1] = VAR_8;
   FUNC_1(VAR_10, VAR_11 | VAR_1, VAR_12, 2,
    VAR_13);
   break;
  case 132:

   break;
 }
 FUNC_2(1000);
 FUNC_1(VAR_10, VAR_11 | VAR_0, 0, 0, ((void*)0));
 FUNC_2(1000);
}
