
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (int ,float) ;
 int VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 int FUNC_1 (int) ;
 float FUNC_2 (int,int,int) ;
 int FUNC_3 (float) ;

__attribute__((used)) static void FUNC_4(float VAR_3, float VAR_4, float *VAR_5, float *VAR_6)
{
    FUNC_1(VAR_3 >= -1.f && VAR_3 <= 1.f);
    FUNC_1(VAR_4 >= 0.f && VAR_4 <= VAR_1);
    *VAR_5 = FUNC_2(VAR_3+VAR_3*FUNC_0(0, VAR_4*VAR_4-VAR_2), -1, 1);
    *VAR_6 = FUNC_2(FUNC_3(VAR_3*VAR_2+VAR_1)*FUNC_3(VAR_2-VAR_4/VAR_1)*VAR_0+1, -1, 1);
}
