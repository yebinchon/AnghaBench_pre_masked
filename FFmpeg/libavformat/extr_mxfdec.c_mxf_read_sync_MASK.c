
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(AVIOContext *VAR_0, const uint8_t *VAR_1, unsigned VAR_2)
{
    int VAR_3, VAR_4;
    for (VAR_3 = 0; VAR_3 < VAR_2 && !FUNC_0(VAR_0); VAR_3++) {
        VAR_4 = FUNC_1(VAR_0);
        if (VAR_4 == VAR_1[0])
            VAR_3 = 0;
        else if (VAR_4 != VAR_1[VAR_3])
            VAR_3 = -1;
    }
    return VAR_3 == VAR_2;
}
