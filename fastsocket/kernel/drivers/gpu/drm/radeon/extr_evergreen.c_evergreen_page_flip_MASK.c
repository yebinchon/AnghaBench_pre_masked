
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {struct radeon_crtc** crtcs; } ;
struct radeon_device {int usec_timeout; TYPE_1__ mode_info; } ;
struct radeon_crtc {scalar_t__ crtc_offset; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;

u32 FUNC_5(struct radeon_device *VAR_7, int VAR_8, u64 VAR_9)
{
 struct radeon_crtc *VAR_10 = VAR_7->mode_info.crtcs[VAR_8];
 u32 VAR_11 = FUNC_1(VAR_5 + VAR_10->crtc_offset);
 int VAR_12;


 VAR_11 |= VAR_6;
 FUNC_2(VAR_5 + VAR_10->crtc_offset, VAR_11);


 FUNC_2(VAR_3 + VAR_10->crtc_offset,
        FUNC_4(VAR_9));
 FUNC_2(VAR_2 + VAR_10->crtc_offset,
        (u32)VAR_9);

 FUNC_2(VAR_1 + VAR_10->crtc_offset,
        FUNC_4(VAR_9));
 FUNC_2(VAR_0 + VAR_10->crtc_offset,
        (u32)VAR_9);


 for (VAR_12 = 0; VAR_12 < VAR_7->usec_timeout; VAR_12++) {
  if (FUNC_1(VAR_5 + VAR_10->crtc_offset) & VAR_4)
   break;
  FUNC_3(1);
 }
 FUNC_0("Update pending now high. Unlocking vupdate_lock.\n");


 VAR_11 &= ~VAR_6;
 FUNC_2(VAR_5 + VAR_10->crtc_offset, VAR_11);


 return FUNC_1(VAR_5 + VAR_10->crtc_offset) & VAR_4;
}
