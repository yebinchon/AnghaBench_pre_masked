
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct IR_i2c {int c; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct IR_i2c *VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 unsigned char VAR_4[5], VAR_5, VAR_6, VAR_7;


 if (5 != FUNC_0(VAR_1->c, VAR_4, 5))
  return -VAR_0;

 VAR_5 = VAR_4[4];
 VAR_7 = (VAR_5 >> 2);
 VAR_6 = VAR_4[3];
 if (VAR_6 == 0)

  return 0;


 *VAR_2 = VAR_7;
 *VAR_3 = VAR_7;
 return 1;
}
