
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clk {int parent; } ;


 int FUNC_0 (unsigned long,unsigned long*,unsigned long*) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_0, unsigned long VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4 = FUNC_1(VAR_0->parent);
 u32 VAR_5 = VAR_4 / VAR_1;

 if (VAR_4 % VAR_1)
  VAR_5++;

 FUNC_0(VAR_5, &VAR_2, &VAR_3);

 return VAR_4 / (VAR_2 * VAR_3);
}
