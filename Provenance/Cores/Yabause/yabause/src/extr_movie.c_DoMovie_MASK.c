
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Status; int Frames; scalar_t__ ReadOnly; int fp; } ;
struct TYPE_5__ {int * data; } ;
struct TYPE_4__ {int * data; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 () ;
 void* VAR_9 ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 size_t FUNC_4 (int *,int,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int,int ) ;
 int VAR_11 ;
 int FUNC_7 (int ,char*) ;

void FUNC_8(void) {

 int VAR_12;
   size_t VAR_13 = 0;

 if (VAR_1.Status == 0)
  return;

 FUNC_1();
 VAR_0=1;
 FUNC_2();


 if(VAR_1.Status == VAR_7) {
  for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
   FUNC_6(&VAR_3[VAR_12], 1, 1, VAR_1.fp);
  }
  for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
   FUNC_6(&VAR_4[VAR_12], 1, 1, VAR_1.fp);
  }
 }

 if(VAR_1.Status == VAR_5) {
  for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
         VAR_13 = FUNC_4(&VAR_3[VAR_12], 1, 1, VAR_1.fp);
  }
  for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
         VAR_13 = FUNC_4(&VAR_4[VAR_12], 1, 1, VAR_1.fp);
  }


  if(((FUNC_5(VAR_1.fp)-VAR_11)/VAR_10) >= VAR_1.Frames) {
   FUNC_3(VAR_1.fp);
   VAR_6=0;
   VAR_1.Status = VAR_9;
   FUNC_0();
   FUNC_7(VAR_2, "Playback Stopped");
  }
 }


 if(VAR_1.Status != VAR_7 && VAR_8) {
  FUNC_3(VAR_1.fp);
  VAR_8=0;
  VAR_1.Status = VAR_9;
  FUNC_7(VAR_2, "Recording Stopped");
 }

 if(VAR_1.Status != VAR_5 && VAR_6 && VAR_1.ReadOnly != 0) {
  FUNC_3(VAR_1.fp);
  VAR_6=0;
  VAR_1.Status = VAR_9;
  FUNC_7(VAR_2, "Playback Stopped");
 }
}
