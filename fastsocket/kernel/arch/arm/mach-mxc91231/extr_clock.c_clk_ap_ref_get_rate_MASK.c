
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_6)
{
 u32 VAR_7, VAR_8;
 u8 VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_7 = FUNC_0(VAR_3);
 VAR_8 = FUNC_0(VAR_0);


 VAR_10 = VAR_7 & VAR_4;

 VAR_9 = (VAR_7 >> VAR_5) & 0x1;

 VAR_12 = (VAR_8 >> VAR_2) & 0x1;

 VAR_11 = VAR_8 & VAR_1;

 if (VAR_11 & !VAR_12)

  return FUNC_1(VAR_6->parent) / (VAR_9 ? 2 : 1);

 return FUNC_1(VAR_6->parent) * (VAR_10 ? 2 : 1);
}
