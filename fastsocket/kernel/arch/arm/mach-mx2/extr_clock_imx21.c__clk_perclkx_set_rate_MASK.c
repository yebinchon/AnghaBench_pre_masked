
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int id; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_3, unsigned long VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 unsigned long VAR_7;

 VAR_7 = FUNC_2(VAR_3->parent);

 if (VAR_3->id < 0 || VAR_3->id > 3)
  return -VAR_2;

 VAR_6 = VAR_7 / VAR_4;
 if (VAR_6 > 64 || VAR_6 < 1 || ((VAR_7 / VAR_6) != VAR_4))
  return -VAR_2;
 VAR_6--;

 VAR_5 =
     FUNC_0(VAR_0) & ~(VAR_1 <<
           (VAR_3->id << 3));
 VAR_5 |= VAR_6 << (VAR_3->id << 3);
 FUNC_1(VAR_5, VAR_0);

 return 0;
}
