
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Status; scalar_t__ ReadOnly; int fp; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(void) {

 if(VAR_0.Status == VAR_4 && VAR_5) {
  FUNC_1(VAR_0.fp);
  FUNC_2(VAR_0.fp);
  VAR_5=0;
  VAR_0.Status = VAR_6;
  FUNC_0();
  FUNC_3(VAR_1, "Recording Stopped");
 }

 if(VAR_0.Status == VAR_2 && VAR_3 && VAR_0.ReadOnly != 0) {
  FUNC_2(VAR_0.fp);
  VAR_3=0;
  VAR_0.Status = VAR_6;
  FUNC_0();
  FUNC_3(VAR_1, "Playback Stopped");
 }
}
