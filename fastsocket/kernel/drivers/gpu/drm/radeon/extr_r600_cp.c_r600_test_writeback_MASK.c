
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {int writeback_works; scalar_t__ usec_timeout; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_7(drm_radeon_private_t *VAR_6)
{
 u32 VAR_7;


 VAR_6->writeback_works = 0;




 FUNC_6(VAR_6, FUNC_2(1), 0);

 FUNC_4(VAR_3, 0xdeadbeef);

 for (VAR_7 = 0; VAR_7 < VAR_6->usec_timeout; VAR_7++) {
  u32 VAR_8;

  VAR_8 = FUNC_5(VAR_6, FUNC_2(1));
  if (VAR_8 == 0xdeadbeef)
   break;
  FUNC_1(1);
 }

 if (VAR_7 < VAR_6->usec_timeout) {
  VAR_6->writeback_works = 1;
  FUNC_0("writeback test succeeded in %d usecs\n", VAR_7);
 } else {
  VAR_6->writeback_works = 0;
  FUNC_0("writeback test failed\n");
 }
 if (VAR_5 == 1) {
  VAR_6->writeback_works = 0;
  FUNC_0("writeback forced off\n");
 }

 if (!VAR_6->writeback_works) {

  FUNC_4(VAR_1,



        FUNC_3(VAR_1) |
        VAR_2);
  FUNC_4(VAR_4, 0);
 }
}
