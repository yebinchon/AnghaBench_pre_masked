
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* cm_id; } ;
struct nes_cm_event {int event_work; TYPE_4__* cm_node; TYPE_1__ cm_info; } ;
struct TYPE_8__ {TYPE_2__* cm_core; } ;
struct TYPE_7__ {int (* add_ref ) (TYPE_3__*) ;} ;
struct TYPE_6__ {int event_wq; int events_posted; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(struct nes_cm_event *VAR_2)
{
 FUNC_2(&VAR_2->cm_node->cm_core->events_posted);
 FUNC_1(VAR_2->cm_node);
 VAR_2->cm_info.cm_id->add_ref(VAR_2->cm_info.cm_id);
 FUNC_0(&VAR_2->event_work, VAR_1);
 FUNC_3(VAR_0, "cm_node=%p queue_work, event=%p\n",
    VAR_2->cm_node, VAR_2);

 FUNC_4(VAR_2->cm_node->cm_core->event_wq, &VAR_2->event_work);

 FUNC_3(VAR_0, "Exit\n");
 return 0;
}
