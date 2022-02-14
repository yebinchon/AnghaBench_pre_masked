
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct drm_device {TYPE_1__* primary; } ;
struct TYPE_9__ {int kobj; int release; int class; int * parent; } ;
struct drm_connector {int connector_type; TYPE_2__ kdev; struct drm_device* dev; } ;
struct TYPE_8__ {int index; int kdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int) ;





 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_4 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_10 (struct drm_connector*) ;
 int VAR_3 ;
 int FUNC_11 (struct drm_device*) ;
 int VAR_4 ;
 int FUNC_12 (int *,int *) ;

int FUNC_13(struct drm_connector *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->dev;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10;


 FUNC_1(FUNC_6(&VAR_5->kdev));

 VAR_5->kdev.parent = &VAR_6->primary->kdev;
 VAR_5->kdev.class = VAR_2;
 VAR_5->kdev.release = VAR_3;

 FUNC_2("adding \"%s\" to sysfs\n",
    FUNC_10(VAR_5));

 FUNC_4(&VAR_5->kdev, "card%d-%s",
       VAR_6->primary->index, FUNC_10(VAR_5));
 VAR_10 = FUNC_7(&VAR_5->kdev);

 if (VAR_10) {
  FUNC_3("failed to register connector device: %d\n", VAR_10);
  goto out;
 }



 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++) {
  VAR_10 = FUNC_5(&VAR_5->kdev, &VAR_0[VAR_7]);
  if (VAR_10)
   goto err_out_files;
 }






 switch (VAR_5->connector_type) {
  case 130:
  case 131:
  case 129:
  case 132:
  case 128:
   for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
    VAR_10 = FUNC_5(&VAR_5->kdev, &VAR_1[VAR_8]);
    if (VAR_10)
     goto err_out_files;
   }
   break;
  default:
   break;
 }

 VAR_10 = FUNC_12(&VAR_5->kdev.kobj, &VAR_4);
 if (VAR_10)
  goto err_out_files;


 FUNC_11(VAR_6);

 return 0;

err_out_files:
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  FUNC_8(&VAR_5->kdev, &VAR_1[VAR_9]);
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  FUNC_8(&VAR_5->kdev, &VAR_0[VAR_9]);
 FUNC_9(&VAR_5->kdev);

out:
 return VAR_10;
}
