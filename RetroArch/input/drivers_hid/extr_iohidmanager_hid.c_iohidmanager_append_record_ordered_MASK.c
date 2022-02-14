
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ id; struct TYPE_4__* next; } ;
typedef TYPE_1__ apple_input_rec_t ;



__attribute__((used)) static void FUNC_0(apple_input_rec_t **VAR_0, apple_input_rec_t *VAR_1)
{
    apple_input_rec_t *VAR_2 = *VAR_0;
    while (VAR_2 && (VAR_2->id <= VAR_1->id))
    {
       VAR_0 = &VAR_2->next;
       VAR_2 = VAR_2->next;
    }
    VAR_1->next = VAR_2;
    *VAR_0 = VAR_1;
}
