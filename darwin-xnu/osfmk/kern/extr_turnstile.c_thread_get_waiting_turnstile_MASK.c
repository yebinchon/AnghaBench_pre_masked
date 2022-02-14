
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct waitq {int dummy; } ;
struct turnstile {int dummy; } ;
struct TYPE_3__ {struct waitq* waitq; } ;


 struct turnstile* VAR_0 ;
 struct waitq* FUNC_0 (struct waitq*) ;
 scalar_t__ FUNC_1 (struct waitq*) ;
 scalar_t__ FUNC_2 (struct waitq*) ;
 struct turnstile* FUNC_3 (struct waitq*) ;

struct turnstile *
FUNC_4(thread_t VAR_1)
{
 struct turnstile *VAR_2 = VAR_0;
 struct waitq *VAR_3 = VAR_1->waitq;


 if (VAR_3 == ((void*)0)) {
  return VAR_2;
 }


 if (FUNC_1(VAR_3)) {
  VAR_3 = FUNC_0(VAR_3);
 }


 if (FUNC_2(VAR_3)) {
  VAR_2 = FUNC_3(VAR_3);
 }
 return VAR_2;
}
