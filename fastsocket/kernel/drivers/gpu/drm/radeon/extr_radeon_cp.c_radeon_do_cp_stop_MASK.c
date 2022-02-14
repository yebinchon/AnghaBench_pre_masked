
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ cp_running; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(drm_radeon_private_t * VAR_7)
{
 VAR_6;
 FUNC_4("\n");


 if ((VAR_7->flags & VAR_5) == VAR_0) {
  FUNC_1(2);
  FUNC_5(FUNC_3(VAR_2, 0));
  FUNC_5(VAR_1);
  FUNC_0();
  FUNC_2();
  FUNC_7(VAR_7);
 }

 FUNC_6(VAR_3, VAR_4);

 VAR_7->cp_running = 0;
}
