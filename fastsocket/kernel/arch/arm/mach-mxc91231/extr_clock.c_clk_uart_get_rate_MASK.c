
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clk {int id; int parent; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk *VAR_4)
{
 u32 VAR_5;

 switch (VAR_4->id) {
 case 0:
 case 1:
  VAR_5 = FUNC_1(VAR_1, VAR_0);
  break;
 case 2:
  VAR_5 = FUNC_1(VAR_2, VAR_3);
  break;
 default:
  FUNC_0();
 }
 return FUNC_2(VAR_4->parent) / VAR_5;
}
