
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clk {int id; int parent; } ;


 int FUNC_0 () ;
 unsigned long FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk *VAR_3)
{
 u32 VAR_4;

 switch (VAR_3->id) {
 case 0:
  VAR_4 = FUNC_1(VAR_0, VAR_1);
  break;
 case 1:
  VAR_4 = FUNC_1(VAR_0, VAR_2);
  break;
 default:
  FUNC_0();
 }

 return FUNC_2(VAR_3->parent) / VAR_4;
}
