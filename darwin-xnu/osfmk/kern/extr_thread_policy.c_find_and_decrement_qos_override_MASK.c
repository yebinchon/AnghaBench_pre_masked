
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
typedef TYPE_1__* thread_t ;
struct thread_qos_override {scalar_t__ override_resource; int override_resource_type; scalar_t__ override_contended_resource_count; struct thread_qos_override* override_next; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {struct thread_qos_override* overrides; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(thread_t VAR_2,
                                user_addr_t VAR_3,
                                int VAR_4,
                                boolean_t VAR_5,
                                struct thread_qos_override **VAR_6)
{
 struct thread_qos_override *VAR_7, *VAR_8;

 VAR_8 = ((void*)0);
 VAR_7 = VAR_2->overrides;
 while (VAR_7) {
  struct thread_qos_override *VAR_9 = VAR_7->override_next;

  if ((VAR_0 == VAR_3 || VAR_7->override_resource == VAR_3) &&
      (VAR_1 == VAR_4 || VAR_7->override_resource_type == VAR_4)) {

   if (VAR_5) {
    VAR_7->override_contended_resource_count = 0;
   } else {
    VAR_7->override_contended_resource_count--;
   }

   if (VAR_7->override_contended_resource_count == 0) {
    if (VAR_8 == ((void*)0)) {
     VAR_2->overrides = VAR_9;
    } else {
     VAR_8->override_next = VAR_9;
    }


    VAR_7->override_next = *VAR_6;
    *VAR_6 = VAR_7;
   } else {
    VAR_8 = VAR_7;
   }

   if (VAR_0 != VAR_3) {
    return;
   }
  } else {
   VAR_8 = VAR_7;
  }

  VAR_7 = VAR_9;
 }
}
