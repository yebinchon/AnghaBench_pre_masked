
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int) ;

u8_t FUNC_2(zdev_t* VAR_1, zbuf_t* VAR_2)
{
    u8_t VAR_3;
    u8_t VAR_4;

    VAR_4 = FUNC_1(VAR_1, VAR_2, FUNC_0(VAR_1, VAR_2)-1);


    if ((VAR_4 & 0x30) == 0x00 || (VAR_4 & 0x30) == 0x20)
    {
        VAR_3 = FUNC_1(VAR_1, VAR_2, 12);
    }
    else
    {
        VAR_3 = FUNC_1(VAR_1, VAR_2, 0);
    }

    if((VAR_3 & 0xf) == VAR_0)
        return 1;
    else
        return 0;
}
