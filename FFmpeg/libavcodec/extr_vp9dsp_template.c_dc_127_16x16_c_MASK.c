
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int pixel4 ;
typedef int pixel ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_1, ptrdiff_t VAR_2,
                           const uint8_t *VAR_3, const uint8_t *VAR_4)
{
    pixel *VAR_5 = (pixel *) VAR_1;
    pixel4 VAR_6 = FUNC_1((128 << (VAR_0 - 8)) - 1);
    int VAR_7;

    VAR_2 /= sizeof(pixel);
    for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
        FUNC_0(VAR_5 + 0, VAR_6);
        FUNC_0(VAR_5 + 4, VAR_6);
        FUNC_0(VAR_5 + 8, VAR_6);
        FUNC_0(VAR_5 + 12, VAR_6);
        VAR_5 += VAR_2;
    }
}
