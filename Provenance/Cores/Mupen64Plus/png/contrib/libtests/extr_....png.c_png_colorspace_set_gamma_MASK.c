
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int png_fixed_point ;
typedef TYPE_1__* png_const_structrp ;
typedef char* png_const_charp ;
typedef TYPE_2__* png_colorspacerp ;
struct TYPE_9__ {int flags; int gamma; } ;
struct TYPE_8__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__*,int,int) ;

void
FUNC_2(png_const_structrp VAR_5,
    png_colorspacerp VAR_6, png_fixed_point VAR_7)
{
   png_const_charp VAR_8;

   if (VAR_7 < 16 || VAR_7 > 625000000)
      VAR_8 = "gamma value out of range";
   else if ((VAR_6->flags & VAR_3) != 0)
      return;

   else
   {
      if (FUNC_1(VAR_5, VAR_6, VAR_7,
          1 ) != 0)
      {

         VAR_6->gamma = VAR_7;
         VAR_6->flags |=
            (VAR_2 | VAR_1);
      }






      return;
   }


   VAR_6->flags |= VAR_3;
   FUNC_0(VAR_5, VAR_8, VAR_0);
}
