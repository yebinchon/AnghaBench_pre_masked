
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int en; } ;
union cvmx_gmxx_prtx_cfg {int u64; TYPE_1__ s; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(int VAR_0)
{
 int VAR_1 = FUNC_5(VAR_0);
 int VAR_2;

 FUNC_1(VAR_0, VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  union cvmx_gmxx_prtx_cfg VAR_3;
  VAR_3.u64 =
      FUNC_6(FUNC_0(VAR_2, VAR_0));
  VAR_3.s.en = 1;
  FUNC_7(FUNC_0(VAR_2, VAR_0),
          VAR_3.u64);
  FUNC_3(VAR_2, VAR_0);
 }
 FUNC_4(VAR_0);
 FUNC_2(VAR_0);
 return 0;
}
