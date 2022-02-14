
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * type; int devt; int release; int class; int parent; } ;
struct drm_minor {scalar_t__ type; TYPE_2__ kdev; int index; int device; TYPE_1__* dev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(struct drm_minor *VAR_5)
{
 int VAR_6;
 char *VAR_7;

 VAR_5->kdev.parent = VAR_5->dev->dev;

 VAR_5->kdev.class = VAR_2;
 VAR_5->kdev.release = VAR_4;
 VAR_5->kdev.devt = VAR_5->device;
 VAR_5->kdev.type = &VAR_3;
 if (VAR_5->type == VAR_0)
  VAR_7 = "controlD%d";
        else if (VAR_5->type == VAR_1)
                VAR_7 = "renderD%d";
        else
                VAR_7 = "card%d";

 FUNC_1(&VAR_5->kdev, VAR_7, VAR_5->index);

 VAR_6 = FUNC_2(&VAR_5->kdev);
 if (VAR_6) {
  FUNC_0("device add failed: %d\n", VAR_6);
  goto err_out;
 }

 return 0;

err_out:
 return VAR_6;
}
