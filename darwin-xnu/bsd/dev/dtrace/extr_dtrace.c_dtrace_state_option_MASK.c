
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dcr_destructive; } ;
struct TYPE_5__ {scalar_t__ dts_activity; scalar_t__* dts_options; TYPE_1__ dts_cred; } ;
typedef TYPE_2__ dtrace_state_t ;
typedef scalar_t__ dtrace_optval_t ;
typedef int dtrace_optid_t ;




 int VAR_0 ;


 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_2(dtrace_state_t *VAR_10, dtrace_optid_t VAR_11,
    dtrace_optval_t VAR_12)
{
 FUNC_0(&VAR_9, VAR_6);

 if (VAR_10->dts_activity != VAR_2)
  return (VAR_4);

 if (VAR_11 >= VAR_1)
  return (VAR_5);

 if (VAR_11 != VAR_0 && VAR_12 < 0)
  return (VAR_5);

 switch (VAR_11) {
 case 131:





  if (FUNC_1() || VAR_8)
   return (VAR_3);

  VAR_10->dts_cred.dcr_destructive = 1;
  break;

 case 132:
 case 130:
 case 133:
 case 129:
 case 128:
  if (VAR_12 < 0)
   return (VAR_5);

  if (VAR_12 >= VAR_7) {
   VAR_12 = VAR_7 - (1 << 27) + 1;
  }
 }

 VAR_10->dts_options[VAR_11] = VAR_12;

 return (0);
}
