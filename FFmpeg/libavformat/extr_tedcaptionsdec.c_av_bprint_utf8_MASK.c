
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVBPrint ;


 int FUNC_0 (int *,unsigned int,int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(AVBPrint *VAR_0, unsigned VAR_1)
{
    int VAR_2, VAR_3;

    if (VAR_1 <= 0x7F) {
        FUNC_0(VAR_0, VAR_1, 1);
        return;
    }
    VAR_2 = (FUNC_1(VAR_1) - 2) / 5;
    FUNC_0(VAR_0, (VAR_1 >> (VAR_2 * 6)) | ((0xFF80 >> VAR_2) & 0xFF), 1);
    for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--)
        FUNC_0(VAR_0, ((VAR_1 >> (VAR_3 * 6)) & 0x3F) | 0x80, 1);
}
