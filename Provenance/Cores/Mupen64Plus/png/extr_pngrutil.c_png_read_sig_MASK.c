
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef int png_size_t ;
typedef TYPE_2__* png_inforp ;
struct TYPE_8__ {int * signature; } ;
struct TYPE_7__ {int sig_bytes; int io_state; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_2 (int *,int,int) ;

void
FUNC_3(png_structrp VAR_3, png_inforp VAR_4)
{
   png_size_t VAR_5, VAR_6;


   if (VAR_3->sig_bytes >= 8)
      return;

   VAR_5 = VAR_3->sig_bytes;
   VAR_6 = 8 - VAR_5;






   FUNC_1(VAR_3, &(VAR_4->signature[VAR_5]), VAR_6);
   VAR_3->sig_bytes = 8;

   if (FUNC_2(VAR_4->signature, VAR_5, VAR_6) != 0)
   {
      if (VAR_5 < 4 &&
          FUNC_2(VAR_4->signature, VAR_5, VAR_6 - 4))
         FUNC_0(VAR_3, "Not a PNG file");
      else
         FUNC_0(VAR_3, "PNG file corrupted by ASCII conversion");
   }
   if (VAR_5 < 3)
      VAR_3->mode |= VAR_0;
}
