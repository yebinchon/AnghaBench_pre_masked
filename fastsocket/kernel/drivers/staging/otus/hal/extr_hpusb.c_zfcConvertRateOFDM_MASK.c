
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u32_t ;


 int FUNC_0 (int *,int *,int ) ;

u32_t FUNC_1(zdev_t* VAR_0, zbuf_t* VAR_1)
{

    u32_t VAR_2 = 0;

    switch(FUNC_0(VAR_0, VAR_1, 0)& 0xf)
    {
        case 0xb:
            VAR_2 = 0x4;
            break;
        case 0xf:
            VAR_2 = 0x5;
            break;
        case 0xa:
            VAR_2 = 0x6;
            break;
        case 0xe:
            VAR_2 = 0x7;
            break;
        case 0x9:
            VAR_2 = 0x8;
            break;
        case 0xd:
            VAR_2 = 0x9;
            break;
        case 0x8:
            VAR_2 = 0xa;
            break;
        case 0xc:
            VAR_2 = 0xb;
            break;
    }
    return VAR_2;
}
