
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef int png_size_t ;
typedef TYPE_2__* png_inforp ;
typedef int png_byte ;
struct TYPE_8__ {int * signature; } ;
struct TYPE_7__ {int sig_bytes; int buffer_size; int process_mode; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_2 (int *,int,int) ;

void
FUNC_3(png_structrp VAR_1, png_inforp VAR_2)
{
   png_size_t VAR_3 = VAR_1->sig_bytes,
       VAR_4 = 8 - VAR_3;

   if (VAR_1->buffer_size < VAR_4)
   {
      VAR_4 = VAR_1->buffer_size;
   }

   FUNC_1(VAR_1, &(VAR_2->signature[VAR_3]),
       VAR_4);
   VAR_1->sig_bytes = (png_byte)(VAR_1->sig_bytes + VAR_4);

   if (FUNC_2(VAR_2->signature, VAR_3, VAR_4))
   {
      if (VAR_3 < 4 &&
          FUNC_2(VAR_2->signature, VAR_3, VAR_4 - 4))
         FUNC_0(VAR_1, "Not a PNG file");

      else
         FUNC_0(VAR_1, "PNG file corrupted by ASCII conversion");
   }
   else
   {
      if (VAR_1->sig_bytes >= 8)
      {
         VAR_1->process_mode = VAR_0;
      }
   }
}
