
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int crc_en; } ;
union cvmx_pip_prt_cfgx {int u64; TYPE_1__ s; } ;
struct TYPE_4__ {scalar_t__ board_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,int ,int ,int) ;
 TYPE_2__* FUNC_9 () ;
 int FUNC_10 (int ,int ) ;

int FUNC_11(int VAR_3)
{





 int VAR_4 = FUNC_4(VAR_3);
 int VAR_5;
 for (VAR_5 = VAR_3 * 16; VAR_5 < VAR_3 * 16 + VAR_4;
      VAR_5++) {
  union cvmx_pip_prt_cfgx VAR_6;
  VAR_6.u64 = FUNC_5(FUNC_0(VAR_5));
  VAR_6.s.crc_en = 1;
  FUNC_10(FUNC_0(VAR_5), VAR_6.u64);
 }

 if (FUNC_9()->board_type != VAR_0) {
  FUNC_8(VAR_3, VAR_2,
      VAR_1, VAR_4);
  if (FUNC_7(VAR_3))
   FUNC_6(VAR_3);
 }
 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
 FUNC_1(VAR_3);
 return 0;
}
