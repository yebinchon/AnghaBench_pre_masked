
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct drm_ati_pcigart_info {int * table_handle; int table_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct drm_device*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_2,
           struct drm_ati_pcigart_info *VAR_3)
{
 VAR_3->table_handle = FUNC_0(VAR_2, VAR_3->table_size,
      VAR_1);
 if (VAR_3->table_handle == ((void*)0))
  return -VAR_0;

 return 0;
}
