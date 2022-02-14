
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw2100_priv {int msg_free_stat; int msg_free_list; TYPE_1__* msg_buffers; int msg_pend_list; } ;
struct TYPE_2__ {int list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct ipw2100_priv *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->msg_free_list);
 FUNC_0(&VAR_1->msg_pend_list);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_2(&VAR_1->msg_buffers[VAR_2].list, &VAR_1->msg_free_list);
 FUNC_1(&VAR_1->msg_free_stat, VAR_2);

 return 0;
}
