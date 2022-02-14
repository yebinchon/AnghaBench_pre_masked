
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Jpeg2000EncoderContext ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(Jpeg2000EncoderContext *VAR_0, int VAR_1)
{
    if (VAR_1 == 1)
        FUNC_0(VAR_0, 0, 1);
    else if (VAR_1 == 2)
        FUNC_0(VAR_0, 2, 2);
    else if (VAR_1 <= 5)
        FUNC_0(VAR_0, 0xc | (VAR_1-3), 4);
    else if (VAR_1 <= 36)
        FUNC_0(VAR_0, 0x1e0 | (VAR_1-6), 9);
    else
        FUNC_0(VAR_0, 0xff80 | (VAR_1-37), 16);
}
