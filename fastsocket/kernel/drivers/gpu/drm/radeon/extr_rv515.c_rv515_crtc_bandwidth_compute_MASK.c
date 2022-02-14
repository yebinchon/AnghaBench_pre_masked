
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ full; } ;
struct TYPE_19__ {scalar_t__ full; } ;
struct TYPE_14__ {scalar_t__ full; } ;
struct TYPE_16__ {void* full; } ;
struct rv515_watermark {int lb_request_fifo_depth; TYPE_7__ priority_mark; TYPE_7__ priority_mark_max; TYPE_6__ worst_case_latency; TYPE_1__ dbpp; TYPE_7__ num_line_pair; TYPE_7__ active_time; TYPE_3__ consumption_rate; } ;
struct TYPE_18__ {TYPE_7__ sclk; } ;
struct radeon_device {TYPE_5__ pm; } ;
struct drm_display_mode {int crtc_hdisplay; int clock; int crtc_htotal; } ;
struct TYPE_17__ {struct drm_display_mode mode; int enabled; } ;
struct TYPE_15__ {scalar_t__ full; } ;
struct radeon_crtc {scalar_t__ rmx_type; TYPE_4__ base; TYPE_7__ hsc; TYPE_2__ vsc; } ;
typedef TYPE_7__ fixed20_12 ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (TYPE_7__) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (TYPE_7__,TYPE_7__) ;
 void* FUNC_3 (TYPE_7__,TYPE_7__) ;
 int FUNC_4 (TYPE_7__) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_1,
      struct radeon_crtc *VAR_2,
      struct rv515_watermark *VAR_3)
{
 struct drm_display_mode *VAR_4 = &VAR_2->base.mode;
 fixed20_12 VAR_5, VAR_6, VAR_7;
 fixed20_12 VAR_8, VAR_9, VAR_10, VAR_11;
 fixed20_12 VAR_12, VAR_13, VAR_14, VAR_15;

 if (!VAR_2->base.enabled) {

  VAR_3->lb_request_fifo_depth = 4;
  return;
 }

 if (VAR_2->vsc.full > FUNC_1(2))
  VAR_3->num_line_pair.full = FUNC_1(2);
 else
  VAR_3->num_line_pair.full = FUNC_1(1);

 VAR_6.full = FUNC_1(VAR_4->crtc_hdisplay);
 VAR_7.full = FUNC_1(256);
 VAR_5.full = FUNC_2(VAR_6, VAR_7);
 VAR_9.full = FUNC_3(VAR_5, VAR_3->num_line_pair);
 VAR_9.full = FUNC_0(VAR_9);
 if (VAR_5.full < FUNC_1(4)) {
  VAR_3->lb_request_fifo_depth = 4;
 } else {
  VAR_3->lb_request_fifo_depth = FUNC_4(VAR_9);
 }







 VAR_5.full = FUNC_1(VAR_4->clock);
 VAR_6.full = FUNC_1(1000);
 VAR_5.full = FUNC_2(VAR_5, VAR_6);
 VAR_8.full = FUNC_2(VAR_6, VAR_5);
 if (VAR_2->rmx_type != VAR_0) {
  VAR_6.full = FUNC_1(2);
  if (VAR_2->vsc.full > VAR_6.full)
   VAR_6.full = VAR_2->vsc.full;
  VAR_6.full = FUNC_3(VAR_6, VAR_2->hsc);
  VAR_7.full = FUNC_1(2);
  VAR_6.full = FUNC_2(VAR_6, VAR_7);
  VAR_12.full = FUNC_2(VAR_8, VAR_6);
 } else {
  VAR_12.full = VAR_8.full;
 }
 VAR_5.full = FUNC_1(1);
 VAR_3->consumption_rate.full = FUNC_2(VAR_5, VAR_12);







 VAR_5.full = FUNC_1(VAR_2->base.mode.crtc_htotal);
 VAR_13.full = FUNC_3(VAR_5, VAR_8);






 VAR_5.full = FUNC_1(VAR_2->base.mode.crtc_htotal);
 VAR_6.full = FUNC_1(VAR_2->base.mode.crtc_hdisplay);
 VAR_3->active_time.full = FUNC_3(VAR_13, VAR_6);
 VAR_3->active_time.full = FUNC_2(VAR_3->active_time, VAR_5);






 VAR_5.full = FUNC_1(600 * 1000);
 VAR_14.full = FUNC_2(VAR_5, VAR_1->pm.sclk);
 VAR_15.full = FUNC_1(1000);
 if (FUNC_4(VAR_3->num_line_pair) > 1) {
  VAR_5.full = FUNC_1(3);
  VAR_3->worst_case_latency.full = FUNC_3(VAR_5, VAR_14);
  VAR_3->worst_case_latency.full += VAR_15.full;
 } else {
  VAR_3->worst_case_latency.full = VAR_14.full + VAR_15.full;
 }
 if ((2+VAR_3->lb_request_fifo_depth) >= FUNC_4(VAR_9)) {
  VAR_10.full = VAR_13.full;
 } else {
  VAR_10.full = FUNC_1(VAR_3->lb_request_fifo_depth - 2);
  VAR_10.full = VAR_9.full - VAR_10.full;
  VAR_10.full = FUNC_3(VAR_10, VAR_14);
  VAR_10.full = VAR_13.full - VAR_10.full;
 }

 VAR_3->dbpp.full = FUNC_1(2 * 16);




 VAR_5.full = FUNC_1(16);
 VAR_3->priority_mark_max.full = FUNC_1(VAR_2->base.mode.crtc_hdisplay);
 VAR_3->priority_mark_max.full = FUNC_2(VAR_3->priority_mark_max, VAR_5);
 VAR_3->priority_mark_max.full = FUNC_0(VAR_3->priority_mark_max);


 VAR_11.full = VAR_10.full - VAR_3->worst_case_latency.full;
 VAR_11.full = FUNC_2(VAR_11, VAR_12);
 if (FUNC_4(VAR_11) > VAR_2->base.mode.crtc_hdisplay) {
  VAR_3->priority_mark.full = VAR_3->priority_mark_max.full;
 } else {
  VAR_5.full = FUNC_1(16);
  VAR_3->priority_mark.full = FUNC_2(VAR_11, VAR_5);
  VAR_3->priority_mark.full = FUNC_0(VAR_3->priority_mark);
  VAR_3->priority_mark.full = VAR_3->priority_mark_max.full - VAR_3->priority_mark.full;
 }
}
