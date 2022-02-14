
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef scalar_t__ png_structp ;
typedef int png_size_t ;
struct TYPE_8__ {scalar_t__ pread; scalar_t__ readpos; TYPE_1__* current; int * next; } ;
struct TYPE_7__ {scalar_t__ buffer_count; scalar_t__ buffer_position; TYPE_3__ this; } ;
typedef TYPE_2__ png_modifier ;
typedef int png_infop ;
typedef int png_byte ;
struct TYPE_6__ {scalar_t__ datacount; int data; } ;


 int FUNC_0 (TYPE_2__*,int *,int) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (scalar_t__,int ,int *,int) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(png_modifier *VAR_0, png_structp VAR_1, png_infop VAR_2)
{
   if (VAR_0->this.pread != VAR_1 || VAR_0->this.current == ((void*)0) ||
       VAR_0->this.next == ((void*)0))
      FUNC_1(VAR_1, "store state damaged (progressive)");







   for (;;)
   {
      static png_uint_32 VAR_3 = 1;
      png_size_t VAR_4, VAR_5;
      png_byte VAR_6[512];


      VAR_3 = (VAR_3 << 9) | ((VAR_3 ^ (VAR_3 >> (9-5))) & 0x1ff);
      VAR_4 = VAR_3 & 0x1ff;






      VAR_5 = FUNC_3(&VAR_0->this);
      if (VAR_0->buffer_count > VAR_0->buffer_position)
         VAR_5 += VAR_0->buffer_count - VAR_0->buffer_position;

      if (VAR_4 > VAR_5)
      {

         if (VAR_5 == 0)
            break;

         VAR_4 = VAR_5;
      }

      FUNC_0(VAR_0, VAR_6, VAR_4);
      FUNC_2(VAR_1, VAR_2, VAR_6, VAR_4);
   }




   if (VAR_0->buffer_count > VAR_0->buffer_position ||
       VAR_0->this.next != &VAR_0->this.current->data ||
       VAR_0->this.readpos < VAR_0->this.current->datacount)
      FUNC_1(VAR_1, "progressive read implementation error");
}
