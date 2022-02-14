
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
typedef int u16_t ;
struct TYPE_3__ {int counter; } ;
struct TYPE_4__ {TYPE_1__ ledStruct; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_1, u16_t VAR_2)
{
    u32_t VAR_3, VAR_4, VAR_5;
    FUNC_1(VAR_1);
    if(!VAR_2)
        VAR_3 = 2, VAR_4 = 6;
    else
        VAR_3 = 6, VAR_4 = 2;

    if ((VAR_3 + VAR_4) != 0)
    {
        VAR_5 = VAR_0->ledStruct.counter % (VAR_3+VAR_4);
       if (VAR_5 < VAR_3)
        {
            FUNC_0(VAR_1, 0, 1);
            FUNC_0(VAR_1, 1, 1);
        }
        else
        {
            FUNC_0(VAR_1, 0, 0);
            FUNC_0(VAR_1, 1, 0);
        }
    }
}
