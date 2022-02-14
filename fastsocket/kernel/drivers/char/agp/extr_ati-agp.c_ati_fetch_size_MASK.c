
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct aper_size_info_lvl2 {int size_value; int size; } ;
struct TYPE_4__ {int aperture_size_idx; void* current_size; void* previous_size; TYPE_1__* driver; int dev; } ;
struct TYPE_3__ {int num_aperture_sizes; int aperture_sizes; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct aper_size_info_lvl2* FUNC_0 (int ) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_3;
 u32 VAR_4;
 struct aper_size_info_lvl2 *VAR_5;

 if (FUNC_1())
  FUNC_2(VAR_2->dev, VAR_0, &VAR_4);
 else
  FUNC_2(VAR_2->dev, VAR_1, &VAR_4);

 VAR_4 = (VAR_4 & 0x0000000e);
 VAR_5 = FUNC_0(VAR_2->driver->aperture_sizes);
 for (VAR_3 = 0; VAR_3 < VAR_2->driver->num_aperture_sizes; VAR_3++) {
  if (VAR_4 == VAR_5[VAR_3].size_value) {
   VAR_2->previous_size =
       VAR_2->current_size = (void *) (VAR_5 + VAR_3);

   VAR_2->aperture_size_idx = VAR_3;
   return VAR_5[VAR_3].size;
  }
 }

 return 0;
}
