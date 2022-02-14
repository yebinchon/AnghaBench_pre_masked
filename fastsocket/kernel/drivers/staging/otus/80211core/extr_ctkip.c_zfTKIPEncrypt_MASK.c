
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;


 int FUNC_0 (int *,int *,int*,int ,int ,int,int*,int*) ;

void FUNC_1(zdev_t *VAR_0, zbuf_t *VAR_1, u8_t *VAR_2, u16_t VAR_3, u16_t VAR_4, u8_t VAR_5, u8_t* VAR_6, u32_t* VAR_7)
{
    u8_t VAR_8[3];

    VAR_8[0] = VAR_6[0];
    VAR_8[1] = VAR_6[1];
    VAR_8[2] = VAR_6[2];

    VAR_5 -= 3;

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6[3], VAR_8);
}
