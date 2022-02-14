
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct intel_dp {int * train_set; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct TYPE_3__ {TYPE_2__ base; } ;
struct intel_digital_port {TYPE_1__ base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 struct intel_digital_port* FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct intel_dp*) ;

__attribute__((used)) static void
FUNC_11(struct intel_dp *VAR_5, uint32_t *VAR_6)
{
 struct intel_digital_port *VAR_7 = FUNC_5(VAR_5);
 struct drm_device *VAR_8 = VAR_7->base.base.dev;
 uint32_t VAR_9, VAR_10;
 uint8_t VAR_11 = VAR_5->train_set[0];

 if (FUNC_3(VAR_8)) {
  VAR_9 = FUNC_9(VAR_11);
  VAR_10 = VAR_0;
 } else if (FUNC_2(VAR_8) && FUNC_10(VAR_5) && !FUNC_4(VAR_8)) {
  VAR_9 = FUNC_8(VAR_11);
  VAR_10 = VAR_3;
 } else if (FUNC_1(VAR_8) && FUNC_10(VAR_5)) {
  VAR_9 = FUNC_7(VAR_11);
  VAR_10 = VAR_4;
 } else {
  VAR_9 = FUNC_6(VAR_11);
  VAR_10 = VAR_2 | VAR_1;
 }

 FUNC_0("Using signal levels %08x\n", VAR_9);

 *VAR_6 = (*VAR_6 & ~VAR_10) | VAR_9;
}
