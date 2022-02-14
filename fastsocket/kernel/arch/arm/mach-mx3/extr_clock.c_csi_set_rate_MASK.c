
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clk {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long,unsigned long*,unsigned long*) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct clk *VAR_6, unsigned long VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12 = FUNC_3(VAR_6->parent);

 VAR_9 = VAR_12 / VAR_7;

 if ((VAR_12 / VAR_9) != VAR_7)
  return -VAR_0;

 FUNC_0(VAR_9, &VAR_10, &VAR_11);


 VAR_8 = FUNC_1(VAR_1) &
     ~(VAR_2 | VAR_4);
 VAR_8 |= (VAR_11 - 1) << VAR_3;
 VAR_8 |= (VAR_10 - 1) << VAR_5;
 FUNC_2(VAR_8, VAR_1);

 return 0;
}
