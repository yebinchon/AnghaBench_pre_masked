
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int boxes; } ;
struct TYPE_8__ {int usec_timeout; TYPE_1__ stats; } ;
typedef TYPE_2__ drm_radeon_private_t ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(drm_radeon_private_t * VAR_5)
{
 int VAR_6, VAR_7;

 VAR_5->stats.boxes |= VAR_2;

 VAR_7 = FUNC_5(VAR_5, 64);
 if (VAR_7)
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_5->usec_timeout; VAR_6++) {
  if (!(FUNC_3(VAR_4)
        & VAR_3)) {
   FUNC_4(VAR_5);
   return 0;
  }
  FUNC_2(1);
 }
 FUNC_0("wait idle failed status : 0x%08X 0x%08X\n",
   FUNC_3(VAR_4),
   FUNC_3(VAR_1));





 return -VAR_0;
}
