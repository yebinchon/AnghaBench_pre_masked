
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,size_t) ;

__attribute__((used)) static int FUNC_1(const u16 *VAR_3, size_t VAR_4)
{
 u8 VAR_5;
 u8 VAR_6;
 u16 VAR_7;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 VAR_7 = VAR_3[VAR_4 - 1] & VAR_1;
 VAR_6 = VAR_7 >> VAR_2;
 if (VAR_5 != VAR_6)
  return -VAR_0;

 return 0;
}
