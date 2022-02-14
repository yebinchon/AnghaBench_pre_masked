
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 char const** VAR_3 ;

__attribute__((used)) static
const char *FUNC_0(unsigned VAR_4)
{
 if ((VAR_4 >= VAR_0 && VAR_4 <= VAR_2)
     || VAR_4 == VAR_1)
  return VAR_3[VAR_4];
 return "unknown category";
}
