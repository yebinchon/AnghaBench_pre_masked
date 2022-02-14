
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;
struct zsBssInfo {int flag; int tick; struct zsBssInfo* next; } ;
struct TYPE_4__ {scalar_t__ bssCount; struct zsBssInfo* head; } ;
struct TYPE_5__ {TYPE_1__ bssList; } ;
struct TYPE_6__ {int tick; TYPE_2__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int *,struct zsBssInfo*) ;
 int FUNC_1 (int *,struct zsBssInfo*) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_4, u16_t VAR_5)
{
    struct zsBssInfo* VAR_6;
    struct zsBssInfo* VAR_7;
    u8_t VAR_8, VAR_9;

    FUNC_2(VAR_4);

    VAR_6 = VAR_3->sta.bssList.head;
    VAR_9 = VAR_3->sta.bssList.bssCount;

    for( VAR_8=0; VAR_8<VAR_9; VAR_8++ )
    {
        if (VAR_5 == 1)
        {
            VAR_7 = VAR_6->next;
            FUNC_1(VAR_4, VAR_6);
            FUNC_0(VAR_4, VAR_6);
            VAR_6 = VAR_7;
        }
        else
        {
            if ( VAR_6->flag & VAR_1 )
            {
                VAR_6->flag &= ~VAR_1;
                VAR_6 = VAR_6->next;
            }
            else
            {

                if ((VAR_3->tick - VAR_6->tick) > (20000/VAR_2))
                {
                    VAR_7 = VAR_6->next;
                    FUNC_1(VAR_4, VAR_6);
                    FUNC_0(VAR_4, VAR_6);
                    VAR_6 = VAR_7;
                }
                else
                {
                    VAR_6 = VAR_6->next;
                }
            }
        }
    }
    return;
}
