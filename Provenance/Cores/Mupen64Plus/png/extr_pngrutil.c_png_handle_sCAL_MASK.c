
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef int png_size_t ;
typedef TYPE_2__* png_inforp ;
typedef int png_const_charp ;
typedef int png_charp ;
typedef int* png_bytep ;
struct TYPE_13__ {int valid; } ;
struct TYPE_12__ {int mode; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int,int*,int*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int*,int) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int,char*,int) ;
 int* FUNC_8 (TYPE_1__*,int,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,int,int,int) ;

void
FUNC_10(png_structrp VAR_3, png_inforp VAR_4, png_uint_32 VAR_5)
{
   png_bytep VAR_6;
   png_size_t VAR_7;
   int VAR_8;

   FUNC_6(1, "in png_handle_sCAL");

   if ((VAR_3->mode & VAR_1) == 0)
      FUNC_3(VAR_3, "missing IHDR");

   else if ((VAR_3->mode & VAR_0) != 0)
   {
      FUNC_4(VAR_3, VAR_5);
      FUNC_2(VAR_3, "out of place");
      return;
   }

   else if (VAR_4 != ((void*)0) && (VAR_4->valid & VAR_2) != 0)
   {
      FUNC_4(VAR_3, VAR_5);
      FUNC_2(VAR_3, "duplicate");
      return;
   }


   else if (VAR_5 < 4)
   {
      FUNC_4(VAR_3, VAR_5);
      FUNC_2(VAR_3, "invalid");
      return;
   }

   FUNC_7(2, "Allocating and reading sCAL chunk data (%u bytes)",
       VAR_5 + 1);

   VAR_6 = FUNC_8(VAR_3, VAR_5+1, 2 );

   if (VAR_6 == ((void*)0))
   {
      FUNC_2(VAR_3, "out of memory");
      FUNC_4(VAR_3, VAR_5);
      return;
   }

   FUNC_5(VAR_3, VAR_6, VAR_5);
   VAR_6[VAR_5] = 0;

   if (FUNC_4(VAR_3, 0) != 0)
      return;


   if (VAR_6[0] != 1 && VAR_6[0] != 2)
   {
      FUNC_2(VAR_3, "invalid unit");
      return;
   }




   VAR_7 = 1;
   VAR_8 = 0;

   if (FUNC_1((png_const_charp)VAR_6, VAR_5, &VAR_8, &VAR_7) == 0 ||
       VAR_7 >= VAR_5 || VAR_6[VAR_7++] != 0)
      FUNC_2(VAR_3, "bad width format");

   else if (FUNC_0(VAR_8) == 0)
      FUNC_2(VAR_3, "non-positive width");

   else
   {
      png_size_t VAR_9 = VAR_7;

      VAR_8 = 0;
      if (FUNC_1((png_const_charp)VAR_6, VAR_5,
          &VAR_8, &VAR_7) == 0 || VAR_7 != VAR_5)
         FUNC_2(VAR_3, "bad height format");

      else if (FUNC_0(VAR_8) == 0)
         FUNC_2(VAR_3, "non-positive height");

      else

         FUNC_9(VAR_3, VAR_4, VAR_6[0],
             (png_charp)VAR_6+1, (png_charp)VAR_6+VAR_9);
   }
}
