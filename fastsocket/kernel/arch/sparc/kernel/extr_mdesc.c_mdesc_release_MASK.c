
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdesc_handle {TYPE_1__* mops; int list; int refcnt; } ;
struct TYPE_2__ {int (* free ) (struct mdesc_handle*) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct mdesc_handle*) ;

void FUNC_5(struct mdesc_handle *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0, VAR_2);
 if (FUNC_0(&VAR_1->refcnt)) {
  FUNC_1(&VAR_1->list);
  VAR_1->mops->free(VAR_1);
 }
 FUNC_3(&VAR_0, VAR_2);
}
