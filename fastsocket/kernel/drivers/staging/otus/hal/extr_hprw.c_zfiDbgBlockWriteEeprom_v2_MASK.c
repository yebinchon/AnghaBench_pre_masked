
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u32_t ;
typedef int u16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int,int ,int ) ;

u32_t FUNC_1(zdev_t* VAR_2, u32_t VAR_3, u32_t* VAR_4, u32_t VAR_5)
{
    u32_t VAR_6[16];
    u16_t VAR_7,VAR_8;



    VAR_6[0] = (VAR_5+4) | (VAR_0 << 8);
    VAR_6[1] = VAR_3;

    for (VAR_8=0; VAR_8<(VAR_5/4); VAR_8++)
    {
        VAR_6[2+VAR_8] = *(VAR_4+VAR_8);
    }

    VAR_7 = FUNC_0(VAR_2, VAR_6, (u16_t)(VAR_5+8), VAR_1, 0);

    return VAR_7;
}
