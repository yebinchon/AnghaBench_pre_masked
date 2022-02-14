
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct common_obj {TYPE_1__* next_frm; TYPE_1__* cur_frm; } ;
struct TYPE_2__ {int done; int state; int ts; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct common_obj *VAR_1)
{
 FUNC_0(&VAR_1->cur_frm->ts);
 VAR_1->cur_frm->state = VAR_0;
 FUNC_1(&VAR_1->cur_frm->done);

 VAR_1->cur_frm = VAR_1->next_frm;
}
