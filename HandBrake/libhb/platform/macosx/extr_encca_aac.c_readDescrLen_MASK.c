
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt8 ;



__attribute__((used)) static int FUNC_0(UInt8 **VAR_0)
{
    int VAR_1 = 0;
    int VAR_2 = 4;
    while (VAR_2--)
    {
        int VAR_3 = *(*VAR_0)++;
        VAR_1 = (VAR_1 << 7) | (VAR_3 & 0x7f);
        if (!(VAR_3 & 0x80))
            break;
    }
    return VAR_1;
}
