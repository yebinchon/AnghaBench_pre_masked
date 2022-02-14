
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int) ;

u32 FUNC_4(struct radeon_device *VAR_3, int VAR_4, u64 VAR_5)
{
 struct radeon_crtc *VAR_6 = VAR_3->mode_info.crtcs[VAR_4];
 u32 VAR_7 = ((u32)VAR_5) | VAR_2;
 int VAR_8;



 FUNC_2(VAR_0 + VAR_6->crtc_offset, VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_3->usec_timeout; VAR_8++) {
  if (FUNC_1(VAR_0 + VAR_6->crtc_offset) & VAR_1)
   break;
  FUNC_3(1);
 }
 FUNC_0("Update pending now high. Unlocking vupdate_lock.\n");


 VAR_7 &= ~VAR_2;
 FUNC_2(VAR_0 + VAR_6->crtc_offset, VAR_7);


 return FUNC_1(VAR_0 + VAR_6->crtc_offset) & VAR_1;
}
