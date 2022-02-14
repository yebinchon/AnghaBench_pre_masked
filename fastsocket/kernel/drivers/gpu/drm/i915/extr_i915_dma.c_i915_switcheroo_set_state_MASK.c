
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct drm_device {void* switch_power_state; int pdev; } ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ pm_message_t ;
typedef enum vga_switcheroo_state { ____Placeholder_vga_switcheroo_state } vga_switcheroo_state ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*,TYPE_1__) ;
 struct drm_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_6, enum vga_switcheroo_state VAR_7)
{
 struct drm_device *VAR_8 = FUNC_2(VAR_6);
 pm_message_t VAR_9 = { .event = VAR_4 };
 if (VAR_7 == VAR_5) {
  FUNC_5("switched on\n");
  VAR_8->switch_power_state = VAR_0;

  FUNC_3(VAR_8->pdev, VAR_3);
  FUNC_0(VAR_8);
  VAR_8->switch_power_state = VAR_2;
 } else {
  FUNC_4("switched off\n");
  VAR_8->switch_power_state = VAR_0;
  FUNC_1(VAR_8, VAR_9);
  VAR_8->switch_power_state = VAR_1;
 }
}
