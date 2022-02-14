
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
float FUNC_0(float VAR_0, float *VAR_1)
{
 float VAR_2, VAR_3, VAR_4, VAR_5;
 VAR_2 = VAR_1[1];
 VAR_3 = (1.0 / 2.0)*(VAR_1[2] - VAR_1[0]);
 VAR_4 = (VAR_1[0] - (5.0 / 2.0)*VAR_1[1]) + (2.0*VAR_1[2] - (1.0 / 2.0)*VAR_1[3]);
 VAR_5 = (1.0 / 2.0)*(VAR_1[3] - VAR_1[0]) + (3.0 / 2.0)*(VAR_1[1] - VAR_1[2]);
 return ((VAR_5*VAR_0 + VAR_4)*VAR_0 + VAR_3)*VAR_0 + VAR_2;
}
