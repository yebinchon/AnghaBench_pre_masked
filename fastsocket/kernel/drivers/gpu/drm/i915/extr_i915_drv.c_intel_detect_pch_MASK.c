
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ vendor; unsigned short device; } ;
struct drm_i915_private {unsigned short pch_id; int num_pch_pll; void* pch_type; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct pci_dev*) ;
 struct pci_dev* FUNC_8 (int,int *) ;

void FUNC_9(struct drm_device *VAR_12)
{
 struct drm_i915_private *VAR_13 = VAR_12->dev_private;
 struct pci_dev *VAR_14;







 VAR_14 = FUNC_8(VAR_10 << 8, ((void*)0));
 if (VAR_14) {
  if (VAR_14->vendor == VAR_11) {
   unsigned short VAR_15;
   VAR_15 = VAR_14->device & VAR_2;
   VAR_13->pch_id = VAR_15;

   if (VAR_15 == VAR_3) {
    VAR_13->pch_type = VAR_8;
    VAR_13->num_pch_pll = 2;
    FUNC_1("Found Ibex Peak PCH\n");
    FUNC_6(!FUNC_2(VAR_12));
   } else if (VAR_15 == VAR_1) {
    VAR_13->pch_type = VAR_7;
    VAR_13->num_pch_pll = 2;
    FUNC_1("Found CougarPoint PCH\n");
    FUNC_6(!(FUNC_3(VAR_12) || FUNC_5(VAR_12)));
   } else if (VAR_15 == VAR_6) {

    VAR_13->pch_type = VAR_7;
    VAR_13->num_pch_pll = 2;
    FUNC_1("Found PatherPoint PCH\n");
    FUNC_6(!(FUNC_3(VAR_12) || FUNC_5(VAR_12)));
   } else if (VAR_15 == VAR_4) {
    VAR_13->pch_type = VAR_9;
    VAR_13->num_pch_pll = 0;
    FUNC_1("Found LynxPoint PCH\n");
    FUNC_6(!FUNC_4(VAR_12));
   } else if (VAR_15 == VAR_5) {
    VAR_13->pch_type = VAR_9;
    VAR_13->num_pch_pll = 0;
    FUNC_1("Found LynxPoint LP PCH\n");
    FUNC_6(!FUNC_4(VAR_12));
   }
   FUNC_0(VAR_13->num_pch_pll > VAR_0);
  }
  FUNC_7(VAR_14);
 }
}
