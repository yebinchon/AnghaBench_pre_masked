
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct TYPE_2__* next; int * data; } ;


 TYPE_1__* VAR_0 ;

u8* FUNC_0()
{
 u8 *VAR_1 = ((void*)0);

 if(VAR_0) {
  VAR_1 = VAR_0->data;
  VAR_0 = VAR_0->next;
 }

 return VAR_1;
}
