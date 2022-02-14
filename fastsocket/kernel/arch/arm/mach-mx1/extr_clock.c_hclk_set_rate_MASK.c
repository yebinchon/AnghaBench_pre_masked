
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int parent; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_4, unsigned long VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned long VAR_8;

 VAR_8 = FUNC_2(VAR_4->parent);

 VAR_6 = VAR_8 / VAR_5;

 if (VAR_6 > 16 || VAR_6 < 1 || ((VAR_8 / VAR_6) != VAR_5))
  return -VAR_3;

 VAR_6--;

 VAR_7 = FUNC_0(VAR_0);
 VAR_7 &= ~VAR_1;
 VAR_7 |= VAR_6 << VAR_2;
 FUNC_1(VAR_7, VAR_0);

 return 0;
}
