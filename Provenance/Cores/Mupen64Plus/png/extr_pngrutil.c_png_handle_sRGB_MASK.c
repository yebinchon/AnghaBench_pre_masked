
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef int png_inforp ;
typedef int png_byte ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {int mode; TYPE_7__ colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;
 int FUNC_6 (int,char*) ;

void
FUNC_7(png_structrp VAR_5, png_inforp VAR_6, png_uint_32 VAR_7)
{
   png_byte VAR_8;

   FUNC_6(1, "in png_handle_sRGB");

   if ((VAR_5->mode & VAR_3) == 0)
      FUNC_1(VAR_5, "missing IHDR");

   else if ((VAR_5->mode & (VAR_2|VAR_4)) != 0)
   {
      FUNC_4(VAR_5, VAR_7);
      FUNC_0(VAR_5, "out of place");
      return;
   }

   if (VAR_7 != 1)
   {
      FUNC_4(VAR_5, VAR_7);
      FUNC_0(VAR_5, "invalid");
      return;
   }

   FUNC_5(VAR_5, &VAR_8, 1);

   if (FUNC_4(VAR_5, 0) != 0)
      return;


   if ((VAR_5->colorspace.flags & VAR_1) != 0)
      return;




   if ((VAR_5->colorspace.flags & VAR_0) != 0)
   {
      VAR_5->colorspace.flags |= VAR_1;
      FUNC_3(VAR_5, VAR_6);
      FUNC_0(VAR_5, "too many profiles");
      return;
   }

   (void)FUNC_2(VAR_5, &VAR_5->colorspace, VAR_8);
   FUNC_3(VAR_5, VAR_6);
}
