
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mcast_req {size_t func; int func_list; int group_list; struct mcast_group* group; } ;
struct mcast_group {int refcount; int work; TYPE_2__* demux; TYPE_1__* func; int pending_list; } ;
struct TYPE_4__ {int mcg_wq; } ;
struct TYPE_3__ {int pending; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mcast_req *VAR_0)
{
 struct mcast_group *VAR_1 = VAR_0->group;

 FUNC_0(&VAR_1->refcount);
 FUNC_0(&VAR_1->refcount);
 FUNC_1(&VAR_0->group_list, &VAR_1->pending_list);
 FUNC_1(&VAR_0->func_list, &VAR_1->func[VAR_0->func].pending);

 if (!FUNC_2(VAR_1->demux->mcg_wq, &VAR_1->work))
  FUNC_3(&VAR_1->refcount);
}
