
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_4__ {int* endpos; } ;
typedef TYPE_1__ bsp_trace_t ;
struct TYPE_5__ {int phys_jumpvel; } ;


 TYPE_1__ FUNC_0 (int*,int *,int *,int*,int,int ) ;
 int FUNC_1 (int*,int*,int*,int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int*,int*,int*) ;
 int FUNC_3 (int*,int*) ;
 double FUNC_4 (int*) ;
 int FUNC_5 (int*,double,int*,int*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*,double,int*) ;
 int FUNC_8 (int*,int*,int*) ;
 size_t VAR_3 ;
 TYPE_2__ VAR_4 ;

float FUNC_9(vec3_t VAR_5, float VAR_6)
{
 vec3_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 float VAR_15, VAR_16, VAR_17;
 vec3_t VAR_18 = {8, 8, -8};
 vec3_t VAR_19 = {-16, -16, -24};
 vec3_t VAR_20 = {16, 16, 32};
 bsp_trace_t VAR_21;


 VAR_13[VAR_1] = 90;
 VAR_13[VAR_3] = 0;
 VAR_13[VAR_2] = 0;

 FUNC_3(VAR_5, VAR_9);
 VAR_9[2] += 8;
 FUNC_1(VAR_13, VAR_11, VAR_12, ((void*)0));
 VAR_9[0] += VAR_11[0] * VAR_18[0] + VAR_12[0] * VAR_18[1];
 VAR_9[1] += VAR_11[1] * VAR_18[0] + VAR_12[1] * VAR_18[1];
 VAR_9[2] += VAR_11[2] * VAR_18[0] + VAR_12[2] * VAR_18[1] + VAR_18[2];

 FUNC_5(VAR_9, 500, VAR_11, VAR_10);

 VAR_21 = FUNC_0(VAR_9, ((void*)0), ((void*)0), VAR_10, 1, VAR_0);

 FUNC_2(VAR_19, VAR_20, VAR_8);
 FUNC_5(VAR_5, 0.5, VAR_8, VAR_8);
 FUNC_8(VAR_21.endpos, VAR_8, VAR_8);

 VAR_17 = VAR_6 - 0.5 * FUNC_4(VAR_8);
 if (VAR_17 < 0) VAR_17 = 0;

 VAR_17 *= 0.5;

 VAR_15 = 200;

 VAR_16 = VAR_17;

 FUNC_8(VAR_5, VAR_21.endpos, VAR_14);
 FUNC_6(VAR_14);

 FUNC_7(VAR_14, 1600.0 * (float)VAR_16 / VAR_15, VAR_7);

 return VAR_7[2] + VAR_4.phys_jumpvel;
}
