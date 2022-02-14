
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sbit; } ;
typedef TYPE_2__ sbit_modification ;
struct TYPE_5__ {int pread; } ;
struct TYPE_7__ {scalar_t__ bit_depth; int colour_type; scalar_t__ buffer_position; scalar_t__ buffer_count; scalar_t__* buffer; TYPE_1__ this; } ;
typedef TYPE_3__ png_modifier ;
typedef int png_modification ;
typedef scalar_t__ png_byte ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_2(png_modifier *VAR_1, png_modification *VAR_2, int VAR_3)
{
   png_byte VAR_4 = ((sbit_modification*)VAR_2)->sbit;
   if (VAR_1->bit_depth > VAR_4)
   {
      int VAR_5 = 0;
      switch (VAR_1->colour_type)
      {
         case 0:
            VAR_5 = 1;
            break;

         case 2:
         case 3:
            VAR_5 = 3;
            break;

         case 4:
            VAR_5 = 2;
            break;

         case 6:
            VAR_5 = 4;
            break;

         default:
            FUNC_0(VAR_1->this.pread,
               "unexpected colour type in sBIT modification");
      }

      FUNC_1(VAR_1->buffer, VAR_5);
      FUNC_1(VAR_1->buffer+4, VAR_0);

      while (VAR_5 > 0)
         (VAR_1->buffer+8)[--VAR_5] = VAR_4;

      return 1;
   }
   else if (!VAR_3)
   {

      VAR_1->buffer_count = VAR_1->buffer_position = 0;
      return 1;
   }
   else
      return 0;
}
