
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct clocksource {int dummy; } ;
typedef scalar_t__ cycle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static cycle_t FUNC_4(struct clocksource *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;
 u16 VAR_6;

 FUNC_3(VAR_4);
 VAR_6 = FUNC_1(FUNC_0(VAR_0));
 VAR_5 = VAR_2;
 FUNC_2(VAR_4);

 return VAR_5 + VAR_1 - VAR_6;
}
