
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef int dsptask_t ;
struct TYPE_3__ {scalar_t__ workarea; int dsp_task; } ;
typedef TYPE_1__ card_block ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (size_t) ;
 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(dsptask_t *VAR_2)
{
 u32 VAR_3;
 card_block *VAR_4 = ((void*)0);
 VAR_3 = 0;
 while(VAR_3<VAR_0) {
  VAR_4 = &VAR_1[VAR_3];
  if(&VAR_4->dsp_task==VAR_2) break;
  VAR_3++;
 }
 if(VAR_3>=VAR_0) return;

 FUNC_1(0xFF000000);
 while(FUNC_0());
 FUNC_1((u32)VAR_4->workarea);
 while(FUNC_0());
}
