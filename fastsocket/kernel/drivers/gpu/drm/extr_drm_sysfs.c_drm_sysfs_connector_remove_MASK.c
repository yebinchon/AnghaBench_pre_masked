
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parent; int kobj; } ;
struct drm_connector {TYPE_1__ kdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct drm_connector*) ;
 int VAR_1 ;
 int FUNC_5 (int *,int *) ;

void FUNC_6(struct drm_connector *VAR_2)
{
 int VAR_3;

 if (!VAR_2->kdev.parent)
  return;
 FUNC_1("removing \"%s\" from sysfs\n",
    FUNC_4(VAR_2));

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  FUNC_2(&VAR_2->kdev, &VAR_0[VAR_3]);
 FUNC_5(&VAR_2->kdev.kobj, &VAR_1);
 FUNC_3(&VAR_2->kdev);
 VAR_2->kdev.parent = ((void*)0);
}
