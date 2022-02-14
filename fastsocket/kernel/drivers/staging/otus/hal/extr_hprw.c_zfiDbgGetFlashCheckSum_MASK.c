
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int*,int,int ,int *) ;

u32_t FUNC_1(zdev_t *VAR_3, u32_t VAR_4, u32_t VAR_5)
{
    u32_t VAR_6[(VAR_1/4)];
    u32_t VAR_7;

    VAR_6[0] = 0x00000008 | (VAR_0 << 8);
    VAR_6[1] = VAR_4;
    VAR_6[2] = VAR_5;

    VAR_7 = FUNC_0(VAR_3, VAR_6, 12, VAR_2, ((void*)0));

    return VAR_7;
}
