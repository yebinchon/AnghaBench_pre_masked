
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint32_t ;
struct clk {int parent; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk *VAR_9)
{
 uint32_t VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12 = 0, VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
 unsigned long long VAR_16;

 VAR_11 = FUNC_1(VAR_9->parent);

 VAR_10 = FUNC_0(VAR_0);
 VAR_15 = (VAR_10 & VAR_7) >> VAR_8;
 VAR_14 = (VAR_10 & VAR_1) >> VAR_2;
 VAR_12 = (VAR_10 & VAR_3) >> VAR_4;
 VAR_13 = (VAR_10 & VAR_5) >> VAR_6;

 VAR_12 = (VAR_12 <= 5) ? 5 : VAR_12;
 VAR_16 = 2LL * VAR_11 * VAR_13;
 FUNC_2(VAR_16, VAR_14 + 1);
 VAR_16 = 2LL * VAR_11 * VAR_12 + VAR_16;
 FUNC_2(VAR_16, VAR_15 + 1);

 return (unsigned long)VAR_16;
}
