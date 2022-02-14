
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_const_structrp ;
typedef int png_const_charp ;
typedef int png_const_bytep ;
typedef TYPE_1__* png_colorspacerp ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int ,int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ,int ) ;

int
FUNC_4(png_const_structrp VAR_1, png_colorspacerp VAR_2,
    png_const_charp VAR_3, png_uint_32 VAR_4, png_const_bytep VAR_5,
    int VAR_6)
{
   if ((VAR_2->flags & VAR_0) != 0)
      return 0;

   if (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4) != 0 &&
       FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
           VAR_6) != 0 &&
       FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
           VAR_5) != 0)
   {




      return 1;
   }


   return 0;
}
