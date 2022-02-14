
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* prev; } ;
typedef TYPE_2__ png_store_buffer ;
struct TYPE_7__ {int pread; scalar_t__ readpos; TYPE_2__* next; TYPE_1__* current; } ;
typedef TYPE_3__ png_store ;
struct TYPE_5__ {TYPE_2__ data; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(png_store *VAR_0)
{
   png_store_buffer *VAR_1 = VAR_0->next;
   png_store_buffer *VAR_2 = &VAR_0->current->data;
   if (VAR_1 != VAR_2)
   {
      while (VAR_2 != ((void*)0) && VAR_2->prev != VAR_1)
         VAR_2 = VAR_2->prev;

      if (VAR_2 != ((void*)0))
      {
         VAR_0->next = VAR_2;
         VAR_0->readpos = 0;
         return 1;
      }

      FUNC_0(VAR_0->pread, "buffer lost");
   }

   return 0;
}
