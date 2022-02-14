
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bte_pcb {int cmdq; scalar_t__ state; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct bte_pcb* FUNC_1 (int *) ;
 int FUNC_2 (struct bte_pcb*,int ,int) ;

struct bte_pcb* FUNC_3()
{
 struct bte_pcb *VAR_2;

 if((VAR_2=FUNC_1(&VAR_1))==((void*)0)) return ((void*)0);

 FUNC_2(VAR_2,0,sizeof(struct bte_pcb));

 VAR_2->state = (u32)VAR_0;
 FUNC_0(&(VAR_2->cmdq));

 return VAR_2;
}
