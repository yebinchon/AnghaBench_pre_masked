
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct zsBssList {int bssCount; struct zsBssInfo* head; } ;
struct zsBssInfo {struct zsBssInfo* next; } ;
struct TYPE_4__ {int bssCount; struct zsBssInfo* head; } ;
struct TYPE_5__ {TYPE_1__ bssList; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(zdev_t* VAR_1, struct zsBssList* VAR_2)
{
    struct zsBssInfo* VAR_3;
    struct zsBssInfo* VAR_4;
    u8_t VAR_5;
    u8_t* VAR_6;
    u8_t* VAR_7;

    FUNC_5(VAR_1);

    FUNC_3();

    VAR_6 = (u8_t*) VAR_2;
    VAR_7 = VAR_6 + sizeof(struct zsBssList);
    VAR_2->head = (struct zsBssInfo*) VAR_7;

    FUNC_4(VAR_1);

    VAR_3 = VAR_0->sta.bssList.head;
    VAR_4 = (struct zsBssInfo*) VAR_7;
    VAR_2->bssCount = VAR_0->sta.bssList.bssCount;

    for( VAR_5=0; VAR_5<VAR_0->sta.bssList.bssCount; VAR_5++ )
    {
        FUNC_0((u8_t*)VAR_4, (u8_t*)VAR_3,
                sizeof(struct zsBssInfo));

        if ( VAR_3->next != ((void*)0) )
        {
            VAR_3 = VAR_3->next;
            VAR_4->next = VAR_4 + 1;
            VAR_4++;
        }
        else
        {
            FUNC_2(VAR_5==(VAR_0->sta.bssList.bssCount-1));
        }
    }

    FUNC_6(VAR_1);

    FUNC_1(VAR_1);
}
