
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ systemState; int fatalError; int vpStatus; } ;
struct TYPE_10__ {int vendor; int product; } ;
struct TYPE_9__ {int qx3_detected; } ;
struct TYPE_8__ {int gainMode; } ;
struct TYPE_7__ {int firmwareVersion; int firmwareRevision; } ;
struct TYPE_12__ {TYPE_5__ status; TYPE_4__ pnpID; TYPE_3__ qx3; TYPE_2__ exposure; TYPE_1__ version; } ;
struct cam_data {TYPE_6__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (struct cam_data*,int ,int ,int,int ,int ) ;
 int FUNC_2 (struct cam_data*) ;
 int FUNC_3 (struct cam_data*) ;
 scalar_t__ FUNC_4 (struct cam_data*) ;
 int FUNC_5 (struct cam_data*) ;

__attribute__((used)) static int FUNC_6(struct cam_data *VAR_12)
{
 int VAR_13;

 if (FUNC_4(VAR_12)) {
  if (VAR_12->params.status.systemState != VAR_11)
   return -VAR_7;


  VAR_13 = FUNC_3(VAR_12);
  if(VAR_13)
   return VAR_13;
  FUNC_1(VAR_12, VAR_1, 0, 0, 0, 0);
  if (FUNC_4(VAR_12))
   return -VAR_7;
 }




 VAR_12->params.version.firmwareVersion = 0;
 FUNC_2(VAR_12);
 if (VAR_12->params.version.firmwareVersion != 1)
  return -VAR_7;


 if(VAR_12->params.version.firmwareRevision <= 2 &&
    VAR_12->params.exposure.gainMode > 2) {
  VAR_12->params.exposure.gainMode = 2;
 }


 VAR_12->params.qx3.qx3_detected = (VAR_12->params.pnpID.vendor == 0x0813 &&
     VAR_12->params.pnpID.product == 0x0001);






 FUNC_1(VAR_12, VAR_4, VAR_9, 0,
     VAR_10, 0);


 VAR_13 = FUNC_3(VAR_12);
 if (VAR_13)
  return VAR_13;


 if (FUNC_1(VAR_12, VAR_2, 0, 0, 0, 0))
  return -VAR_6;

 if (VAR_12->params.status.fatalError) {
  FUNC_0("fatal_error:              %#04x\n",
      VAR_12->params.status.fatalError);
  FUNC_0("vp_status:                %#04x\n",
      VAR_12->params.status.vpStatus);
  if (VAR_12->params.status.fatalError & ~(VAR_0|VAR_5)) {

   return -VAR_6;
  } else if (VAR_12->params.status.fatalError & (VAR_0|VAR_5)) {


   FUNC_1(VAR_12, VAR_4,
       VAR_8, ~(VAR_0|VAR_5), 0, 0);
  }
 }


 if (VAR_12->params.status.fatalError) {
  if (VAR_12->params.status.fatalError)
   return -VAR_6;
 }



 FUNC_1(VAR_12, VAR_3, 0, 0, 0, 0);


 return FUNC_5(VAR_12);
}
