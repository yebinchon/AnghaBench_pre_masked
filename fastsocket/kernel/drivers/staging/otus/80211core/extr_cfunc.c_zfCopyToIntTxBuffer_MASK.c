
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef size_t u16_t ;


 int FUNC_0 (int *,int *,size_t,int ) ;

void FUNC_1(zdev_t* VAR_0, zbuf_t* VAR_1, u8_t* VAR_2,
                         u16_t VAR_3, u16_t VAR_4)
{
    u16_t VAR_5;

    for(VAR_5=0; VAR_5<VAR_4;VAR_5++)
    {
        FUNC_0(VAR_0, VAR_1, VAR_3+VAR_5, VAR_2[VAR_5]);
    }
}
