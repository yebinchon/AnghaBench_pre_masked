
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {unsigned long data; int function; scalar_t__ expires; } ;
struct TYPE_11__ {int ControllerInitialized; TYPE_2__ MonitoringTimer; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool
FUNC_8(DAC960_Controller_T *VAR_3)
{
  if (FUNC_1(VAR_3) &&
      FUNC_4(VAR_3) &&
      FUNC_0(VAR_3) &&
      FUNC_2(VAR_3) &&
      FUNC_5(VAR_3) &&
      FUNC_3(VAR_3))
    {



      FUNC_7(&VAR_3->MonitoringTimer);
      VAR_3->MonitoringTimer.expires =
 VAR_2 + VAR_1;
      VAR_3->MonitoringTimer.data = (unsigned long) VAR_3;
      VAR_3->MonitoringTimer.function = VAR_0;
      FUNC_6(&VAR_3->MonitoringTimer);
      VAR_3->ControllerInitialized = 1;
      return 1;
    }
  return 0;
}
