
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ max; scalar_t__ max_max; scalar_t__ current; scalar_t__ limit; scalar_t__ max_limit; scalar_t__ total; scalar_t__ max_total; int mark; TYPE_3__* list; } ;
typedef TYPE_2__ store_pool ;
struct TYPE_11__ {scalar_t__ size; struct TYPE_11__* next; } ;
typedef TYPE_3__ store_memory ;
struct TYPE_12__ {char* test; char* wname; TYPE_1__* current; TYPE_2__ read_memory_pool; int nerrors; } ;
typedef TYPE_4__ png_store ;
struct TYPE_9__ {char* name; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(png_store *VAR_1, store_pool *VAR_2)
{
   if (VAR_2->list != ((void*)0))
   {
      FUNC_0(VAR_0, "%s: %s %s: memory lost (list follows):\n", VAR_1->test,
         VAR_2 == &VAR_1->read_memory_pool ? "read" : "write",
         VAR_2 == &VAR_1->read_memory_pool ? (VAR_1->current != ((void*)0) ?
            VAR_1->current->name : "unknown file") : VAR_1->wname);
      ++VAR_1->nerrors;

      do
      {
         store_memory *VAR_3 = VAR_2->list;
         VAR_2->list = VAR_3->next;
         VAR_3->next = ((void*)0);

         FUNC_0(VAR_0, "\t%lu bytes @ %p\n",
             (unsigned long)VAR_3->size, (const void*)(VAR_3+1));



         FUNC_1(((void*)0), VAR_2, VAR_3);
      }
      while (VAR_2->list != ((void*)0));
   }


   if (VAR_2->max > VAR_2->max_max) VAR_2->max_max = VAR_2->max;
   VAR_2->max = 0;
   if (VAR_2->current != 0)
      FUNC_0(VAR_0, "%s: %s %s: memory counter mismatch (internal error)\n",
         VAR_1->test, VAR_2 == &VAR_1->read_memory_pool ? "read" : "write",
         VAR_2 == &VAR_1->read_memory_pool ? (VAR_1->current != ((void*)0) ?
            VAR_1->current->name : "unknown file") : VAR_1->wname);
   VAR_2->current = 0;

   if (VAR_2->limit > VAR_2->max_limit)
      VAR_2->max_limit = VAR_2->limit;

   VAR_2->limit = 0;

   if (VAR_2->total > VAR_2->max_total)
      VAR_2->max_total = VAR_2->total;

   VAR_2->total = 0;


   FUNC_2(VAR_2->mark);
}
