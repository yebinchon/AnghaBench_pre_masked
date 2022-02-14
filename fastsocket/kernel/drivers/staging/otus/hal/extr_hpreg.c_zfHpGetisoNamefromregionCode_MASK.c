
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u16_t ;
struct TYPE_3__ {size_t regDmnEnum; char const* isoName; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

const char* FUNC_1(zdev_t* VAR_1, u16_t VAR_2)
{
    u16_t VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
    {
        if (VAR_0[VAR_3].regDmnEnum == VAR_2)
        {
            return VAR_0[VAR_3].isoName;
        }
    }

    return VAR_0[0].isoName;
}
