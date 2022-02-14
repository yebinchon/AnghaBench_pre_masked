
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clk {int * parent; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int *) ;
 int * VAR_3 ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_4)
{
 u32 VAR_5 = 0;
 unsigned long VAR_6;

 VAR_6 = FUNC_1(VAR_4->parent);

 if (VAR_4->parent == &VAR_3[0])
  VAR_5 = FUNC_0(VAR_0) & VAR_1
    >> VAR_2;
 VAR_5++;

 return VAR_6 / VAR_5;
}
