
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_3__ {int uniTail; int * uniArray; } ;
struct TYPE_4__ {TYPE_1__ ap; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;

u8_t FUNC_2(zdev_t* VAR_2, u16_t VAR_3, u16_t* VAR_4)
{
    u16_t VAR_5[3];
    u16_t VAR_6;
    u8_t VAR_7 = 0;
    FUNC_1(VAR_2);

    VAR_1->ap.uniTail = (VAR_1->ap.uniTail-1) & (VAR_0-1);
    while (VAR_3 != VAR_1->ap.uniTail)
    {
        VAR_6 = (VAR_3 + 1) & (VAR_0 - 1);
        VAR_1->ap.uniArray[VAR_3] = VAR_1->ap.uniArray[VAR_6];


        VAR_5[0] = FUNC_0(VAR_2, VAR_1->ap.uniArray[VAR_3], 0);
        VAR_5[1] = FUNC_0(VAR_2, VAR_1->ap.uniArray[VAR_3], 2);
        VAR_5[2] = FUNC_0(VAR_2, VAR_1->ap.uniArray[VAR_3], 4);
        if ((VAR_4[0] == VAR_5[0]) && (VAR_4[1] == VAR_5[1])
                && (VAR_4[2] == VAR_5[2]))
        {
            VAR_7 = 0x20;
        }

        VAR_3 = VAR_6;
    }
    return VAR_7;
}
