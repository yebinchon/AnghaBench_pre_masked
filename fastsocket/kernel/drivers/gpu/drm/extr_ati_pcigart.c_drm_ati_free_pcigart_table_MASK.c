
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct drm_ati_pcigart_info {int * table_handle; } ;


 int FUNC_0 (struct drm_device*,int *) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_0,
           struct drm_ati_pcigart_info *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->table_handle);
 VAR_1->table_handle = ((void*)0);
}
