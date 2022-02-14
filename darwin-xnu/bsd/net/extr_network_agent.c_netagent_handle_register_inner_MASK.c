
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int netagent_flags; } ;
struct netagent_wrapper {TYPE_1__ netagent; int pending_triggers_list; scalar_t__ generation; int event_context; int event_handler; int control_unit; } ;
struct netagent_session {struct netagent_wrapper* wrapper; int event_context; int event_handler; int control_unit; } ;
typedef int errno_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct netagent_wrapper*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static errno_t
FUNC_4(struct netagent_session *VAR_8, struct netagent_wrapper *VAR_9)
{
 FUNC_3(&VAR_6);

 VAR_9->control_unit = VAR_8->control_unit;
 VAR_9->event_handler = VAR_8->event_handler;
 VAR_9->event_context = VAR_8->event_context;
 VAR_9->generation = VAR_2++;

 VAR_8->wrapper = VAR_9;
 FUNC_1(&VAR_4, VAR_9, VAR_3);
 FUNC_0(&VAR_9->pending_triggers_list);

 VAR_9->netagent.netagent_flags |= VAR_1;
 VAR_7++;
 if (VAR_9->netagent.netagent_flags & VAR_0) {
  VAR_5++;
 }

 FUNC_2(&VAR_6);

 return 0;
}
