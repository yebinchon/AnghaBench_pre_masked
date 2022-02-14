
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct IsdnCardState {int dummy; } ;
struct TYPE_3__ {int dpath; } ;
struct TYPE_4__ {TYPE_1__ isar; } ;
struct BCState {int mode; TYPE_2__ hw; scalar_t__ channel; struct IsdnCardState* cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (struct IsdnCardState*,int,int,int,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct BCState *VAR_6) {
 struct IsdnCardState *VAR_7 = VAR_6->cs;
 u_char VAR_8 = FUNC_0(VAR_6->hw.isar.dpath);
 u_char VAR_9 = VAR_1, VAR_10[5] = {VAR_3,0,0,0,0};

 if (VAR_6->channel)
  VAR_10[1] = VAR_10[3] = 1;
 switch (VAR_6->mode) {
  case 130:
   VAR_9 = 0;

   VAR_10[1] = VAR_10[3] = VAR_6->hw.isar.dpath + 2;
   break;
  case 129:
  case 131:
   break;
  case 128:
  case 132:
   VAR_9 |= VAR_0 | VAR_2;
   break;
 }
 FUNC_1(VAR_7, VAR_8 | VAR_4, VAR_9, 5, VAR_10);
 FUNC_2(1000);
 FUNC_1(VAR_7, VAR_8 | VAR_5, 0, 0, ((void*)0));
 FUNC_2(1000);
}
