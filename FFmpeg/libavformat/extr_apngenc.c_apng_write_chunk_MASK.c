
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int AVIOContext ;
typedef int AVCRC ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int const*) ;
 size_t FUNC_2 (int const*,size_t,int *,size_t) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *,int *,size_t) ;

__attribute__((used)) static void FUNC_6(AVIOContext *VAR_1, uint32_t VAR_2,
                             uint8_t *VAR_3, size_t VAR_4)
{
    const AVCRC *VAR_5 = FUNC_3(VAR_0);
    uint32_t VAR_6 = ~0U;
    uint8_t VAR_7[4];

    FUNC_1(VAR_5);

    FUNC_4(VAR_1, VAR_4);
    FUNC_0(VAR_7, VAR_2);
    VAR_6 = FUNC_2(VAR_5, VAR_6, VAR_7, 4);
    FUNC_4(VAR_1, VAR_2);
    if (VAR_4 > 0) {
        VAR_6 = FUNC_2(VAR_5, VAR_6, VAR_3, VAR_4);
        FUNC_5(VAR_1, VAR_3, VAR_4);
    }
    FUNC_4(VAR_1, ~VAR_6);
}
