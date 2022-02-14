
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {scalar_t__ offset; int status; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_10__ {size_t size; size_t position; size_t mem_size; size_t buffer; scalar_t__ offset; } ;
typedef TYPE_2__ VC_CONTAINER_IO_PRIVATE_CACHE_T ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t,size_t) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 size_t FUNC_3 (TYPE_1__*,TYPE_2__*,int *,size_t) ;

__attribute__((used)) static size_t FUNC_4( VC_CONTAINER_IO_T *VAR_1,
   VC_CONTAINER_IO_PRIVATE_CACHE_T *VAR_2, uint8_t *VAR_3, size_t VAR_4 )
{
   size_t VAR_5 = 0, VAR_6, VAR_7;

   while(VAR_4)
   {
      VAR_6 = VAR_2->size - VAR_2->position;



      if(!VAR_6 && VAR_4 > VAR_2->mem_size)
      {
         VAR_6 = VAR_2->mem_size;
         VAR_7 = FUNC_3( VAR_1, VAR_2, VAR_3 + VAR_5, VAR_6);
         VAR_5 += VAR_7;

         if(VAR_7 != VAR_6)
            goto end;

         VAR_4 -= VAR_6;
         continue;
      }



      if(!VAR_6) VAR_6 = FUNC_2( VAR_1, VAR_2 );
      if(!VAR_6) goto end;


      VAR_1->status = VAR_0;


      if(VAR_6 > VAR_4) VAR_6 = VAR_4;
      FUNC_0(VAR_3 + VAR_5, VAR_2->buffer + VAR_2->position, VAR_6);
      VAR_2->position += VAR_6;
      VAR_5 += VAR_6;
      VAR_4 -= VAR_6;
   }

 end:
   FUNC_1(VAR_2->offset + VAR_2->position == VAR_1->offset + VAR_5);
   return VAR_5;
}
