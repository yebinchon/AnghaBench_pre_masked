
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef unsigned int png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef TYPE_2__* png_inforp ;
typedef void* png_byte ;
struct TYPE_14__ {void* alpha; void* blue; void* green; void* red; void* gray; } ;
struct TYPE_13__ {int valid; } ;
struct TYPE_12__ {int mode; int color_type; unsigned int channels; TYPE_5__ sig_bit; void* bit_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,unsigned int) ;
 int FUNC_3 (TYPE_1__*,void**,unsigned int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,TYPE_5__*) ;

void
FUNC_6(png_structrp VAR_6, png_inforp VAR_7, png_uint_32 VAR_8)
{
   unsigned int VAR_9, VAR_10;
   png_byte VAR_11;
   png_byte VAR_12[4];

   FUNC_4(1, "in png_handle_sBIT");

   if ((VAR_6->mode & VAR_3) == 0)
      FUNC_1(VAR_6, "missing IHDR");

   else if ((VAR_6->mode & (VAR_2|VAR_4)) != 0)
   {
      FUNC_2(VAR_6, VAR_8);
      FUNC_0(VAR_6, "out of place");
      return;
   }

   if (VAR_7 != ((void*)0) && (VAR_7->valid & VAR_5) != 0)
   {
      FUNC_2(VAR_6, VAR_8);
      FUNC_0(VAR_6, "duplicate");
      return;
   }

   if (VAR_6->color_type == VAR_1)
   {
      VAR_9 = 3;
      VAR_11 = 8;
   }

   else
   {
      VAR_9 = VAR_6->channels;
      VAR_11 = VAR_6->bit_depth;
   }

   if (VAR_8 != VAR_9 || VAR_8 > 4)
   {
      FUNC_0(VAR_6, "invalid");
      FUNC_2(VAR_6, VAR_8);
      return;
   }

   VAR_12[0] = VAR_12[1] = VAR_12[2] = VAR_12[3] = VAR_11;
   FUNC_3(VAR_6, VAR_12, VAR_9);

   if (FUNC_2(VAR_6, 0) != 0)
      return;

   for (VAR_10=0; VAR_10<VAR_9; ++VAR_10)
   {
      if (VAR_12[VAR_10] == 0 || VAR_12[VAR_10] > VAR_11)
      {
         FUNC_0(VAR_6, "invalid");
         return;
      }
   }

   if ((VAR_6->color_type & VAR_0) != 0)
   {
      VAR_6->sig_bit.red = VAR_12[0];
      VAR_6->sig_bit.green = VAR_12[1];
      VAR_6->sig_bit.blue = VAR_12[2];
      VAR_6->sig_bit.alpha = VAR_12[3];
   }

   else
   {
      VAR_6->sig_bit.gray = VAR_12[0];
      VAR_6->sig_bit.red = VAR_12[0];
      VAR_6->sig_bit.green = VAR_12[0];
      VAR_6->sig_bit.blue = VAR_12[0];
      VAR_6->sig_bit.alpha = VAR_12[1];
   }

   FUNC_5(VAR_6, VAR_7, &(VAR_6->sig_bit));
}
