
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* current; int * next; } ;
typedef TYPE_2__ png_store ;
struct TYPE_4__ {size_t datacount; int data; } ;


 size_t VAR_0 ;

__attribute__((used)) static size_t
FUNC_0(png_store *VAR_1)
{

   if (VAR_1->next != &VAR_1->current->data)
      return VAR_0;

   return VAR_1->current->datacount;
}
