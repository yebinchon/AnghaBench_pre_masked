
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(int VAR_4)
{
 u8 VAR_5 = VAR_4 >> 3;
 u8 VAR_6 = VAR_4 & 0x7;
 u8 VAR_7 = 0;
 int VAR_8 = 0;

 if (FUNC_2((VAR_4 >= VAR_2)
  || !(VAR_3 & FUNC_0(VAR_4))))
  return -VAR_0;

 VAR_7 = VAR_1 + VAR_5;
 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 > 0)
  VAR_8 = (VAR_8 >> VAR_6) & 0x1;

 return VAR_8;
}
