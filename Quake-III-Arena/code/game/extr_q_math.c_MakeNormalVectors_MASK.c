
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vec3_t ;


 int FUNC_0 (int *,int * const,int *) ;
 float FUNC_1 (int *,int * const) ;
 int FUNC_2 (int *,float,int * const,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4( const vec3_t VAR_0, vec3_t VAR_1, vec3_t VAR_2) {
 float VAR_3;



 VAR_1[1] = -VAR_0[0];
 VAR_1[2] = VAR_0[1];
 VAR_1[0] = VAR_0[2];

 VAR_3 = FUNC_1 (VAR_1, VAR_0);
 FUNC_2 (VAR_1, -VAR_3, VAR_0, VAR_1);
 FUNC_3 (VAR_1);
 FUNC_0 (VAR_1, VAR_0, VAR_2);
}
