
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drm_sg_mem {int pages; int * busaddr; } ;
struct drm_device {int pdev; struct drm_sg_mem* sg; } ;
struct drm_ati_pcigart_info {int table_size; scalar_t__ gart_table_location; scalar_t__ bus_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(struct drm_device *VAR_3, struct drm_ati_pcigart_info *VAR_4)
{
 struct drm_sg_mem *VAR_5 = VAR_3->sg;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 if (!VAR_5)
  return;

 if (VAR_4->bus_addr) {
  VAR_6 = (VAR_4->table_size / sizeof(u64));
  VAR_7 = (VAR_5->pages <= VAR_6)
    ? VAR_5->pages : VAR_6;

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   if (!VAR_5->busaddr[VAR_8])
    break;
   FUNC_0(VAR_3->pdev, VAR_5->busaddr[VAR_8],
           VAR_1, VAR_2);
  }
  if (VAR_4->gart_table_location == VAR_0)
   VAR_4->bus_addr = 0;
 }
}
