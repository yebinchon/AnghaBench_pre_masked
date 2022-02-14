
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct drm_display_mode {int crtc_vtotal; int crtc_vdisplay; } ;
struct drm_device {int num_crtcs; TYPE_1__* driver; } ;
struct drm_crtc {scalar_t__ framedur_ns; scalar_t__ linedur_ns; scalar_t__ pixeldur_ns; struct drm_display_mode hwmode; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {int (* get_scanout_position ) (struct drm_device*,int,int*,int*) ;} ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct timeval*) ;
 struct timeval FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct drm_device*,int,int*,int*) ;
 scalar_t__ FUNC_7 (struct timeval*) ;

int FUNC_8(struct drm_device *VAR_9, int VAR_10,
       int *VAR_11,
       struct timeval *VAR_12,
       unsigned VAR_13,
       struct drm_crtc *VAR_14)
{
 struct timeval VAR_15, VAR_16;
 struct drm_display_mode *VAR_17;
 int VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22, VAR_23;
 s64 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 bool VAR_29;

 if (VAR_10 < 0 || VAR_10 >= VAR_9->num_crtcs) {
  FUNC_1("Invalid crtc %d\n", VAR_10);
  return -VAR_7;
 }


 if (!VAR_9->driver->get_scanout_position) {
  FUNC_1("Called from driver w/o get_scanout_position()!?\n");
  return -VAR_8;
 }

 VAR_17 = &VAR_14->hwmode;
 VAR_19 = VAR_17->crtc_vtotal;
 VAR_20 = VAR_17->crtc_vdisplay;


 VAR_24 = VAR_14->framedur_ns;
 VAR_25 = VAR_14->linedur_ns;
 VAR_26 = VAR_14->pixeldur_ns;




 if (VAR_19 <= 0 || VAR_20 <= 0 || VAR_24 == 0) {
  FUNC_0("crtc %d: Noop due to uninitialized mode.\n", VAR_10);
  return -VAR_6;
 }
 for (VAR_23 = 0; VAR_23 < VAR_3; VAR_23++) {



  FUNC_4();


  FUNC_2(&VAR_15);


  VAR_18 = VAR_9->driver->get_scanout_position(VAR_9, VAR_10, &VAR_21, &VAR_22);


  FUNC_2(&VAR_16);

  FUNC_5();


  if (!(VAR_18 & VAR_2)) {
   FUNC_0("crtc %d : scanoutpos query failed [%d].\n",
      VAR_10, VAR_18);
   return -VAR_8;
  }

  VAR_28 = FUNC_7(&VAR_16) - FUNC_7(&VAR_15);


  if (VAR_28 <= (s64) *VAR_11)
   break;
 }


 if (VAR_23 == VAR_3) {
  FUNC_0("crtc %d: Noisy timestamp %d us > %d us [%d reps].\n",
     VAR_10, (int) VAR_28/1000, *VAR_11/1000, VAR_23);
 }


 *VAR_11 = (int) VAR_28;






 VAR_29 = VAR_18 & VAR_1;





 VAR_27 = (s64) VAR_21 * VAR_25 + (s64) VAR_22 * VAR_26;
 if ((VAR_13 & VAR_0) && !VAR_29 &&
     ((VAR_20 - VAR_21) < VAR_19 / 100)) {
  VAR_27 = VAR_27 - VAR_24;


  VAR_18 |= 0x8;
 }




 *VAR_12 = FUNC_3(FUNC_7(&VAR_16) - VAR_27);

 FUNC_0("crtc %d : v %d p(%d,%d)@ %ld.%ld -> %ld.%ld [e %d us, %d rep]\n",
    VAR_10, (int)VAR_18, VAR_22, VAR_21,
    (long)VAR_16.tv_sec, (long)VAR_16.tv_usec,
    (long)VAR_12->tv_sec, (long)VAR_12->tv_usec,
    (int)VAR_28/1000, VAR_23);

 VAR_18 = VAR_5;
 if (VAR_29)
  VAR_18 |= VAR_4;

 return VAR_18;
}
