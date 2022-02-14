
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kdp_callout {struct kdp_callout* callout_next; int callout_in_progress; void* callout_arg; int callout_fn; } ;
typedef int kdp_callout_fn_t ;


 int VAR_0 ;
 int FUNC_0 (struct kdp_callout*,struct kdp_callout*,struct kdp_callout**) ;
 struct kdp_callout* FUNC_1 (int) ;
 struct kdp_callout* VAR_1 ;
 int FUNC_2 (char*) ;

void
FUNC_3(kdp_callout_fn_t VAR_2, void * VAR_3)
{
 struct kdp_callout * VAR_4;
 struct kdp_callout * VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  FUNC_2("kdp_register_callout() kalloc failed");

 VAR_4->callout_fn = VAR_2;
 VAR_4->callout_arg = VAR_3;
 VAR_4->callout_in_progress = VAR_0;


 do {
  VAR_5 = VAR_1;
  VAR_4->callout_next = VAR_5;
 } while (!FUNC_0(VAR_5, VAR_4, &VAR_1));
}
