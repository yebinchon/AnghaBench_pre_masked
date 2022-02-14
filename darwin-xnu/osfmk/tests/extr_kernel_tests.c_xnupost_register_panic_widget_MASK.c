
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * xt_panic_widget_func ;
typedef int kern_return_t ;
struct TYPE_2__ {char const* xtp_func_name; void** xtp_outval_p; int * xtp_func; int * xtp_context_p; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

kern_return_t
FUNC_0(xt_panic_widget_func VAR_3, const char * VAR_4, void * VAR_5, void ** VAR_6)
{
 if (VAR_2.xtp_context_p != ((void*)0) || VAR_2.xtp_func != ((void*)0))
  return VAR_0;

 VAR_2.xtp_context_p = VAR_5;
 VAR_2.xtp_func = VAR_3;
 VAR_2.xtp_func_name = VAR_4;
 VAR_2.xtp_outval_p = VAR_6;

 return VAR_1;
}
