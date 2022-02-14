
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct extif_timings {int* tim; int converted; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(const struct extif_timings *VAR_3)
{
 u32 VAR_4;

 FUNC_0(!VAR_3->converted);

 FUNC_1(1);
 FUNC_4(VAR_2, VAR_3->tim[0]);
 FUNC_4(VAR_1, VAR_3->tim[1]);

 VAR_4 = FUNC_3(VAR_0);
 VAR_4 &= ~(1 << 4);
 VAR_4 |= (VAR_3->tim[2] ? 1 : 0) << 4;
 FUNC_4(VAR_0, VAR_4);

 FUNC_2();
 FUNC_1(0);
}
