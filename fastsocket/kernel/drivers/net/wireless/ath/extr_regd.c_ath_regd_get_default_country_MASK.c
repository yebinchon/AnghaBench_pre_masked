
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct country_code_to_enum_rd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct country_code_to_enum_rd* FUNC_0 (int) ;

__attribute__((used)) static u16 FUNC_1(u16 VAR_2)
{
 if (VAR_2 & VAR_0) {
  struct country_code_to_enum_rd *VAR_3 = ((void*)0);
  u16 VAR_4 = VAR_2 & ~VAR_0;

  VAR_3 = FUNC_0(VAR_4);
  if (VAR_3 != ((void*)0))
   return VAR_4;
 }

 return VAR_1;
}
