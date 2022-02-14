
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct aper_size_info_lvl2 {scalar_t__ size_value; int size; } ;
struct TYPE_4__ {int aperture_size_idx; void* current_size; void* previous_size; TYPE_1__* driver; int dev; } ;
struct TYPE_3__ {int num_aperture_sizes; int aperture_sizes; } ;


 struct aper_size_info_lvl2* FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_2;
 u16 VAR_3;
 struct aper_size_info_lvl2 *VAR_4;

 FUNC_1(VAR_1->dev, VAR_0, &VAR_3);
 VAR_4 = FUNC_0(VAR_1->driver->aperture_sizes);

 for (VAR_2 = 0; VAR_2 < VAR_1->driver->num_aperture_sizes; VAR_2++) {
  if (VAR_3 == VAR_4[VAR_2].size_value) {
   VAR_1->previous_size =
       VAR_1->current_size = (void *) (VAR_4 + VAR_2);
   VAR_1->aperture_size_idx = VAR_2;
   return VAR_4[VAR_2].size;
  }
 }

 return 0;
}
