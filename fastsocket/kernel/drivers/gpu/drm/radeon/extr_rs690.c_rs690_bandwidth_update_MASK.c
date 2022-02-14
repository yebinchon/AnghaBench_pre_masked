
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_14__ {scalar_t__ full; } ;
struct TYPE_13__ {scalar_t__ full; } ;
struct TYPE_18__ {scalar_t__ full; } ;
struct TYPE_16__ {scalar_t__ full; } ;
struct rs690_watermark {int lb_request_fifo_depth; TYPE_3__ priority_mark_max; TYPE_2__ priority_mark; TYPE_9__ consumption_rate; TYPE_5__ worst_case_latency; TYPE_9__ active_time; TYPE_5__ sclk; TYPE_9__ num_line_pair; TYPE_5__ dbpp; } ;
struct TYPE_12__ {TYPE_6__** crtcs; } ;
struct radeon_device {int disp_priority; scalar_t__ family; TYPE_1__ mode_info; } ;
struct drm_display_mode {int dummy; } ;
typedef TYPE_5__ fixed20_12 ;
struct TYPE_15__ {struct drm_display_mode mode; scalar_t__ enabled; } ;
struct TYPE_17__ {TYPE_4__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 void* FUNC_8 (int) ;
 void* FUNC_9 (TYPE_5__,TYPE_5__) ;
 void* FUNC_10 (TYPE_5__,TYPE_9__) ;
 int FUNC_11 (TYPE_5__) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*,TYPE_6__*,struct rs690_watermark*) ;
 int FUNC_14 (struct radeon_device*,struct drm_display_mode*,struct drm_display_mode*) ;

