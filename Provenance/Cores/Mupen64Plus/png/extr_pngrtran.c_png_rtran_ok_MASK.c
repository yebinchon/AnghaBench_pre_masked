
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
struct TYPE_4__ {int flags; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;

__attribute__((used)) static int
FUNC_1(png_structrp VAR_3, int VAR_4)
{
   if (VAR_3 != ((void*)0))
   {
      if ((VAR_3->flags & VAR_1) != 0)
         FUNC_0(VAR_3,
             "invalid after png_start_read_image or png_read_update_info");

      else if (VAR_4 && (VAR_3->mode & VAR_2) == 0)
         FUNC_0(VAR_3, "invalid before the PNG header has been read");

      else
      {

         VAR_3->flags |= VAR_0;

         return 1;
      }
   }

   return 0;
}
