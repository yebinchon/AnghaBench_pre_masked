
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_15__ {int release; struct device* parent; int * bus; } ;
struct ccwgroup_device {unsigned int creator_id; int count; TYPE_2__ dev; int reg_mutex; TYPE_4__** cdev; int onoff; } ;
struct ccw_driver {int dummy; } ;
struct TYPE_14__ {scalar_t__ driver_info; } ;
struct TYPE_16__ {TYPE_2__ dev; int ccwlock; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ccwgroup_device*) ;
 int FUNC_1 (char const**,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ccwgroup_device* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,struct ccwgroup_device*) ;
 int FUNC_7 (TYPE_2__*,char*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_4__* FUNC_13 (struct ccw_driver*,char*) ;
 int FUNC_14 (TYPE_2__*) ;
 struct ccwgroup_device* FUNC_15 (int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (char const*) ;

int FUNC_23(struct device *VAR_7, unsigned int VAR_8,
    struct ccw_driver *VAR_9, int VAR_10,
    const char *VAR_11)
{
 struct ccwgroup_device *VAR_12;
 int VAR_13, VAR_14;
 char VAR_15[VAR_0];
 const char *VAR_16;

 VAR_12 = FUNC_15(sizeof(*VAR_12) + VAR_10 * sizeof(VAR_12->cdev[0]),
         VAR_3);
 if (!VAR_12)
  return -VAR_2;

 FUNC_3(&VAR_12->onoff, 0);
 FUNC_16(&VAR_12->reg_mutex);
 FUNC_17(&VAR_12->reg_mutex);
 VAR_12->creator_id = VAR_8;
 VAR_12->count = VAR_10;
 VAR_12->dev.bus = &VAR_4;
 VAR_12->dev.parent = VAR_7;
 VAR_12->dev.release = VAR_5;
 FUNC_10(&VAR_12->dev);

 VAR_16 = VAR_11;
 for (VAR_14 = 0; VAR_14 < VAR_10 && VAR_16; VAR_14++) {
  VAR_13 = FUNC_1(&VAR_16, VAR_15);
  if (VAR_13 != 0)
   goto error;
  if (!FUNC_2(VAR_15)) {
   VAR_13 = -VAR_1;
   goto error;
  }
  VAR_12->cdev[VAR_14] = FUNC_13(VAR_9, VAR_15);




  if (!VAR_12->cdev[VAR_14]
      || VAR_12->cdev[VAR_14]->id.driver_info !=
      VAR_12->cdev[0]->id.driver_info) {
   VAR_13 = -VAR_1;
   goto error;
  }

  FUNC_20(VAR_12->cdev[VAR_14]->ccwlock);
  if (FUNC_4(&VAR_12->cdev[VAR_14]->dev)) {
   FUNC_21(VAR_12->cdev[VAR_14]->ccwlock);
   VAR_13 = -VAR_1;
   goto error;
  }
  FUNC_6(&VAR_12->cdev[VAR_14]->dev, VAR_12);
  FUNC_21(VAR_12->cdev[VAR_14]->ccwlock);
 }

 if (VAR_14 < VAR_10 && !VAR_16) {
  VAR_13 = -VAR_1;
  goto error;
 }

 if (VAR_14 == VAR_10 && FUNC_22(VAR_16) > 0) {
  VAR_13 = -VAR_1;
  goto error;
 }

 FUNC_7(&VAR_12->dev, "%s", FUNC_5(&VAR_12->cdev[0]->dev));

 VAR_13 = FUNC_8(&VAR_12->dev);
 if (VAR_13)
  goto error;
 FUNC_14(&VAR_12->dev);
 VAR_13 = FUNC_9(&VAR_12->dev, &VAR_6);

 if (VAR_13) {
  FUNC_12(&VAR_12->dev);
  goto error;
 }

 VAR_13 = FUNC_0(VAR_12);
 if (!VAR_13) {
  FUNC_18(&VAR_12->reg_mutex);
  FUNC_19(&VAR_12->dev);
  return 0;
 }
 FUNC_11(&VAR_12->dev, &VAR_6);
 FUNC_12(&VAR_12->dev);
error:
 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
  if (VAR_12->cdev[VAR_14]) {
   FUNC_20(VAR_12->cdev[VAR_14]->ccwlock);
   if (FUNC_4(&VAR_12->cdev[VAR_14]->dev) == VAR_12)
    FUNC_6(&VAR_12->cdev[VAR_14]->dev, ((void*)0));
   FUNC_21(VAR_12->cdev[VAR_14]->ccwlock);
   FUNC_19(&VAR_12->cdev[VAR_14]->dev);
   VAR_12->cdev[VAR_14] = ((void*)0);
  }
 FUNC_18(&VAR_12->reg_mutex);
 FUNC_19(&VAR_12->dev);
 return VAR_13;
}
