
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutByteContext ;


 int FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_1(PutByteContext *VAR_0, int VAR_1, unsigned int VAR_2)
{
    int VAR_3 = 3;
    FUNC_0(VAR_0, VAR_1);
    for (; VAR_3 > 0; VAR_3--)
        FUNC_0(VAR_0, (VAR_2 >> (7 * VAR_3)) | 0x80);
    FUNC_0(VAR_0, VAR_2 & 0x7F);
}
