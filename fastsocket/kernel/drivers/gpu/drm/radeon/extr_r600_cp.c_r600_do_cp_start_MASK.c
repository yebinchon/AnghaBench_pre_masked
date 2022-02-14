
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int flags; int r600_max_hw_contexts; int cp_running; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int) ;
 int VAR_3 ;
 int FUNC_7 (int ,int) ;
 int VAR_4 ;

void FUNC_8(drm_radeon_private_t *VAR_5)
{
 u32 VAR_6;
 VAR_4;
 FUNC_4("\n");

 FUNC_1(7);
 FUNC_5(FUNC_3(VAR_2, 5));
 FUNC_5(0x00000001);
 if (((VAR_5->flags & VAR_3) < VAR_0))
  FUNC_5(0x00000003);
 else
  FUNC_5(0x00000000);
 FUNC_5((VAR_5->r600_max_hw_contexts - 1));
 FUNC_5(FUNC_6(1));
 FUNC_5(0x00000000);
 FUNC_5(0x00000000);
 FUNC_0();
 FUNC_2();


 VAR_6 = 0xff;
 FUNC_7(VAR_1, VAR_6);

 VAR_5->cp_running = 1;

}
