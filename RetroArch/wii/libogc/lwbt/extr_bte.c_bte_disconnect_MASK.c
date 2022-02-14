
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bte_pcb {int * ctl_pcb; int * data_pcb; scalar_t__ state; } ;
typedef int s32 ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;

s32 FUNC_3(struct bte_pcb *VAR_4)
{
 u32 VAR_5;
 err_t VAR_6 = VAR_0;

 if(VAR_4==((void*)0)) return VAR_1;

 FUNC_0(VAR_5);
 VAR_4->state = (u32)VAR_2;
 if(VAR_4->data_pcb!=((void*)0) )
  VAR_6 = FUNC_2(VAR_4->data_pcb,VAR_3);
 else if(VAR_4->ctl_pcb!=((void*)0))
  VAR_6 = FUNC_2(VAR_4->ctl_pcb,VAR_3);
 FUNC_1(VAR_5);

 return VAR_6;
}
