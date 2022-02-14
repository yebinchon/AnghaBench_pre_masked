
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static boolean_t
FUNC_0(
 const void *VAR_2,
 const void *VAR_3,
 const void *VAR_4,
 const void *VAR_5)
{
 if (VAR_5 < VAR_4 ||
     VAR_3 < VAR_2) {
  return VAR_0;
 }

 if (VAR_2 < VAR_4 ||
     VAR_3 > VAR_5) {
  return VAR_0;
 }

 return VAR_1;
}
