
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(const u16 *VAR_4)
{
 u8 VAR_5;
 u8 VAR_6;
 u16 VAR_7;

 VAR_5 = FUNC_0(VAR_4);
 VAR_7 = VAR_4[VAR_1 - 1] & VAR_2;
 VAR_6 = VAR_7 >> VAR_3;
 if (VAR_5 != VAR_6)
  return -VAR_0;

 return 0;
}
