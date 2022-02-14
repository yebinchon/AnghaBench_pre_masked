
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* premultiplied_coeffs ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__** VAR_2 ;

__attribute__((used)) static void FUNC_0(premultiplied_coeffs *VAR_3)
{
    int VAR_4, VAR_5, VAR_6;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        int VAR_7 = 0;
        int32_t VAR_8 = 0;
        for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
            for (VAR_6 = VAR_5; VAR_6 < VAR_0; VAR_6++) {
                VAR_8 = (int32_t)VAR_2[VAR_4][VAR_5] * (int32_t)VAR_2[VAR_4][VAR_6];
                if (VAR_5 != VAR_6)
                    VAR_8 *= 2;
                (*VAR_3)[VAR_7++] = VAR_8;
             }
        }
        VAR_3++;
    }
}
