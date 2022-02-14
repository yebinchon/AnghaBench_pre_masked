
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_uint_16 ;
typedef TYPE_1__* png_structrp ;
typedef TYPE_2__* png_inforp ;
typedef int png_byte ;
struct TYPE_14__ {void* blue; void* green; void* red; void* gray; } ;
struct TYPE_13__ {int valid; } ;
struct TYPE_12__ {int mode; scalar_t__ color_type; int num_trans; TYPE_5__ trans_color; scalar_t__ num_palette; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (int,char*) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int *,int,TYPE_5__*) ;

void
FUNC_7(png_structrp VAR_8, png_inforp VAR_9, png_uint_32 VAR_10)
{
   png_byte VAR_11[VAR_7];

   FUNC_4(1, "in png_handle_tRNS");

   if ((VAR_8->mode & VAR_4) == 0)
      FUNC_1(VAR_8, "missing IHDR");

   else if ((VAR_8->mode & VAR_3) != 0)
   {
      FUNC_2(VAR_8, VAR_10);
      FUNC_0(VAR_8, "out of place");
      return;
   }

   else if (VAR_9 != ((void*)0) && (VAR_9->valid & VAR_6) != 0)
   {
      FUNC_2(VAR_8, VAR_10);
      FUNC_0(VAR_8, "duplicate");
      return;
   }

   if (VAR_8->color_type == VAR_0)
   {
      png_byte VAR_12[2];

      if (VAR_10 != 2)
      {
         FUNC_2(VAR_8, VAR_10);
         FUNC_0(VAR_8, "invalid");
         return;
      }

      FUNC_3(VAR_8, VAR_12, 2);
      VAR_8->num_trans = 1;
      VAR_8->trans_color.gray = FUNC_5(VAR_12);
   }

   else if (VAR_8->color_type == VAR_2)
   {
      png_byte VAR_13[6];

      if (VAR_10 != 6)
      {
         FUNC_2(VAR_8, VAR_10);
         FUNC_0(VAR_8, "invalid");
         return;
      }

      FUNC_3(VAR_8, VAR_13, VAR_10);
      VAR_8->num_trans = 1;
      VAR_8->trans_color.red = FUNC_5(VAR_13);
      VAR_8->trans_color.green = FUNC_5(VAR_13 + 2);
      VAR_8->trans_color.blue = FUNC_5(VAR_13 + 4);
   }

   else if (VAR_8->color_type == VAR_1)
   {
      if ((VAR_8->mode & VAR_5) == 0)
      {

         FUNC_2(VAR_8, VAR_10);
         FUNC_0(VAR_8, "out of place");
         return;
      }

      if (VAR_10 > (unsigned int) VAR_8->num_palette ||
         VAR_10 > (unsigned int) VAR_7 ||
         VAR_10 == 0)
      {
         FUNC_2(VAR_8, VAR_10);
         FUNC_0(VAR_8, "invalid");
         return;
      }

      FUNC_3(VAR_8, VAR_11, VAR_10);
      VAR_8->num_trans = (png_uint_16)VAR_10;
   }

   else
   {
      FUNC_2(VAR_8, VAR_10);
      FUNC_0(VAR_8, "invalid with alpha channel");
      return;
   }

   if (FUNC_2(VAR_8, 0) != 0)
   {
      VAR_8->num_trans = 0;
      return;
   }





   FUNC_6(VAR_8, VAR_9, VAR_11, VAR_8->num_trans,
       &(VAR_8->trans_color));
}
