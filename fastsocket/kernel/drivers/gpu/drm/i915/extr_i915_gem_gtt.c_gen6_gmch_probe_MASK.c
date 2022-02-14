
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int gtt_insert_entries; int gtt_clear_range; int gsm; int mappable_end; } ;
struct drm_i915_private {TYPE_1__ gtt; } ;
struct drm_device {int pdev; struct drm_i915_private* dev_private; } ;
typedef scalar_t__ phys_addr_t ;
typedef int gtt_pte_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,unsigned int) ;
 int FUNC_7 (int ,int ,int *) ;
 unsigned long FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct drm_device*) ;

__attribute__((used)) static int FUNC_13(struct drm_device *VAR_6,
      size_t *VAR_7,
      size_t *VAR_8,
      phys_addr_t *VAR_9,
      unsigned long *VAR_10)
{
 struct drm_i915_private *VAR_11 = VAR_6->dev_private;
 phys_addr_t VAR_12;
 unsigned int VAR_13;
 u16 VAR_14;
 int VAR_15;

 *VAR_9 = FUNC_9(VAR_6->pdev, 2);
 *VAR_10 = FUNC_8(VAR_6->pdev, 2);




 if ((*VAR_10 < (64<<20) || (*VAR_10 > (512<<20)))) {
  FUNC_1("Unknown GMADR size (%lx)\n",
     VAR_11->gtt.mappable_end);
  return -VAR_1;
 }

 if (!FUNC_11(VAR_6->pdev, FUNC_0(40)))
  FUNC_10(VAR_6->pdev, FUNC_0(40));
 FUNC_7(VAR_6->pdev, VAR_3, &VAR_14);
 VAR_13 = FUNC_4(VAR_14);

 if (FUNC_2(VAR_6))
  *VAR_8 = FUNC_5(VAR_14);
 else
  *VAR_8 = FUNC_3(VAR_14);

 *VAR_7 = (VAR_13 / sizeof(gtt_pte_t)) << VAR_2;


 VAR_12 = FUNC_9(VAR_6->pdev, 0) + (2<<20);
 VAR_11->gtt.gsm = FUNC_6(VAR_12, VAR_13);
 if (!VAR_11->gtt.gsm) {
  FUNC_1("Failed to map the gtt page table\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_12(VAR_6);
 if (VAR_15)
  FUNC_1("Scratch setup failed\n");

 VAR_11->gtt.gtt_clear_range = VAR_4;
 VAR_11->gtt.gtt_insert_entries = VAR_5;

 return VAR_15;
}
