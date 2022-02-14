
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property_blob {int length; int head; int data; int base; } ;
struct TYPE_2__ {int property_blob_list; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,int *,int ) ;
 int FUNC_1 (struct drm_property_blob*) ;
 struct drm_property_blob* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,void*,int) ;

__attribute__((used)) static struct drm_property_blob *FUNC_5(struct drm_device *VAR_2, int VAR_3,
         void *VAR_4)
{
 struct drm_property_blob *VAR_5;
 int VAR_6;

 if (!VAR_3 || !VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_2(sizeof(struct drm_property_blob)+VAR_3, VAR_1);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_2, &VAR_5->base, VAR_0);
 if (VAR_6) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }

 VAR_5->length = VAR_3;

 FUNC_4(VAR_5->data, VAR_4, VAR_3);

 FUNC_3(&VAR_5->head, &VAR_2->mode_config.property_blob_list);
 return VAR_5;
}
