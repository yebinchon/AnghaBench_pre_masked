
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ e_status ;
struct TYPE_4__ {scalar_t__ status; scalar_t__ alterGameState; int buf; int fileName; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_2__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 size_t VAR_5 ;

e_status FUNC_2(int VAR_6) {

 if (VAR_6 < 0 || VAR_6>= VAR_2 || VAR_3[VAR_6].status == VAR_1) return VAR_1;
 VAR_5 = VAR_6;

 FUNC_0("trFMV::stop(), closing %s\n", VAR_3[VAR_5].fileName);

 if (!VAR_3[VAR_5].buf) {
  return VAR_1;
 }

 if (VAR_3[VAR_5].alterGameState) {
  if ( VAR_4.state != VAR_0 ) {
   return VAR_3[VAR_5].status;
  }
 }
 VAR_3[VAR_5].status = VAR_1;
 FUNC_1();

 return VAR_1;
}
