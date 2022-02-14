
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ scale; struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__ vissprite_t ;
typedef scalar_t__ fixed_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__ VAR_3 ;

void FUNC_0 (void)
{
    int VAR_4;
    int VAR_5;
    vissprite_t* VAR_6;
    vissprite_t* VAR_7;
    vissprite_t VAR_8;
    fixed_t VAR_9;

    VAR_5 = VAR_1 - VAR_2;

    VAR_8.next = VAR_8.prev = &VAR_8;

    if (!VAR_5)
 return;

    for (VAR_6=VAR_2 ; VAR_6<VAR_1 ; VAR_6++)
    {
 VAR_6->next = VAR_6+1;
 VAR_6->prev = VAR_6-1;
    }

    VAR_2[0].prev = &VAR_8;
    VAR_8.next = &VAR_2[0];
    (VAR_1-1)->next = &VAR_8;
    VAR_8.prev = VAR_1-1;



    VAR_3.next = VAR_3.prev = &VAR_3;
    for (VAR_4=0 ; VAR_4<VAR_5 ; VAR_4++)
    {
 VAR_9 = VAR_0;
 for (VAR_6=VAR_8.next ; VAR_6!= &VAR_8 ; VAR_6=VAR_6->next)
 {
     if (VAR_6->scale < VAR_9)
     {
  VAR_9 = VAR_6->scale;
  VAR_7 = VAR_6;
     }
 }
 VAR_7->next->prev = VAR_7->prev;
 VAR_7->prev->next = VAR_7->next;
 VAR_7->next = &VAR_3;
 VAR_7->prev = VAR_3.prev;
 VAR_3.prev->next = VAR_7;
 VAR_3.prev = VAR_7;
    }
}
