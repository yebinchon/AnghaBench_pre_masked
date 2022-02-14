
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t DOHcode ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 char const** VAR_2 ;

__attribute__((used)) static const char *FUNC_0(DOHcode VAR_3)
{
  if((VAR_3 >= VAR_1) && (VAR_3 <= VAR_0))
    return VAR_2[VAR_3];
  return "bad error code";
}
