
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vec3_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2 (vec3_t VAR_1)
{
 int VAR_2;

 for (VAR_2=0 ; VAR_2<3 ; VAR_2++)
 {
  if ( FUNC_1(VAR_1[VAR_2] - 1) < VAR_0 )
  {
   FUNC_0 (VAR_1);
   VAR_1[VAR_2] = 1;
   break;
  }
  if ( FUNC_1(VAR_1[VAR_2] - -1) < VAR_0 )
  {
   FUNC_0 (VAR_1);
   VAR_1[VAR_2] = -1;
   break;
  }
 }
}
