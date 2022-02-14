
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int pool; } ;
union cvmx_pko_reg_cmd_buf {int u64; TYPE_1__ s; } ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;

void FUNC_7(void)
{
 int VAR_10;
 uint64_t VAR_11 = 8;
 union cvmx_pko_reg_cmd_buf VAR_12;






 VAR_12.u64 = 0;
 VAR_12.s.pool = VAR_0;
 VAR_12.s.size = VAR_1 / 8 - 1;

 FUNC_6(VAR_4, VAR_12.u64);

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
  FUNC_3(VAR_3, VAR_10, 1,
         &VAR_11);





 if (FUNC_0(VAR_6) || FUNC_0(VAR_9)
     || FUNC_0(VAR_8)
     || FUNC_0(VAR_7)) {
  int VAR_13 = FUNC_2();
  int VAR_14 =
      FUNC_1(VAR_13 - 1);
  int VAR_15 =
      FUNC_4(VAR_14) +
      FUNC_5(VAR_14);
  if (FUNC_0(VAR_6)) {
   if (VAR_15 <= 32)
    FUNC_6(VAR_5, 2);
   else if (VAR_15 <= 64)
    FUNC_6(VAR_5, 1);
  } else {
   if (VAR_15 <= 64)
    FUNC_6(VAR_5, 2);
   else if (VAR_15 <= 128)
    FUNC_6(VAR_5, 1);
  }
 }
}
