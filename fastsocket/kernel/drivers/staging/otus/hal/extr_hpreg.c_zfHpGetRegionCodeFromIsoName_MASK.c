
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef size_t u16_t ;
struct TYPE_3__ {size_t regDmnEnum; scalar_t__ isoName; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

u16_t FUNC_2(zdev_t* VAR_2, u8_t *VAR_3)
{
    u16_t VAR_4;
    u16_t VAR_5;


    VAR_5 = VAR_0;

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
    {
        if (FUNC_1((u8_t *)VAR_1[VAR_4].isoName, VAR_3, 2))
        {
            VAR_5 = VAR_1[VAR_4].regDmnEnum;
            break;
        }
    }

    return VAR_5;
}
