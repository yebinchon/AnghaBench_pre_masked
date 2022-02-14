
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t count; size_t max_size; TYPE_1__* events; } ;
struct TYPE_4__ {int type; int event; } ;
typedef int EmscriptenKeyboardEvent ;
typedef int EM_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int,int) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int *,int const*,int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static EM_BOOL FUNC_4(int VAR_3,
   const EmscriptenKeyboardEvent *VAR_4, void *VAR_5)
{
   if (VAR_3 == VAR_0)
      return VAR_1;

   if (VAR_2->count >= VAR_2->max_size)
   {
      size_t VAR_6 = FUNC_0(1, VAR_2->max_size << 1);
      VAR_2->events = FUNC_2(VAR_2->events,
         VAR_6 * sizeof(VAR_2->events[0]));
      FUNC_3(VAR_2->events != ((void*)0));
      VAR_2->max_size = VAR_6;
   }

   VAR_2->events[VAR_2->count].type = VAR_3;
   FUNC_1(&VAR_2->events[VAR_2->count].event,
      VAR_4, sizeof(*VAR_4));
   VAR_2->count++;

   return VAR_1;
}
