
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct TYPE_3__ {int at_safe_point; int wait_event; int * waitq; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(thread_t VAR_2)
{
 VAR_2->waitq = ((void*)0);
 VAR_2->wait_event = VAR_1;
 VAR_2->at_safe_point = VAR_0;
}
