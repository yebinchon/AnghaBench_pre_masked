
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct drm_property {int flags; int num_values; char* name; struct drm_property* values; int head; int enum_blob_list; int base; } ;
struct TYPE_2__ {int property_list; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_device*,int *,int ) ;
 int FUNC_2 (struct drm_property*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,char const*,int) ;

struct drm_property *FUNC_6(struct drm_device *VAR_3, int VAR_4,
      const char *VAR_5, int VAR_6)
{
 struct drm_property *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(struct drm_property), VAR_2);
 if (!VAR_7)
  return ((void*)0);

 if (VAR_6) {
  VAR_7->values = FUNC_3(sizeof(uint64_t)*VAR_6, VAR_2);
  if (!VAR_7->values)
   goto fail;
 }

 VAR_8 = FUNC_1(VAR_3, &VAR_7->base, VAR_0);
 if (VAR_8)
  goto fail;

 VAR_7->flags = VAR_4;
 VAR_7->num_values = VAR_6;
 FUNC_0(&VAR_7->enum_blob_list);

 if (VAR_5) {
  FUNC_5(VAR_7->name, VAR_5, VAR_1);
  VAR_7->name[VAR_1-1] = '\0';
 }

 FUNC_4(&VAR_7->head, &VAR_3->mode_config.property_list);
 return VAR_7;
fail:
 FUNC_2(VAR_7->values);
 FUNC_2(VAR_7);
 return ((void*)0);
}
