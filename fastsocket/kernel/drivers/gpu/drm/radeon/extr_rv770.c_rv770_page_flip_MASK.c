
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {struct radeon_crtc** crtcs; } ;
struct radeon_device {int usec_timeout; TYPE_1__ mode_info; } ;
struct radeon_crtc {scalar_t__ crtc_offset; scalar_t__ crtc_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;

u32 FUNC_5(struct radeon_device *VAR_9, int VAR_10, u64 VAR_11)
{
 struct radeon_crtc *VAR_12 = VAR_9->mode_info.crtcs[VAR_10];
 u32 VAR_13 = FUNC_1(VAR_1 + VAR_12->crtc_offset);
 int VAR_14;


 VAR_13 |= VAR_2;
 FUNC_2(VAR_1 + VAR_12->crtc_offset, VAR_13);


 if (VAR_12->crtc_id) {
  FUNC_2(VAR_8, FUNC_4(VAR_11));
  FUNC_2(VAR_7, FUNC_4(VAR_11));
 } else {
  FUNC_2(VAR_6, FUNC_4(VAR_11));
  FUNC_2(VAR_4, FUNC_4(VAR_11));
 }
 FUNC_2(VAR_5 + VAR_12->crtc_offset,
        (u32)VAR_11);
 FUNC_2(VAR_3 + VAR_12->crtc_offset,
        (u32)VAR_11);


 for (VAR_14 = 0; VAR_14 < VAR_9->usec_timeout; VAR_14++) {
  if (FUNC_1(VAR_1 + VAR_12->crtc_offset) & VAR_0)
   break;
  FUNC_3(1);
 }
 FUNC_0("Update pending now high. Unlocking vupdate_lock.\n");


 VAR_13 &= ~VAR_2;
 FUNC_2(VAR_1 + VAR_12->crtc_offset, VAR_13);


 return FUNC_1(VAR_1 + VAR_12->crtc_offset) & VAR_0;
}
