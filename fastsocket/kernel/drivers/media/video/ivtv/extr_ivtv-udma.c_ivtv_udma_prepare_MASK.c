
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv {int dma_reg_lock; int i_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ivtv*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct ivtv *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_2->dma_reg_lock, VAR_3);
 if (!FUNC_4(VAR_0, &VAR_2->i_flags))
  FUNC_0(VAR_2);
 else
  FUNC_1(VAR_1, &VAR_2->i_flags);
 FUNC_3(&VAR_2->dma_reg_lock, VAR_3);
}
