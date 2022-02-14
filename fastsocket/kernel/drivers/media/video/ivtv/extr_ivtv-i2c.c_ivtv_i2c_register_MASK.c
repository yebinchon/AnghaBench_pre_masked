
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int grp_id; } ;
struct i2c_adapter {int dummy; } ;
struct ivtv {int v4l2_dev; int pvr150_workaround; TYPE_1__* card_i2c; struct i2c_adapter i2c_adap; } ;
struct cx25840_platform_data {int pvr150_workaround; } ;
struct TYPE_2__ {int * tv; int * demod; int * radio; } ;


 unsigned int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 char** VAR_6 ;
 int FUNC_2 (struct ivtv*,int,char const*,int ) ;
 struct v4l2_subdev* FUNC_3 (int *,struct i2c_adapter*,char const*,int ,int *) ;
 struct v4l2_subdev* FUNC_4 (int *,struct i2c_adapter*,char const*,int ,struct cx25840_platform_data*,int ,int *) ;

int FUNC_5(struct ivtv *VAR_7, unsigned VAR_8)
{
 struct v4l2_subdev *VAR_9;
 struct i2c_adapter *VAR_10 = &VAR_7->i2c_adap;
 const char *VAR_11 = VAR_6[VAR_8];
 u32 VAR_12 = 1 << VAR_8;

 if (VAR_8 >= FUNC_0(VAR_5))
  return -1;
 if (VAR_12 == VAR_2) {

  VAR_9 = FUNC_3(&VAR_7->v4l2_dev, VAR_10, VAR_11, 0,
    VAR_7->card_i2c->radio);
  if (VAR_9)
   VAR_9->grp_id = 1 << VAR_8;
  VAR_9 = FUNC_3(&VAR_7->v4l2_dev, VAR_10, VAR_11, 0,
    VAR_7->card_i2c->demod);
  if (VAR_9)
   VAR_9->grp_id = 1 << VAR_8;
  VAR_9 = FUNC_3(&VAR_7->v4l2_dev, VAR_10, VAR_11, 0,
    VAR_7->card_i2c->tv);
  if (VAR_9)
   VAR_9->grp_id = 1 << VAR_8;
  return VAR_9 ? 0 : -1;
 }

 if (VAR_12 & VAR_1)
  return FUNC_2(VAR_7, VAR_12, VAR_11, VAR_5[VAR_8]);


 if (!VAR_5[VAR_8])
  return -1;


 if (VAR_12 == VAR_3 || VAR_12 == VAR_4) {
  VAR_9 = FUNC_3(&VAR_7->v4l2_dev,
    VAR_10, VAR_11, 0, FUNC_1(VAR_5[VAR_8]));
 } else if (VAR_12 == VAR_0) {
  struct cx25840_platform_data VAR_13;

  VAR_13.pvr150_workaround = VAR_7->pvr150_workaround;
  VAR_9 = FUNC_4(&VAR_7->v4l2_dev,
    VAR_10, VAR_11, 0, &VAR_13, VAR_5[VAR_8], ((void*)0));
 } else {
  VAR_9 = FUNC_3(&VAR_7->v4l2_dev,
    VAR_10, VAR_11, VAR_5[VAR_8], ((void*)0));
 }
 if (VAR_9)
  VAR_9->grp_id = 1 << VAR_8;
 return VAR_9 ? 0 : -1;
}
