
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int processorid_t ;
struct TYPE_4__ {int * dts_options; int dts_activity; } ;
typedef TYPE_1__ dtrace_state_t ;
typedef int dtrace_optval_t ;
typedef int cpu_setup_t ;
struct TYPE_5__ {TYPE_1__* dta_state; } ;




 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(cpu_setup_t VAR_10, processorid_t VAR_11)
{
 FUNC_0(&VAR_7, VAR_6);
 FUNC_2(&VAR_9);

 switch (VAR_10) {
 case 129: {
  dtrace_state_t *VAR_12;
  dtrace_optval_t *VAR_13, VAR_14, VAR_15;




  if ((VAR_12 = VAR_8.dta_state) == ((void*)0))
   break;

  if (VAR_12->dts_activity != VAR_4)
   break;

  VAR_13 = VAR_12->dts_options;
  VAR_15 = VAR_13[VAR_2];

  if (VAR_15 != VAR_5 && VAR_15 != VAR_3 && VAR_15 != VAR_11)
   break;







  VAR_14 = VAR_13[VAR_0];
  VAR_13[VAR_0] = VAR_1;
  VAR_13[VAR_2] = (dtrace_optval_t)VAR_11;

  (void) FUNC_1(VAR_12);

  VAR_13[VAR_0] = VAR_14;
  VAR_13[VAR_2] = VAR_15;

  break;
 }

 case 128:




  break;

 default:
  break;
 }

 FUNC_3(&VAR_9);
 return (0);
}
