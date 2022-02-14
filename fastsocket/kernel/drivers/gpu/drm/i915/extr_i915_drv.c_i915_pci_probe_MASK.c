
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int devfn; } ;
struct intel_device_info {int gen; scalar_t__ is_valleyview; } ;
struct TYPE_3__ {int driver_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (struct pci_dev*,struct pci_device_id const*,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 struct intel_device_info *VAR_8 =
  (struct intel_device_info *) VAR_7->driver_data;

 if (VAR_8->is_valleyview)
  if(!VAR_4) {
   FUNC_0("Preliminary hardware support disabled\n");
   return -VAR_2;
  }






 if (FUNC_1(VAR_6->devfn))
  return -VAR_2;





 if (VAR_8->gen != 3) {
  VAR_3.driver_features &=
   ~(VAR_1 | VAR_0);
 } else if (!VAR_5) {
  FUNC_0("drm/i915 can't work without intel_agp module!\n");
  return -VAR_2;
 }

 return FUNC_2(VAR_6, VAR_7, &VAR_3);
}
