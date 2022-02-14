
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int chunk_size; } ;
struct TYPE_7__ {int buffer_size; TYPE_1__ backend_info; int ready_for_data; } ;
typedef TYPE_2__ rsound_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 size_t FUNC_2 (TYPE_2__*,char const*,size_t) ;

size_t FUNC_3( rsound_t *VAR_0, const void* VAR_1, size_t VAR_2)
{
   size_t VAR_3, VAR_4 = 0;
   FUNC_0(VAR_0 != ((void*)0));
   if ( !VAR_0->ready_for_data )
      return 0;

   VAR_3 = (VAR_0->buffer_size - VAR_0->backend_info.chunk_size)/2;



   while ( VAR_4 < VAR_2 )
   {
      size_t VAR_5 = (VAR_2 - VAR_4) > VAR_3 ? VAR_3 : (VAR_2 - VAR_4);
      size_t VAR_6 = FUNC_2(VAR_0, (const char*)VAR_1 + VAR_4, VAR_5);

      if (VAR_6 == 0)
      {
         FUNC_1(VAR_0);
         return 0;
      }
      VAR_4 += VAR_6;
   }
   return VAR_4;
}
