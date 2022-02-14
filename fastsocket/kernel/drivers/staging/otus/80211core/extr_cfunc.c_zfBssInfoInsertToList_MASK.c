
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
struct zsBssInfo {struct zsBssInfo* next; } ;
struct TYPE_5__ {scalar_t__ bssCount; struct zsBssInfo* tail; struct zsBssInfo* head; } ;
struct TYPE_4__ {TYPE_2__ bssList; } ;
struct TYPE_6__ {TYPE_1__ sta; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (struct zsBssInfo*) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_1, struct zsBssInfo* VAR_2)
{
    FUNC_1(VAR_1);

    FUNC_0(VAR_2);



    if ( VAR_0->sta.bssList.bssCount == 0 )
    {
        VAR_0->sta.bssList.head = VAR_2;
        VAR_0->sta.bssList.tail = VAR_2;
    }
    else
    {
        VAR_0->sta.bssList.tail->next = VAR_2;
        VAR_0->sta.bssList.tail = VAR_2;
    }

    VAR_2->next = ((void*)0);
    VAR_0->sta.bssList.bssCount++;


}
