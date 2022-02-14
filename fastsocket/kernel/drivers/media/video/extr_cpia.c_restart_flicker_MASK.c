
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int coarseExpLo; int coarseExpHi; int expMode; } ;
struct TYPE_4__ {scalar_t__ flickerMode; int coarseJump; int disabled; } ;
struct TYPE_6__ {TYPE_2__ exposure; TYPE_1__ flickerControl; } ;
struct cam_data {int* raw_image; int cmd_queue; int param_lock; int exposure_status; TYPE_3__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int*,int) ;

__attribute__((used)) static void FUNC_4(struct cam_data *VAR_3)
{
 int VAR_4, VAR_5;
 if(!FUNC_0(1,2))
  return;
 FUNC_1(&VAR_3->param_lock);
 if(VAR_3->params.flickerControl.flickerMode == 0 ||
    VAR_3->raw_image[39] == 0) {
  FUNC_2(&VAR_3->param_lock);
  return;
 }
 VAR_4 = VAR_3->raw_image[39]*2;
 VAR_5 = VAR_3->params.exposure.coarseExpLo +
    VAR_3->params.exposure.coarseExpHi*256;




 VAR_4 %= VAR_3->params.flickerControl.coarseJump;
 if(!VAR_3->params.flickerControl.disabled &&
    VAR_4 <= VAR_3->params.flickerControl.coarseJump - 3) {

  VAR_3->params.flickerControl.disabled = 1;
 }

 if(VAR_3->params.flickerControl.disabled &&
    VAR_3->params.flickerControl.flickerMode &&
    VAR_5 > VAR_3->params.flickerControl.coarseJump +
       VAR_2) {


  FUNC_3(&VAR_3->params, &VAR_3->cmd_queue, 1);
  if((VAR_3->cmd_queue & VAR_0) &&
     VAR_3->params.exposure.expMode == 2)
   VAR_3->exposure_status = VAR_1;

 }
 FUNC_2(&VAR_3->param_lock);
}
