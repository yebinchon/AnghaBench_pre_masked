
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int parent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static unsigned long FUNC_3(struct clk *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;

 VAR_4 = FUNC_1(VAR_2->parent);

 if (FUNC_2() >= VAR_1) {
  VAR_3 = (FUNC_0(VAR_0) >> 10) & 0x3f;
  VAR_3 += 4;
 } else {
  VAR_3 = (FUNC_0(VAR_0) >> 8) & 0xf;
  VAR_3 = (VAR_3 < 2) ? 124 : VAR_3;
 }

 return 2UL * VAR_4 / VAR_3;
}
