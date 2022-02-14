
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int release; int devt; int * parent; int * class; } ;
struct TYPE_9__ {struct mousedev* private; struct input_handler* handler; int name; int dev; } ;
struct mousedev {int minor; int exist; TYPE_1__ dev; TYPE_2__ handle; int wait; int mutex; int client_lock; int mixdev_node; int client_list; } ;
struct input_handler {int dummy; } ;
struct input_dev {int dev; } ;


 int VAR_0 ;
 struct mousedev* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 struct mousedev* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (struct mousedev*) ;
 int VAR_6 ;
 int FUNC_14 (struct mousedev*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static struct mousedev *FUNC_18(struct input_dev *VAR_7,
     struct input_handler *VAR_8,
     int VAR_9)
{
 struct mousedev *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_11(sizeof(struct mousedev), VAR_1);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto err_out;
 }

 FUNC_1(&VAR_10->client_list);
 FUNC_1(&VAR_10->mixdev_node);
 FUNC_17(&VAR_10->client_lock);
 FUNC_15(&VAR_10->mutex);
 FUNC_12(&VAR_10->mutex,
        VAR_9 == VAR_4 ? VAR_4 : 0);
 FUNC_7(&VAR_10->wait);

 if (VAR_9 == VAR_4)
  FUNC_4(&VAR_10->dev, "mice");
 else
  FUNC_4(&VAR_10->dev, "mouse%d", VAR_9);

 VAR_10->minor = VAR_9;
 VAR_10->exist = 1;
 VAR_10->handle.dev = FUNC_8(VAR_7);
 VAR_10->handle.name = FUNC_3(&VAR_10->dev);
 VAR_10->handle.handler = VAR_8;
 VAR_10->handle.private = VAR_10;

 VAR_10->dev.class = &VAR_5;
 if (VAR_7)
  VAR_10->dev.parent = &VAR_7->dev;
 VAR_10->dev.devt = FUNC_2(VAR_2, VAR_3 + VAR_9);
 VAR_10->dev.release = VAR_6;
 FUNC_6(&VAR_10->dev);

 if (VAR_9 != VAR_4) {
  VAR_11 = FUNC_9(&VAR_10->handle);
  if (VAR_11)
   goto err_free_mousedev;
 }

 VAR_11 = FUNC_14(VAR_10);
 if (VAR_11)
  goto err_unregister_handle;

 VAR_11 = FUNC_5(&VAR_10->dev);
 if (VAR_11)
  goto err_cleanup_mousedev;

 return VAR_10;

 err_cleanup_mousedev:
 FUNC_13(VAR_10);
 err_unregister_handle:
 if (VAR_9 != VAR_4)
  FUNC_10(&VAR_10->handle);
 err_free_mousedev:
 FUNC_16(&VAR_10->dev);
 err_out:
 return FUNC_0(VAR_11);
}
