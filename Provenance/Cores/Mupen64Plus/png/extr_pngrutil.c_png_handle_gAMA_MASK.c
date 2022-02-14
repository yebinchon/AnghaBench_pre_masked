
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef int png_inforp ;
typedef int png_fixed_point ;
typedef int png_byte ;
struct TYPE_9__ {int mode; int colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int *,int *) ;

void
FUNC_8(png_structrp VAR_3, png_inforp VAR_4, png_uint_32 VAR_5)
{
   png_fixed_point VAR_6;
   png_byte VAR_7[4];

   FUNC_6(1, "in png_handle_gAMA");

   if ((VAR_3->mode & VAR_1) == 0)
      FUNC_1(VAR_3, "missing IHDR");

   else if ((VAR_3->mode & (VAR_0|VAR_2)) != 0)
   {
      FUNC_4(VAR_3, VAR_5);
      FUNC_0(VAR_3, "out of place");
      return;
   }

   if (VAR_5 != 4)
   {
      FUNC_4(VAR_3, VAR_5);
      FUNC_0(VAR_3, "invalid");
      return;
   }

   FUNC_5(VAR_3, VAR_7, 4);

   if (FUNC_4(VAR_3, 0) != 0)
      return;

   VAR_6 = FUNC_7(((void*)0), VAR_7);

   FUNC_2(VAR_3, &VAR_3->colorspace, VAR_6);
   FUNC_3(VAR_3, VAR_4);
}
