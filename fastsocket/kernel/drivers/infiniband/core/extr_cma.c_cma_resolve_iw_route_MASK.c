
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_id_private {int dummy; } ;
struct TYPE_2__ {int event; } ;
struct cma_work {int work; TYPE_1__ event; int new_state; int old_state; struct rdma_id_private* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cma_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct rdma_id_private *VAR_7, int VAR_8)
{
 struct cma_work *VAR_9;

 VAR_9 = FUNC_1(sizeof *VAR_9, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->id = VAR_7;
 FUNC_0(&VAR_9->work, VAR_5);
 VAR_9->old_state = VAR_3;
 VAR_9->new_state = VAR_4;
 VAR_9->event.event = VAR_2;
 FUNC_2(VAR_6, &VAR_9->work);
 return 0;
}
