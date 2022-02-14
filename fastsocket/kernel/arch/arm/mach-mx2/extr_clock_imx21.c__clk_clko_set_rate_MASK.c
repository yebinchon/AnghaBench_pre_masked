
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int * parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 unsigned long FUNC_2 (int *) ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_5, unsigned long VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 unsigned long VAR_9;

 VAR_9 = FUNC_2(VAR_5->parent);

 VAR_8 = VAR_9 / VAR_6;

 if (VAR_8 > 8 || VAR_8 < 1 || ((VAR_9 / VAR_8) != VAR_6))
  return -VAR_3;
 VAR_8--;

 VAR_7 = FUNC_0(VAR_0);

 if (VAR_5->parent == &VAR_4[0]) {
  VAR_7 &= ~VAR_1;
  VAR_7 |= VAR_8 << VAR_2;
 }
 FUNC_1(VAR_7, VAR_0);

 return 0;
}
