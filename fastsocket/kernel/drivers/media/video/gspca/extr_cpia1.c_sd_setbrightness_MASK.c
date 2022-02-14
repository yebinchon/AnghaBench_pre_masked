
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int brightness; } ;
struct TYPE_4__ {int allowableOverExposure; } ;
struct TYPE_6__ {TYPE_2__ colourParams; TYPE_1__ flickerControl; } ;
struct sd {TYPE_3__ params; } ;
struct gspca_dev {scalar_t__ streaming; } ;
typedef int __s32 ;


 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_0, __s32 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;
 int VAR_3;

 VAR_2->params.colourParams.brightness = VAR_1;
 VAR_2->params.flickerControl.allowableOverExposure =
  FUNC_2(VAR_2->params.colourParams.brightness);
 if (VAR_0->streaming) {
  VAR_3 = FUNC_0(VAR_0);
  if (VAR_3)
   return VAR_3;
  return FUNC_1(VAR_0);
 }
 return 0;
}
