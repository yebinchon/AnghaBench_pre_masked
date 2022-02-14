
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int pixel4 ;
typedef int pixel ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, ptrdiff_t VAR_1,
                         const uint8_t *VAR_2, const uint8_t *VAR_3)
{
    pixel *VAR_4 = (pixel *) VAR_0;
    const pixel *VAR_5 = (const pixel *) VAR_3;
    pixel4 VAR_6 = FUNC_0(VAR_5 + 0);
    pixel4 VAR_7 = FUNC_0(VAR_5 + 4);
    pixel4 VAR_8 = FUNC_0(VAR_5 + 8);
    pixel4 VAR_9 = FUNC_0(VAR_5 + 12);
    pixel4 VAR_10 = FUNC_0(VAR_5 + 16);
    pixel4 VAR_11 = FUNC_0(VAR_5 + 20);
    pixel4 VAR_12 = FUNC_0(VAR_5 + 24);
    pixel4 VAR_13 = FUNC_0(VAR_5 + 28);
    int VAR_14;

    VAR_1 /= sizeof(pixel);
    for (VAR_14 = 0; VAR_14 < 32; VAR_14++) {
        FUNC_1(VAR_4 + 0, VAR_6);
        FUNC_1(VAR_4 + 4, VAR_7);
        FUNC_1(VAR_4 + 8, VAR_8);
        FUNC_1(VAR_4 + 12, VAR_9);
        FUNC_1(VAR_4 + 16, VAR_10);
        FUNC_1(VAR_4 + 20, VAR_11);
        FUNC_1(VAR_4 + 24, VAR_12);
        FUNC_1(VAR_4 + 28, VAR_13);
        VAR_4 += VAR_1;
    }
}
