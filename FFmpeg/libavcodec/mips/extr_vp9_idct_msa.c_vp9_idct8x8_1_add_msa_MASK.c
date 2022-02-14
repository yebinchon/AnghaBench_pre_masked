
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int uint8_t ;
typedef int int32_t ;
typedef int int16_t ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(int16_t *VAR_2, uint8_t *VAR_3,
                                  int32_t VAR_4)
{
    int16_t VAR_5;
    int32_t VAR_6;
    v8i16 VAR_7;

    VAR_5 = FUNC_0((VAR_2[0] * VAR_1), VAR_0);
    VAR_5 = FUNC_0((VAR_5 * VAR_1), VAR_0);
    VAR_6 = FUNC_0(VAR_5, 5);
    VAR_7 = FUNC_2(VAR_6);
    VAR_2[0] = 0;

    FUNC_1(VAR_3, VAR_4, VAR_7, VAR_7, VAR_7, VAR_7);
    VAR_3 += (4 * VAR_4);
    FUNC_1(VAR_3, VAR_4, VAR_7, VAR_7, VAR_7, VAR_7);
}
