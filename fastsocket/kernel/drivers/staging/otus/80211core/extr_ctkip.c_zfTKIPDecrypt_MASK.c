
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int,int*,int*) ;

u16_t FUNC_1(zdev_t *VAR_1, zbuf_t *VAR_2, u16_t VAR_3, u8_t VAR_4, u8_t* VAR_5)
{
    u16_t VAR_6 = VAR_0;
    u8_t VAR_7[3];

    VAR_7[0] = VAR_5[0];
    VAR_7[1] = VAR_5[1];
    VAR_7[2] = VAR_5[2];

    VAR_4 -= 3;

    VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5[3], VAR_7);

    return VAR_6;
}
