
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec_t ;
typedef float* vec3_t ;


 int FUNC_0 (float,float) ;
 float FUNC_1 (int ) ;
 int FUNC_2 (float) ;
 float FUNC_3 (int ) ;
 float FUNC_4 (float) ;

void FUNC_5(vec3_t VAR_0,vec3_t VAR_1,vec3_t VAR_2)
{
 vec_t VAR_3,VAR_4;

 if (FUNC_2(VAR_0[0])<1e-6)
  VAR_0[0]=0.0f;
 if (FUNC_2(VAR_0[1])<1e-6)
  VAR_0[1]=0.0f;
 if (FUNC_2(VAR_0[2])<1e-6)
  VAR_0[2]=0.0f;

 VAR_3=-FUNC_0(VAR_0[2],FUNC_4(VAR_0[1]*VAR_0[1]+VAR_0[0]*VAR_0[0]));
 VAR_4=FUNC_0(VAR_0[1],VAR_0[0]);

 VAR_1[0]=-FUNC_3(VAR_4);
 VAR_1[1]=FUNC_1(VAR_4);
 VAR_1[2]=0;

 VAR_2[0]=-FUNC_3(VAR_3)*FUNC_1(VAR_4);
 VAR_2[1]=-FUNC_3(VAR_3)*FUNC_3(VAR_4);
 VAR_2[2]=-FUNC_1(VAR_3);
}
