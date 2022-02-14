
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {int ctx_roll; int ctx_bm; int neh_list; int neh_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct uwb_rc *VAR_0)
{
 FUNC_2(&VAR_0->neh_lock);
 FUNC_0(&VAR_0->neh_list);
 FUNC_1(0, VAR_0->ctx_bm);
 FUNC_1(0xff, VAR_0->ctx_bm);
 VAR_0->ctx_roll = 1;
}
