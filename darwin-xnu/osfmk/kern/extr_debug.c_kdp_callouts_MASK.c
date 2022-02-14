
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kdp_callout {struct kdp_callout* callout_next; scalar_t__ callout_in_progress; int callout_arg; int (* callout_fn ) (int ,int ) ;} ;
typedef int kdp_event_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct kdp_callout* VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(kdp_event_t VAR_3)
{
 struct kdp_callout *VAR_4 = VAR_2;

 while (VAR_4) {
  if (!VAR_4->callout_in_progress) {
   VAR_4->callout_in_progress = VAR_1;
   VAR_4->callout_fn(VAR_4->callout_arg, VAR_3);
   VAR_4->callout_in_progress = VAR_0;
  }
  VAR_4 = VAR_4->callout_next;
 }
}
