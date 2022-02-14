
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ShutdownMonitoringTimer; scalar_t__ FirmwareType; scalar_t__ HardwareType; int IO_Address; int MonitoringTimer; int queue_lock; scalar_t__ ControllerInitialized; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_11(DAC960_Controller_T *VAR_5)
{
  if (VAR_5->ControllerInitialized)
    {
      unsigned long VAR_6;
      FUNC_9(&VAR_5->queue_lock, VAR_6);
      VAR_5->ShutdownMonitoringTimer = 1;
      FUNC_10(&VAR_5->queue_lock, VAR_6);

      FUNC_7(&VAR_5->MonitoringTimer);
      if (VAR_5->FirmwareType == VAR_1)
 {
   FUNC_3("Flushing Cache...", VAR_5);
   FUNC_5(VAR_5, VAR_2, 0);
   FUNC_3("done\n", VAR_5);

   if (VAR_5->HardwareType == VAR_0)
       FUNC_8(VAR_5->IO_Address, 0x80);
 }
      else
 {
   FUNC_3("Flushing Cache...", VAR_5);
   FUNC_6(VAR_5, VAR_3,
        VAR_4);
   FUNC_3("done\n", VAR_5);
 }
    }
  FUNC_4(VAR_5);
  FUNC_0(VAR_5);
  FUNC_1(VAR_5);
  FUNC_2(VAR_5);
}
