
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fit_type_map_t {int type; char const* name; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 struct fit_type_map_t* VAR_3 ;

__attribute__((used)) static const char *FUNC_0(unsigned char VAR_4)
{
 struct fit_type_map_t const *VAR_5;

 for (VAR_5 = VAR_3; VAR_5->type != 0xff; VAR_5++)
  if (VAR_4 == VAR_5->type)
   return VAR_5->name;

 if ((VAR_4 > VAR_0) && (VAR_4 < VAR_2))
  return "OEM type";
 if ((VAR_4 > VAR_1) && (VAR_4 < VAR_0))
  return "Reserved";

 return "Unknown type";
}
