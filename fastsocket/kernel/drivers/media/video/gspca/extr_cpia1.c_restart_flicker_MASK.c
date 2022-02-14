
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ flickerMode; int coarseJump; int disabled; } ;
struct TYPE_4__ {int coarseExpLo; int coarseExpHi; } ;
struct TYPE_6__ {TYPE_2__ flickerControl; TYPE_1__ exposure; } ;
struct sd {TYPE_3__ params; int cam_exposure; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3, VAR_4;

 if (!FUNC_0(1, 2))
  return;

 VAR_3 = FUNC_1(&VAR_2->cam_exposure);

 if (VAR_2->params.flickerControl.flickerMode == 0 ||
     VAR_3 == 0)
  return;

 VAR_4 = VAR_2->params.exposure.coarseExpLo +
    VAR_2->params.exposure.coarseExpHi*256;




 VAR_3 %= VAR_2->params.flickerControl.coarseJump;
 if (!VAR_2->params.flickerControl.disabled &&
     VAR_3 <= VAR_2->params.flickerControl.coarseJump - 3) {

  VAR_2->params.flickerControl.disabled = 1;
 }

 if (VAR_2->params.flickerControl.disabled &&
     VAR_4 > VAR_2->params.flickerControl.coarseJump +
        VAR_0) {


  FUNC_2(VAR_1, 1, 1);
 }
}
