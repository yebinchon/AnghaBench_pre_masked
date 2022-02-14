
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ Qdepth; scalar_t__ maxQsinceinit; int lock; int reqQ; } ;
typedef TYPE_1__ ctlr_info_t ;
typedef int CommandList_struct ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(ctlr_info_t *VAR_0,
 CommandList_struct *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_2);
 FUNC_0(&VAR_0->reqQ, VAR_1);
 VAR_0->Qdepth++;
 if (VAR_0->Qdepth > VAR_0->maxQsinceinit)
  VAR_0->maxQsinceinit = VAR_0->Qdepth;
 FUNC_4(VAR_0);
 FUNC_3(&VAR_0->lock, VAR_2);
}
