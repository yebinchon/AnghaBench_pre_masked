
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clocksource {int dummy; } ;
typedef int cycle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static cycle_t FUNC_5(struct clocksource *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;
 u32 VAR_6;

 FUNC_4(VAR_4);
 VAR_5 = VAR_1;
 VAR_6 = FUNC_2(VAR_0);
 FUNC_3(VAR_4);

 VAR_5 += FUNC_1(VAR_6) * VAR_2;
 VAR_5 += FUNC_0(VAR_6);
 return VAR_5;
}
