
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef TYPE_2__* png_inforp ;
typedef int png_byte ;
struct TYPE_12__ {int valid; } ;
struct TYPE_11__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int,int,int) ;

void
FUNC_7(png_structrp VAR_3, png_inforp VAR_4, png_uint_32 VAR_5)
{
   png_byte VAR_6[9];
   png_uint_32 VAR_7, VAR_8;
   int VAR_9;

   FUNC_4(1, "in png_handle_pHYs");

   if ((VAR_3->mode & VAR_1) == 0)
      FUNC_1(VAR_3, "missing IHDR");

   else if ((VAR_3->mode & VAR_0) != 0)
   {
      FUNC_2(VAR_3, VAR_5);
      FUNC_0(VAR_3, "out of place");
      return;
   }

   else if (VAR_4 != ((void*)0) && (VAR_4->valid & VAR_2) != 0)
   {
      FUNC_2(VAR_3, VAR_5);
      FUNC_0(VAR_3, "duplicate");
      return;
   }

   if (VAR_5 != 9)
   {
      FUNC_2(VAR_3, VAR_5);
      FUNC_0(VAR_3, "invalid");
      return;
   }

   FUNC_3(VAR_3, VAR_6, 9);

   if (FUNC_2(VAR_3, 0) != 0)
      return;

   VAR_7 = FUNC_5(VAR_6);
   VAR_8 = FUNC_5(VAR_6 + 4);
   VAR_9 = VAR_6[8];
   FUNC_6(VAR_3, VAR_4, VAR_7, VAR_8, VAR_9);
}
