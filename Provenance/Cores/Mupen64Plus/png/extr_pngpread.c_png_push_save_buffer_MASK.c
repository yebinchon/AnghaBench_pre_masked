
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef scalar_t__ png_size_t ;
typedef int * png_bytep ;
struct TYPE_6__ {scalar_t__ save_buffer_size; scalar_t__ current_buffer_size; scalar_t__ save_buffer_max; scalar_t__ buffer_size; int * save_buffer; int * save_buffer_ptr; int * current_buffer_ptr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;

void
FUNC_4(png_structrp VAR_1)
{
   if (VAR_1->save_buffer_size != 0)
   {
      if (VAR_1->save_buffer_ptr != VAR_1->save_buffer)
      {
         png_size_t VAR_2, VAR_3;
         png_bytep VAR_4;
         png_bytep VAR_5;

         VAR_3 = VAR_1->save_buffer_size;
         for (VAR_2 = 0, VAR_4 = VAR_1->save_buffer_ptr, VAR_5 = VAR_1->save_buffer;
             VAR_2 < VAR_3; VAR_2++, VAR_4++, VAR_5++)
         {
            *VAR_5 = *VAR_4;
         }
      }
   }
   if (VAR_1->save_buffer_size + VAR_1->current_buffer_size >
       VAR_1->save_buffer_max)
   {
      png_size_t VAR_6;
      png_bytep VAR_7;

      if (VAR_1->save_buffer_size > VAR_0 -
          (VAR_1->current_buffer_size + 256))
      {
         FUNC_1(VAR_1, "Potential overflow of save_buffer");
      }

      VAR_6 = VAR_1->save_buffer_size + VAR_1->current_buffer_size + 256;
      VAR_7 = VAR_1->save_buffer;
      VAR_1->save_buffer = (png_bytep)FUNC_3(VAR_1,
          (png_size_t)VAR_6);

      if (VAR_1->save_buffer == ((void*)0))
      {
         FUNC_2(VAR_1, VAR_7);
         FUNC_1(VAR_1, "Insufficient memory for save_buffer");
      }

      if (VAR_7)
         FUNC_0(VAR_1->save_buffer, VAR_7, VAR_1->save_buffer_size);
      else if (VAR_1->save_buffer_size)
         FUNC_1(VAR_1, "save_buffer error");
      FUNC_2(VAR_1, VAR_7);
      VAR_1->save_buffer_max = VAR_6;
   }
   if (VAR_1->current_buffer_size)
   {
      FUNC_0(VAR_1->save_buffer + VAR_1->save_buffer_size,
         VAR_1->current_buffer_ptr, VAR_1->current_buffer_size);
      VAR_1->save_buffer_size += VAR_1->current_buffer_size;
      VAR_1->current_buffer_size = 0;
   }
   VAR_1->save_buffer_ptr = VAR_1->save_buffer;
   VAR_1->buffer_size = 0;
}
