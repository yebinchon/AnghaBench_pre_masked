
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
struct zsBssInfo {int dummy; } ;
struct TYPE_3__ {int ** bssInfoArray; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t* VAR_2)
{
    u8_t VAR_3;
    FUNC_3(VAR_2);

    FUNC_0(VAR_2, 1);

    for( VAR_3=0; VAR_3< VAR_0; VAR_3++ )
    {
        if (VAR_1->sta.bssInfoArray[VAR_3] != ((void*)0))
        {
            FUNC_1(VAR_2, VAR_1->sta.bssInfoArray[VAR_3], sizeof(struct zsBssInfo));
        }
        else
        {
            FUNC_2(0);
        }
    }
    return;
}
