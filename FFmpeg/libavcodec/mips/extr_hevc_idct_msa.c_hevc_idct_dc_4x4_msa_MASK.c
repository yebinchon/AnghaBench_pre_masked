
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int16_t *VAR_0)
{
    int32_t VAR_1;
    v8i16 VAR_2;

    VAR_1 = (VAR_0[0] + 1) >> 1;
    VAR_1 = (VAR_1 + 32) >> 6;
    VAR_2 = FUNC_1(VAR_1);

    FUNC_0(VAR_2, VAR_2, VAR_0, 8);
}
