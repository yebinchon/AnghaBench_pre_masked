
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* prev; } ;
typedef TYPE_2__ png_store_buffer ;
struct TYPE_7__ {size_t readpos; int pread; TYPE_2__* next; TYPE_1__* current; } ;
typedef TYPE_3__ png_store ;
struct TYPE_5__ {size_t datacount; TYPE_2__ data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static size_t
FUNC_1(png_store *VAR_1)
{
   if (VAR_1->current != ((void*)0) && VAR_1->next != ((void*)0))
   {
      png_store_buffer *VAR_2 = &VAR_1->current->data;
      size_t VAR_3 = VAR_1->current->datacount;

      while (VAR_2 != VAR_1->next && VAR_2 != ((void*)0))
      {
         VAR_2 = VAR_2->prev;
         VAR_3 += VAR_0;
      }

      if (VAR_2 != VAR_1->next)
         FUNC_0(VAR_1->pread, "buffer read error");

      if (VAR_3 > VAR_1->readpos)
         return VAR_3 - VAR_1->readpos;
   }

   return 0;
}
