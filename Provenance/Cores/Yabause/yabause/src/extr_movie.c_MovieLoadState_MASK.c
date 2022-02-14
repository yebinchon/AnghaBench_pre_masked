
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ReadOnly; scalar_t__ Status; int Rerecords; int fp; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(void) {


 if (VAR_0.ReadOnly == 1 && VAR_0.Status == VAR_2) {

  FUNC_1 (VAR_0.fp,VAR_8+(VAR_6 * VAR_7),VAR_5);
 }

 if(VAR_0.Status == VAR_3) {
  FUNC_1 (VAR_0.fp,VAR_8+(VAR_6 * VAR_7),VAR_5);
  VAR_0.Rerecords++;
 }

 if(VAR_0.Status == VAR_2 && VAR_0.ReadOnly == 0) {
  VAR_0.Status = VAR_3;
  VAR_4=1;
  FUNC_2(VAR_1, "Recording Resumed");
  FUNC_0(VAR_0);
  FUNC_1 (VAR_0.fp,VAR_8+(VAR_6 * VAR_7),VAR_5);
  VAR_0.Rerecords++;
 }
}
