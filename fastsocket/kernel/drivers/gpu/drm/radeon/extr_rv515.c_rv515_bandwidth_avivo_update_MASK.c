
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
struct TYPE_13__ {scalar_t__ full; } ;
struct TYPE_12__ {scalar_t__ full; } ;
struct TYPE_18__ {scalar_t__ full; } ;
struct TYPE_16__ {scalar_t__ full; } ;
struct rv515_watermark {int lb_request_fifo_depth; TYPE_2__ priority_mark_max; TYPE_1__ priority_mark; TYPE_9__ consumption_rate; TYPE_5__ worst_case_latency; TYPE_9__ active_time; TYPE_5__ sclk; TYPE_5__ num_line_pair; TYPE_5__ dbpp; } ;
struct TYPE_15__ {TYPE_6__** crtcs; } ;
struct radeon_device {int disp_priority; TYPE_4__ mode_info; } ;
struct drm_display_mode {int dummy; } ;
typedef TYPE_5__ fixed20_12 ;
struct TYPE_14__ {struct drm_display_mode mode; scalar_t__ enabled; } ;
struct TYPE_17__ {TYPE_3__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (TYPE_5__,TYPE_5__) ;
 void* FUNC_3 (TYPE_5__,TYPE_9__) ;
 int FUNC_4 (TYPE_5__) ;
 int FUNC_5 (struct radeon_device*,struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_6 (struct radeon_device*,TYPE_6__*,struct rv515_watermark*) ;

void FUNC_7(struct radeon_device *VAR_7)
{
 struct drm_display_mode *VAR_8 = ((void*)0);
 struct drm_display_mode *VAR_9 = ((void*)0);
 struct rv515_watermark VAR_10;
 struct rv515_watermark VAR_11;
 u32 VAR_12;
 u32 VAR_13 = VAR_6;
 u32 VAR_14 = VAR_6;
 fixed20_12 VAR_15, VAR_16, VAR_17;
 fixed20_12 VAR_18, VAR_19;

 if (VAR_7->mode_info.crtcs[0]->base.enabled)
  VAR_8 = &VAR_7->mode_info.crtcs[0]->base.mode;
 if (VAR_7->mode_info.crtcs[1]->base.enabled)
  VAR_9 = &VAR_7->mode_info.crtcs[1]->base.mode;
 FUNC_5(VAR_7, VAR_8, VAR_9);

 FUNC_6(VAR_7, VAR_7->mode_info.crtcs[0], &VAR_10);
 FUNC_6(VAR_7, VAR_7->mode_info.crtcs[1], &VAR_11);

 VAR_12 = VAR_10;
 VAR_12 |= VAR_11 << 16;
 FUNC_0(VAR_4, VAR_12);

 if (VAR_8 && VAR_9) {
  if (FUNC_4(VAR_10) > 64)
   VAR_18.full = FUNC_2(VAR_10, VAR_10);
  else
   VAR_18.full = VAR_10;
  if (FUNC_4(VAR_11) > 64)
   VAR_19.full = FUNC_2(VAR_11, VAR_11);
  else
   VAR_19.full = VAR_11;
  VAR_18.full += VAR_19.full;
  VAR_17.full = FUNC_2(VAR_10, VAR_18);
  if (VAR_10 > VAR_17.full) {
   VAR_19.full = VAR_10 - VAR_17.full;
   VAR_19.full = FUNC_3(VAR_19, VAR_10);
   VAR_18.full = FUNC_1(16);
   VAR_19.full = FUNC_2(VAR_19, VAR_18);
   VAR_18.full = FUNC_3(VAR_10,
      VAR_10);
   VAR_15 = VAR_18.full + VAR_19.full;
  } else {
   VAR_18.full = FUNC_3(VAR_10,
      VAR_10);
   VAR_19.full = FUNC_1(16 * 1000);
   VAR_15 = FUNC_2(VAR_18, VAR_19);
  }
  if (VAR_11 > VAR_17.full) {
   VAR_19.full = VAR_11 - VAR_17.full;
   VAR_19.full = FUNC_3(VAR_19, VAR_11);
   VAR_18.full = FUNC_1(16);
   VAR_19.full = FUNC_2(VAR_19, VAR_18);
   VAR_18.full = FUNC_3(VAR_11,
      VAR_11);
   VAR_16 = VAR_18.full + VAR_19.full;
  } else {
   VAR_18.full = FUNC_3(VAR_11,
      VAR_11);
   VAR_19.full = FUNC_1(16 * 1000);
   VAR_16 = FUNC_2(VAR_18, VAR_19);
  }
  if (VAR_10 > VAR_15)
   VAR_15 = VAR_10;
  if (FUNC_4(VAR_15) < 0)
   VAR_15 = 0;
  if (VAR_10 > VAR_15)
   VAR_15 = VAR_10;
  if (VAR_11 > VAR_16)
   VAR_16 = VAR_11;
  if (FUNC_4(VAR_16) < 0)
   VAR_16 = 0;
  if (VAR_11 > VAR_16)
   VAR_16 = VAR_11;
  VAR_13 = FUNC_4(VAR_15);
  VAR_14 = FUNC_4(VAR_16);
  if (VAR_7->disp_priority == 2) {
   VAR_13 |= VAR_5;
   VAR_14 |= VAR_5;
  }
 } else if (VAR_8) {
  if (FUNC_4(VAR_10) > 64)
   VAR_18.full = FUNC_2(VAR_10, VAR_10);
  else
   VAR_18.full = VAR_10;
  VAR_17.full = FUNC_2(VAR_10, VAR_18);
  if (VAR_10 > VAR_17.full) {
   VAR_19.full = VAR_10 - VAR_17.full;
   VAR_19.full = FUNC_3(VAR_19, VAR_10);
   VAR_18.full = FUNC_1(16);
   VAR_19.full = FUNC_2(VAR_19, VAR_18);
   VAR_18.full = FUNC_3(VAR_10,
      VAR_10);
   VAR_15 = VAR_18.full + VAR_19.full;
  } else {
   VAR_18.full = FUNC_3(VAR_10,
      VAR_10);
   VAR_19.full = FUNC_1(16);
   VAR_15 = FUNC_2(VAR_18, VAR_19);
  }
  if (VAR_10 > VAR_15)
   VAR_15 = VAR_10;
  if (FUNC_4(VAR_15) < 0)
   VAR_15 = 0;
  if (VAR_10 > VAR_15)
   VAR_15 = VAR_10;
  VAR_13 = FUNC_4(VAR_15);
  if (VAR_7->disp_priority == 2)
   VAR_13 |= VAR_5;
 } else if (VAR_9) {
  if (FUNC_4(VAR_11) > 64)
   VAR_18.full = FUNC_2(VAR_11, VAR_11);
  else
   VAR_18.full = VAR_11;
  VAR_17.full = FUNC_2(VAR_11, VAR_18);
  if (VAR_11 > VAR_17.full) {
   VAR_19.full = VAR_11 - VAR_17.full;
   VAR_19.full = FUNC_3(VAR_19, VAR_11);
   VAR_18.full = FUNC_1(16);
   VAR_19.full = FUNC_2(VAR_19, VAR_18);
   VAR_18.full = FUNC_3(VAR_11,
      VAR_11);
   VAR_16 = VAR_18.full + VAR_19.full;
  } else {
   VAR_18.full = FUNC_3(VAR_11,
      VAR_11);
   VAR_19.full = FUNC_1(16 * 1000);
   VAR_16 = FUNC_2(VAR_18, VAR_19);
  }
  if (VAR_11 > VAR_16)
   VAR_16 = VAR_11;
  if (FUNC_4(VAR_16) < 0)
   VAR_16 = 0;
  if (VAR_11 > VAR_16)
   VAR_16 = VAR_11;
  VAR_14 = FUNC_4(VAR_16);
  if (VAR_7->disp_priority == 2)
   VAR_14 |= VAR_5;
 }

 FUNC_0(VAR_0, VAR_13);
 FUNC_0(VAR_1, VAR_13);
 FUNC_0(VAR_2, VAR_14);
 FUNC_0(VAR_3, VAR_14);
}
