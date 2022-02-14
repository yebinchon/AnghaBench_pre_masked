
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


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int) ;

u32 FUNC_4(struct radeon_device *VAR_5, int VAR_6, u64 VAR_7)
{
 struct radeon_crtc *VAR_8 = VAR_5->mode_info.crtcs[VAR_6];
 u32 VAR_9 = FUNC_1(VAR_3 + VAR_8->crtc_offset);
 int VAR_10;


 VAR_9 |= VAR_4;
 FUNC_2(VAR_3 + VAR_8->crtc_offset, VAR_9);


 FUNC_2(VAR_1 + VAR_8->crtc_offset,
        (u32)VAR_7);
 FUNC_2(VAR_0 + VAR_8->crtc_offset,
        (u32)VAR_7);


 for (VAR_10 = 0; VAR_10 < VAR_5->usec_timeout; VAR_10++) {
  if (FUNC_1(VAR_3 + VAR_8->crtc_offset) & VAR_2)
   break;
  FUNC_3(1);
 }
 FUNC_0("Update pending now high. Unlocking vupdate_lock.\n");


 VAR_9 &= ~VAR_4;
 FUNC_2(VAR_3 + VAR_8->crtc_offset, VAR_9);


 return FUNC_1(VAR_3 + VAR_8->crtc_offset) & VAR_2;
}
