
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int pixel4 ;
typedef int pixel ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, ptrdiff_t VAR_1,
                         const uint8_t *VAR_2, const uint8_t *VAR_3)
{
    pixel *VAR_4 = (pixel *) VAR_0;
    const pixel *VAR_5 = (const pixel *) VAR_3;
    pixel4 VAR_6 = FUNC_1((VAR_5[0] + VAR_5[1] + VAR_5[2] + VAR_5[3] + 2) >> 2);

    VAR_1 /= sizeof(pixel);
    FUNC_0(VAR_4 + VAR_1 * 0, VAR_6);
    FUNC_0(VAR_4 + VAR_1 * 1, VAR_6);
    FUNC_0(VAR_4 + VAR_1 * 2, VAR_6);
    FUNC_0(VAR_4 + VAR_1 * 3, VAR_6);
}
