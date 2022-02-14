
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isdn_ppp_compressor {TYPE_2__* next; TYPE_1__* prev; } ;
struct TYPE_4__ {TYPE_1__* prev; } ;
struct TYPE_3__ {TYPE_2__* next; } ;


 TYPE_2__* VAR_0 ;

int FUNC_0(struct isdn_ppp_compressor *VAR_1)
{
 if(VAR_1->prev)
  VAR_1->prev->next = VAR_1->next;
 else
  VAR_0 = VAR_1->next;
 if(VAR_1->next)
  VAR_1->next->prev = VAR_1->prev;
 VAR_1->prev = VAR_1->next = ((void*)0);
 return 0;
}
