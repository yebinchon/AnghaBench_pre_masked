
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct aper_size_info_lvl2 {int size; int size_value; } ;
struct TYPE_6__ {int aperture_size_idx; void* current_size; void* previous_size; TYPE_1__* driver; int dev; } ;
struct TYPE_5__ {int gart_addr_ofs; } ;
struct TYPE_4__ {int num_aperture_sizes; int aperture_sizes; } ;


 struct aper_size_info_lvl2* FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 struct aper_size_info_lvl2 *VAR_6;

 VAR_6 = FUNC_0(VAR_1->driver->aperture_sizes);
 FUNC_1(VAR_1->dev,VAR_2.gart_addr_ofs,&VAR_4);
 FUNC_2(VAR_1->dev,VAR_2.gart_addr_ofs,
     VAR_0);
 FUNC_1(VAR_1->dev,VAR_2.gart_addr_ofs,&VAR_5);
 FUNC_2(VAR_1->dev,VAR_2.gart_addr_ofs,VAR_4);
 VAR_5 &= VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_1->driver->num_aperture_sizes; VAR_3++) {
  if (VAR_5 == VAR_6[VAR_3].size_value) {
   VAR_1->previous_size =
       VAR_1->current_size = (void *) (VAR_6 + VAR_3);

   VAR_1->aperture_size_idx = VAR_3;
   return VAR_6[VAR_3].size;
  }
 }

 return 0;
}
