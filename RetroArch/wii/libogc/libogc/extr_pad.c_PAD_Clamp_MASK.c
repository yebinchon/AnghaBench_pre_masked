
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t s32 ;
struct TYPE_3__ {scalar_t__ err; int triggerR; int triggerL; int substickY; int substickX; int stickY; int stickX; } ;
typedef TYPE_1__ PADStatus ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int *,int ,int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(PADStatus *VAR_3)
{
 s32 VAR_4;

 for(VAR_4=0;VAR_4<VAR_0;VAR_4++) {
  if(VAR_3[VAR_4].err==VAR_1) {
   FUNC_0(&VAR_3[VAR_4].stickX,&VAR_3[VAR_4].stickY,VAR_2[3],VAR_2[4],VAR_2[2]);
   FUNC_0(&VAR_3[VAR_4].substickX,&VAR_3[VAR_4].substickY,VAR_2[6],VAR_2[7],VAR_2[5]);
   FUNC_1(&VAR_3[VAR_4].triggerL);
   FUNC_1(&VAR_3[VAR_4].triggerR);
  }
 }
}
