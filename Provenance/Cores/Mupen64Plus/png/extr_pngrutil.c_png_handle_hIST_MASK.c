
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_uint_16 ;
typedef TYPE_1__* png_structrp ;
typedef TYPE_2__* png_inforp ;
typedef int png_byte ;
struct TYPE_12__ {int valid; } ;
struct TYPE_11__ {int mode; scalar_t__ num_palette; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int *) ;

void
FUNC_7(png_structrp VAR_5, png_inforp VAR_6, png_uint_32 VAR_7)
{
   unsigned int VAR_8, VAR_9;
   png_uint_16 VAR_10[VAR_4];

   FUNC_4(1, "in png_handle_hIST");

   if ((VAR_5->mode & VAR_1) == 0)
      FUNC_1(VAR_5, "missing IHDR");

   else if ((VAR_5->mode & VAR_0) != 0 ||
       (VAR_5->mode & VAR_2) == 0)
   {
      FUNC_2(VAR_5, VAR_7);
      FUNC_0(VAR_5, "out of place");
      return;
   }

   else if (VAR_6 != ((void*)0) && (VAR_6->valid & VAR_3) != 0)
   {
      FUNC_2(VAR_5, VAR_7);
      FUNC_0(VAR_5, "duplicate");
      return;
   }

   VAR_8 = VAR_7 / 2 ;

   if (VAR_8 != (unsigned int) VAR_5->num_palette ||
       VAR_8 > (unsigned int) VAR_4)
   {
      FUNC_2(VAR_5, VAR_7);
      FUNC_0(VAR_5, "invalid");
      return;
   }

   for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
   {
      png_byte VAR_11[2];

      FUNC_3(VAR_5, VAR_11, 2);
      VAR_10[VAR_9] = FUNC_5(VAR_11);
   }

   if (FUNC_2(VAR_5, 0) != 0)
      return;

   FUNC_6(VAR_5, VAR_6, VAR_10);
}
