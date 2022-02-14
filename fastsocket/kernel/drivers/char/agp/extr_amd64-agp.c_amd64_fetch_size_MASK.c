
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct aper_size_info_32 {int size_value; int size; } ;
struct TYPE_6__ {int aperture_size_idx; void* current_size; void* previous_size; TYPE_1__* driver; } ;
struct TYPE_5__ {struct pci_dev* misc; } ;
struct TYPE_4__ {int num_aperture_sizes; } ;


 int VAR_0 ;
 struct aper_size_info_32* FUNC_0 (int ) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_3(void)
{
 struct pci_dev *VAR_3;
 int VAR_4;
 u32 VAR_5;
 struct aper_size_info_32 *VAR_6;

 VAR_3 = FUNC_1(0)->misc;
 if (VAR_3==((void*)0))
  return 0;

 FUNC_2(VAR_3, VAR_0, &VAR_5);
 VAR_5 = (VAR_5 & 0xe);
 VAR_6 = FUNC_0(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_1->driver->num_aperture_sizes; VAR_4++) {
  if (VAR_5 == VAR_6[VAR_4].size_value) {
   VAR_1->previous_size =
       VAR_1->current_size = (void *) (VAR_6 + VAR_4);

   VAR_1->aperture_size_idx = VAR_4;
   return VAR_6[VAR_4].size;
  }
 }
 return 0;
}
