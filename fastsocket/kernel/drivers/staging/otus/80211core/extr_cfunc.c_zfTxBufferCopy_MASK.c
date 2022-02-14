
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef scalar_t__ u16_t ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *,int *,scalar_t__,int ) ;

void FUNC_2(zdev_t*VAR_0, zbuf_t* VAR_1, zbuf_t* VAR_2,
                    u16_t VAR_3, u16_t VAR_4, u16_t VAR_5)
{
    u16_t VAR_6;

    for(VAR_6=0; VAR_6<VAR_5; VAR_6++)
    {
        FUNC_1(VAR_0, VAR_1, VAR_3+VAR_6,
                          FUNC_0(VAR_0, VAR_2, VAR_4+VAR_6));
    }
}
