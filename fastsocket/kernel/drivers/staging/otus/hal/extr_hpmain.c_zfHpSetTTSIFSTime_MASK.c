
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_1, u8_t VAR_2)
{
    u32_t VAR_3 = 0;
    FUNC_2(VAR_1);

    VAR_2 &= 0x3f;
    VAR_3 = 0x14400b | (((u32_t)VAR_2)<<24);

    FUNC_0(VAR_1, VAR_0, VAR_3);
    FUNC_1(VAR_1);
}
