
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct saa5246a_device {int* is_searching; int * vdev; int * pgbuf; int lock; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct saa5246a_device*) ;
 struct saa5246a_device* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,char,int) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,char*,int,int ) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *,struct saa5246a_device*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 int VAR_10;
 int VAR_11;
 struct saa5246a_device *VAR_12;
 struct v4l2_subdev *VAR_13;

 FUNC_6(VAR_8, "chip found @ 0x%x (%s)\n",
   VAR_8->addr << 1, VAR_8->adapter->name);
 FUNC_6(VAR_8, "VideoText version %d.%d\n",
   VAR_2, VAR_3);
 VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_1);
 if (VAR_12 == ((void*)0))
  return -VAR_0;
 VAR_13 = &VAR_12->sd;
 FUNC_5(VAR_13, VAR_8, &VAR_6);
 FUNC_4(&VAR_12->lock);


 VAR_12->vdev = FUNC_7();
 if (VAR_12->vdev == ((void*)0)) {
  FUNC_0(VAR_12);
  return -VAR_0;
 }
 FUNC_2(VAR_12->vdev, &VAR_7, sizeof(*VAR_12->vdev));

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  FUNC_3(VAR_12->pgbuf[VAR_10], ' ', sizeof(VAR_12->pgbuf[0]));
  VAR_12->is_searching[VAR_10] = 0;
 }
 FUNC_10(VAR_12->vdev, VAR_12);


 VAR_11 = FUNC_9(VAR_12->vdev, VAR_5, -1);
 if (VAR_11 < 0) {
  FUNC_8(VAR_12->vdev);
  FUNC_0(VAR_12);
  return VAR_11;
 }
 return 0;
}
