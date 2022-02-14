
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef int png_const_bytep ;
struct TYPE_9__ {struct TYPE_9__* next; int output; } ;
typedef TYPE_2__ png_compression_buffer ;
struct TYPE_10__ {scalar_t__ output_len; int output; } ;
typedef TYPE_3__ compression_state ;
struct TYPE_8__ {scalar_t__ zbuffer_size; TYPE_2__* zbuffer_list; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(png_structrp VAR_0, compression_state *VAR_1)
{
   png_uint_32 VAR_2 = VAR_1->output_len;
   png_const_bytep VAR_3 = VAR_1->output;
   png_uint_32 VAR_4 = (sizeof VAR_1->output);
   png_compression_buffer *VAR_5 = VAR_0->zbuffer_list;

   for (;;)
   {
      if (VAR_4 > VAR_2)
         VAR_4 = VAR_2;

      FUNC_1(VAR_0, VAR_3, VAR_4);

      VAR_2 -= VAR_4;

      if (VAR_2 == 0 || VAR_5 == ((void*)0))
         break;

      VAR_4 = VAR_0->zbuffer_size;
      VAR_3 = VAR_5->output;
      VAR_5 = VAR_5->next;
   }


   if (VAR_2 > 0)
      FUNC_0(VAR_0, "error writing ancillary chunked compressed data");
}
