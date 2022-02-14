
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cp_running; int flags; int track_flush; int cp_mode; } ;
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 () ;
 int VAR_10 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int VAR_11 ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_11(drm_radeon_private_t * VAR_12)
{
 VAR_11;
 FUNC_4("\n");

 FUNC_10(VAR_12);

 FUNC_9(VAR_2, VAR_12->cp_mode);

 VAR_12->cp_running = 1;




 if ((VAR_12->flags & VAR_3) == VAR_0) {
  FUNC_1(3);
  FUNC_5(FUNC_3(VAR_1, 1));
  FUNC_5(5);
  FUNC_5(0xdeadbeef);
  FUNC_0();
  FUNC_2();
 }

 FUNC_1(8);

 FUNC_5(FUNC_3(VAR_7, 0));
 FUNC_5(VAR_5 |
   VAR_6 |
   VAR_9 |
   VAR_8);
 FUNC_6();
 FUNC_7();
 FUNC_8();
 FUNC_0();
 FUNC_2();

 VAR_12->track_flush |= VAR_4 | VAR_10;
}
