
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {int counter; } ;
struct TYPE_4__ {int supportMode; TYPE_1__ ledStruct; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_3)
{
    FUNC_1(VAR_3);
    switch(VAR_2->ledStruct.counter % 16)
    {
        case 0:
            if(VAR_2->supportMode & VAR_0)
            {
                FUNC_0(VAR_3, 0, 1);
                FUNC_0(VAR_3, 1, 0);
            }
            else
            {
                FUNC_0(VAR_3, 1, 1);
                FUNC_0(VAR_3, 0, 0);
            }
            break;

        case 8:
            if(VAR_2->supportMode & VAR_1)
            {
                FUNC_0(VAR_3, 1, 1);
                FUNC_0(VAR_3, 0, 0);
            }
            else
            {
                FUNC_0(VAR_3, 0, 1);
                FUNC_0(VAR_3, 1, 0);
            }
            break;

        default:
            FUNC_0(VAR_3, 0, 0);
            FUNC_0(VAR_3, 1, 0);
            break;
    }
}
