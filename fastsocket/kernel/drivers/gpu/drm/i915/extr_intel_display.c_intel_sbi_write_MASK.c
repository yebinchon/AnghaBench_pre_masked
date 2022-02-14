
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct drm_i915_private {int dpio_lock; } ;
typedef enum intel_sbi_destination { ____Placeholder_intel_sbi_destination } intel_sbi_destination ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,int) ;

__attribute__((used)) static void
FUNC_6(struct drm_i915_private *VAR_10, u16 VAR_11, u32 VAR_12,
  enum intel_sbi_destination VAR_13)
{
 u32 VAR_14;

 FUNC_3(!FUNC_4(&VAR_10->dpio_lock));

 if (FUNC_5((FUNC_1(VAR_6) & VAR_1) == 0,
    100)) {
  FUNC_0("timeout waiting for SBI to become ready\n");
  return;
 }

 FUNC_2(VAR_0, (VAR_11 << 16));
 FUNC_2(VAR_7, VAR_12);

 if (VAR_13 == VAR_8)
  VAR_14 = VAR_2 | VAR_4;
 else
  VAR_14 = VAR_3 | VAR_5;
 FUNC_2(VAR_6, VAR_1 | VAR_14);

 if (FUNC_5((FUNC_1(VAR_6) & (VAR_1 | VAR_9)) == 0,
    100)) {
  FUNC_0("timeout waiting for SBI to complete write transaction\n");
  return;
 }
}