void FUNC_15(struct radeon_device *VAR_13)
{
 struct drm_display_mode *VAR_14 = ((void*)0);
 struct drm_display_mode *VAR_15 = ((void*)0);
 struct rs690_watermark VAR_16;
 struct rs690_watermark VAR_17;
 u32 VAR_18;
 u32 VAR_19 = FUNC_4(1);
 u32 VAR_20 = FUNC_4(1);
 fixed20_12 VAR_21, VAR_22, VAR_23;
 fixed20_12 VAR_24, VAR_25;

 FUNC_12(VAR_13);

 if (VAR_13->mode_info.crtcs[0]->base.enabled)
  VAR_14 = &VAR_13->mode_info.crtcs[0]->base.mode;
 if (VAR_13->mode_info.crtcs[1]->base.enabled)
  VAR_15 = &VAR_13->mode_info.crtcs[1]->base.mode;





 if ((VAR_13->disp_priority == 2) &&
     ((VAR_13->family == VAR_0) || (VAR_13->family == VAR_1))) {
  VAR_18 = FUNC_0(VAR_6);
  VAR_18 &= VAR_4;
  VAR_18 &= VAR_5;
  if (VAR_14)
   VAR_18 |= FUNC_1(1);
  if (VAR_15)
   VAR_18 |= FUNC_2(1);
  FUNC_7(VAR_6, VAR_18);
 }
 FUNC_14(VAR_13, VAR_14, VAR_15);

 if ((VAR_13->family == VAR_0) || (VAR_13->family == VAR_1))
  FUNC_6(VAR_9, 0);
 if ((VAR_13->family == VAR_2) || (VAR_13->family == VAR_3))
  FUNC_6(VAR_9, 2);

 FUNC_13(VAR_13, VAR_13->mode_info.crtcs[0], &VAR_16);
 FUNC_13(VAR_13, VAR_13->mode_info.crtcs[1], &VAR_17);

 VAR_18 = (VAR_16 - 1);
 VAR_18 |= (VAR_17 - 1) << 16;
 FUNC_6(VAR_12, VAR_18);

 if (VAR_14 && VAR_15) {
  if (FUNC_11(VAR_16) > 64)
   VAR_24.full = FUNC_10(VAR_16, VAR_16);
  else
   VAR_24.full = VAR_16;
  if (FUNC_11(VAR_17) > 64)
   VAR_25.full = FUNC_10(VAR_17, VAR_17);
  else
   VAR_25.full = VAR_17;
  VAR_24.full += VAR_25.full;
  VAR_23.full = FUNC_9(VAR_16, VAR_24);
  if (VAR_16 > VAR_23.full) {
   VAR_25.full = VAR_16 - VAR_23.full;
   VAR_25.full = FUNC_10(VAR_25, VAR_16);
   VAR_24.full = FUNC_10(VAR_16,
      VAR_16);
   VAR_24.full = VAR_24.full + VAR_25.full;
   VAR_25.full = FUNC_8(16 * 1000);
   VAR_21 = FUNC_9(VAR_24, VAR_25);
  } else {
   VAR_24.full = FUNC_10(VAR_16,
      VAR_16);
   VAR_25.full = FUNC_8(16 * 1000);
   VAR_21 = FUNC_9(VAR_24, VAR_25);
  }
  if (VAR_17 > VAR_23.full) {
   VAR_25.full = VAR_17 - VAR_23.full;
   VAR_25.full = FUNC_10(VAR_25, VAR_17);
   VAR_24.full = FUNC_10(VAR_17,
      VAR_17);
   VAR_24.full = VAR_24.full + VAR_25.full;
   VAR_25.full = FUNC_8(16 * 1000);
   VAR_22 = FUNC_9(VAR_24, VAR_25);
  } else {
   VAR_24.full = FUNC_10(VAR_17,
      VAR_17);
   VAR_25.full = FUNC_8(16 * 1000);
   VAR_22 = FUNC_9(VAR_24, VAR_25);
  }
  if (VAR_16 > VAR_21)
   VAR_21 = VAR_16;
  if (FUNC_11(VAR_21) < 0)
   VAR_21 = 0;
  if (VAR_16 > VAR_21)
   VAR_21 = VAR_16;
  if (VAR_17 > VAR_22)
   VAR_22 = VAR_17;
  if (FUNC_11(VAR_22) < 0)
   VAR_22 = 0;
  if (VAR_17 > VAR_22)
   VAR_22 = VAR_17;
  VAR_19 = FUNC_11(VAR_21);
  VAR_20 = FUNC_11(VAR_22);
  if (VAR_13->disp_priority == 2) {
   VAR_19 |= FUNC_3(1);
   VAR_20 |= FUNC_5(1);
  }
 } else if (VAR_14) {
  if (FUNC_11(VAR_16) > 64)
   VAR_24.full = FUNC_10(VAR_16, VAR_16);
  else
   VAR_24.full = VAR_16;
  VAR_23.full = FUNC_9(VAR_16, VAR_24);
  if (VAR_16 > VAR_23.full) {
   VAR_25.full = VAR_16 - VAR_23.full;
   VAR_25.full = FUNC_10(VAR_25, VAR_16);
   VAR_24.full = FUNC_10(VAR_16,
      VAR_16);
   VAR_24.full = VAR_24.full + VAR_25.full;
   VAR_25.full = FUNC_8(16 * 1000);
   VAR_21 = FUNC_9(VAR_24, VAR_25);
  } else {
   VAR_24.full = FUNC_10(VAR_16,
      VAR_16);
   VAR_25.full = FUNC_8(16 * 1000);
   VAR_21 = FUNC_9(VAR_24, VAR_25);
  }
  if (VAR_16 > VAR_21)
   VAR_21 = VAR_16;
  if (FUNC_11(VAR_21) < 0)
   VAR_21 = 0;
  if (VAR_16 > VAR_21)
   VAR_21 = VAR_16;
  VAR_19 = FUNC_11(VAR_21);
  if (VAR_13->disp_priority == 2)
   VAR_19 |= FUNC_3(1);
 } else if (VAR_15) {
  if (FUNC_11(VAR_17) > 64)
   VAR_24.full = FUNC_10(VAR_17, VAR_17);
  else
   VAR_24.full = VAR_17;
  VAR_23.full = FUNC_9(VAR_17, VAR_24);
  if (VAR_17 > VAR_23.full) {
   VAR_25.full = VAR_17 - VAR_23.full;
   VAR_25.full = FUNC_10(VAR_25, VAR_17);
   VAR_24.full = FUNC_10(VAR_17,
      VAR_17);
   VAR_24.full = VAR_24.full + VAR_25.full;
   VAR_25.full = FUNC_8(16 * 1000);
   VAR_22 = FUNC_9(VAR_24, VAR_25);
  } else {
   VAR_24.full = FUNC_10(VAR_17,
      VAR_17);
   VAR_25.full = FUNC_8(16 * 1000);
   VAR_22 = FUNC_9(VAR_24, VAR_25);
  }
  if (VAR_17 > VAR_22)
   VAR_22 = VAR_17;
  if (FUNC_11(VAR_22) < 0)
   VAR_22 = 0;
  if (VAR_17 > VAR_22)
   VAR_22 = VAR_17;
  VAR_20 = FUNC_11(VAR_22);
  if (VAR_13->disp_priority == 2)
   VAR_20 |= FUNC_5(1);
 }

 FUNC_6(VAR_7, VAR_19);
 FUNC_6(VAR_8, VAR_19);
 FUNC_6(VAR_10, VAR_20);
 FUNC_6(VAR_11, VAR_20);
}
