
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq_link {scalar_t__ sl_invalidate_ts; int sl_invalidate_bt; int wqte; scalar_t__ sl_alloc_ts; int sl_alloc_bt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct waitq_link *VAR_1, int VAR_2)
{
 FUNC_0(&VAR_0, &VAR_1->wqte, VAR_2);
}
