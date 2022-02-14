
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct thread_qos_override {struct thread_qos_override* override_next; int override_qos; } ;
struct TYPE_3__ {struct thread_qos_override* overrides; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_1(thread_t VAR_3)
{
 if (VAR_2 == VAR_0) {
  return VAR_1;
 }


 struct thread_qos_override *VAR_4;
 int VAR_5 = VAR_1;

 VAR_4 = VAR_3->overrides;
 while (VAR_4) {
  VAR_5 = FUNC_0(VAR_5, VAR_4->override_qos);
  VAR_4 = VAR_4->override_next;
 }

 return VAR_5;
}
