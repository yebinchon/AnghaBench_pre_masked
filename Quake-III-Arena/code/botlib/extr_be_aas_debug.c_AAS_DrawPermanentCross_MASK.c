
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_2__ {int (* DebugLineCreate ) () ;int (* DebugLineShow ) (int,float*,float*,int) ;} ;


 int FUNC_0 (float*,float*,int) ;
 int FUNC_1 (float*,float*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int,float*,float*,int) ;

void FUNC_4(vec3_t VAR_1, float VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 vec3_t VAR_6, VAR_7;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
 {
  FUNC_1(VAR_1, VAR_6);
  VAR_6[VAR_4] += VAR_2;
  FUNC_1(VAR_1, VAR_7);
  VAR_7[VAR_4] -= VAR_2;
  FUNC_0(VAR_6, VAR_7, VAR_3);
  VAR_5 = VAR_0.DebugLineCreate();
  VAR_0.DebugLineShow(VAR_5, VAR_6, VAR_7, VAR_3);
 }
}
