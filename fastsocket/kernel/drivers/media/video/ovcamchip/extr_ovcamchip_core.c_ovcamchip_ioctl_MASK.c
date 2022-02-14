
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct ovcamchip {int initialized; int subtype; int mono; TYPE_1__* sops; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int (* init ) (struct i2c_client*) ;long (* command ) (struct i2c_client*,unsigned int,void*) ;} ;


 int VAR_0 ;
 long VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct i2c_client*) ;
 long FUNC_1 (struct i2c_client*,unsigned int,void*) ;
 struct ovcamchip* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,char*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*,char*) ;
 int FUNC_6 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static long FUNC_7(struct v4l2_subdev *VAR_3, unsigned int VAR_4, void *VAR_5)
{
 struct ovcamchip *VAR_6 = FUNC_2(VAR_3);
 struct i2c_client *VAR_7 = FUNC_4(VAR_3);

 if (!VAR_6->initialized &&
     VAR_4 != 128 &&
     VAR_4 != 129) {
  FUNC_3(VAR_3, "Camera chip not initialized yet!\n");
  return -VAR_1;
 }

 switch (VAR_4) {
 case 128:
 {
  *(int *)VAR_5 = VAR_6->subtype;
  return 0;
 }
 case 129:
 {
  int VAR_8;

  if (VAR_2 == -1)
   VAR_6->mono = *(int *)VAR_5;
  else
   VAR_6->mono = VAR_2;

  if (VAR_6->mono) {
   if (VAR_6->subtype != VAR_0)
    FUNC_6(VAR_3, "Monochrome not "
     "implemented for this chip\n");
   else
    FUNC_5(VAR_3, "Initializing chip as "
     "monochrome\n");
  }

  VAR_8 = VAR_6->sops->init(VAR_7);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_6->initialized = 1;
  return 0;
 }
 default:
  return VAR_6->sops->command(VAR_7, VAR_4, VAR_5);
 }
}
