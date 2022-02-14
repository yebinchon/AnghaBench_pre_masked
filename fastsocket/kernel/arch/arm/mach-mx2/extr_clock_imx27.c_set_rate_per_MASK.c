
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int id; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_2, unsigned long VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 unsigned long VAR_6;

 VAR_6 = FUNC_2(VAR_2->parent);

 if (VAR_2->id < 0 || VAR_2->id > 3)
  return -VAR_1;

 VAR_5 = VAR_6 / VAR_3;
 if (VAR_5 > 64 || VAR_5 < 1 || ((VAR_6 / VAR_5) != VAR_3))
  return -VAR_1;
 VAR_5--;

 VAR_4 = FUNC_0(VAR_0) & ~(0x3f << (VAR_2->id << 3));
 VAR_4 |= VAR_5 << (VAR_2->id << 3);
 FUNC_1(VAR_4, VAR_0);

 return 0;
}
