
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int) ;
 int FUNC_4 (int *,int *,int ,scalar_t__) ;

u16_t FUNC_5(zdev_t* VAR_1, zbuf_t* VAR_2, u16_t VAR_3)
{
    u8_t VAR_4;
    u8_t VAR_5;

    FUNC_2(VAR_1);


    FUNC_3(VAR_1, VAR_2, VAR_3++, VAR_0);


    FUNC_3(VAR_1, VAR_2, VAR_3++, 2);

    VAR_5 = (u8_t)(FUNC_1(VAR_1)/2);
    VAR_4 = (u8_t)(FUNC_0(VAR_1)/2);


    FUNC_4(VAR_1, VAR_2, VAR_3++, VAR_5);


    FUNC_4(VAR_1, VAR_2, VAR_3++, VAR_4);

    return VAR_3;
}
