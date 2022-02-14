
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
typedef TYPE_1__* thread_t ;
struct thread_qos_override {scalar_t__ override_resource; int override_resource_type; struct thread_qos_override* override_next; } ;
struct TYPE_3__ {struct thread_qos_override* overrides; } ;



__attribute__((used)) static struct thread_qos_override *
FUNC_0(thread_t VAR_0,
                  user_addr_t VAR_1,
                  int VAR_2)
{
 struct thread_qos_override *VAR_3;

 VAR_3 = VAR_0->overrides;
 while (VAR_3) {
  if (VAR_3->override_resource == VAR_1 &&
      VAR_3->override_resource_type == VAR_2) {
   return VAR_3;
  }

  VAR_3 = VAR_3->override_next;
 }

 return ((void*)0);
}
