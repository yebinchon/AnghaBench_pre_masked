
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netagent_session {void* event_context; int event_handler; } ;
typedef struct netagent_session* netagent_session_t ;
typedef int netagent_event_f ;


 struct netagent_session* FUNC_0 (int ) ;

netagent_session_t FUNC_1(netagent_event_f VAR_0, void *VAR_1)
{
 struct netagent_session *VAR_2 = FUNC_0(0);
 if (VAR_2 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_2->event_handler = VAR_0;
 VAR_2->event_context = VAR_1;
 return VAR_2;
}
