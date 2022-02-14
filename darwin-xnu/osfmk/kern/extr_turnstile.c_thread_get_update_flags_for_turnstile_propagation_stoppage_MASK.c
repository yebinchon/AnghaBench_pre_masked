
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int turnstile_stats_update_flags_t ;
typedef TYPE_1__* thread_t ;
struct waitq {int dummy; } ;
struct TYPE_3__ {struct waitq* waitq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct waitq* FUNC_0 (struct waitq*) ;
 scalar_t__ FUNC_1 (struct waitq*) ;
 int FUNC_2 (struct waitq*) ;

__attribute__((used)) static turnstile_stats_update_flags_t
FUNC_3(thread_t VAR_3)
{
 struct waitq *VAR_4 = VAR_3->waitq;


 if (VAR_4 == ((void*)0)) {
  return VAR_2;
 }


 if (FUNC_1(VAR_4)) {
  VAR_4 = FUNC_0(VAR_4);
 }


 if (!FUNC_2(VAR_4)) {
  return VAR_1;
 }


 return VAR_0;
}
