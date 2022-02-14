
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct edid {int extensions; } ;
struct TYPE_5__ {int edid_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_connector {TYPE_3__* edid_blob_ptr; int base; struct drm_device* dev; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_7__ {TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 TYPE_3__* FUNC_1 (struct drm_device*,int,struct edid*) ;
 int FUNC_2 (struct drm_device*,TYPE_3__*) ;

int FUNC_3(struct drm_connector *VAR_2,
         struct edid *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 int VAR_5, VAR_6;

 if (VAR_2->edid_blob_ptr)
  FUNC_2(VAR_4, VAR_2->edid_blob_ptr);


 if (!VAR_3) {
  VAR_2->edid_blob_ptr = ((void*)0);
  VAR_5 = FUNC_0(&VAR_2->base, VAR_4->mode_config.edid_property, 0);
  return VAR_5;
 }

 VAR_6 = VAR_0 * (1 + VAR_3->extensions);
 VAR_2->edid_blob_ptr = FUNC_1(VAR_2->dev,
           VAR_6, VAR_3);
 if (!VAR_2->edid_blob_ptr)
  return -VAR_1;

 VAR_5 = FUNC_0(&VAR_2->base,
            VAR_4->mode_config.edid_property,
            VAR_2->edid_blob_ptr->base.id);

 return VAR_5;
}
