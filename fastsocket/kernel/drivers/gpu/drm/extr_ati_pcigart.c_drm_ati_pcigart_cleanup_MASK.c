
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_sg_mem {int pages; int * busaddr; } ;
struct drm_device {int pdev; struct drm_sg_mem* sg; } ;
struct drm_ati_pcigart_info {int table_size; scalar_t__ gart_table_location; scalar_t__ table_handle; scalar_t__ bus_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_device*,struct drm_ati_pcigart_info*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

int FUNC_3(struct drm_device *VAR_3, struct drm_ati_pcigart_info *VAR_4)
{
 struct drm_sg_mem *VAR_5 = VAR_3->sg;
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8;


 if (!VAR_5) {
  FUNC_0("no scatter/gather memory!\n");
  return 0;
 }

 if (VAR_4->bus_addr) {

  VAR_8 = (VAR_4->table_size / sizeof(u32));
  VAR_6 = (VAR_5->pages <= VAR_8)
    ? VAR_5->pages : VAR_8;

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   if (!VAR_5->busaddr[VAR_7])
    break;
   FUNC_2(VAR_3->pdev, VAR_5->busaddr[VAR_7],
      VAR_1, VAR_2);
  }

  if (VAR_4->gart_table_location == VAR_0)
   VAR_4->bus_addr = 0;
 }

 if (VAR_4->gart_table_location == VAR_0 &&
     VAR_4->table_handle) {
  FUNC_1(VAR_3, VAR_4);
 }

 return 1;
}
