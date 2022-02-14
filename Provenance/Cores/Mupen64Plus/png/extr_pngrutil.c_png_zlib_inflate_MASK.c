
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
struct TYPE_5__ {scalar_t__ avail_in; int* next_in; char* msg; } ;
struct TYPE_4__ {TYPE_3__ zstream; scalar_t__ zstream_start; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;

int
FUNC_1(png_structrp VAR_1, int VAR_2)
{
   if (VAR_1->zstream_start && VAR_1->zstream.avail_in > 0)
   {
      if ((*VAR_1->zstream.next_in >> 4) > 7)
      {
         VAR_1->zstream.msg = "invalid window size (libpng)";
         return VAR_0;
      }

      VAR_1->zstream_start = 0;
   }

   return FUNC_0(&VAR_1->zstream, VAR_2);
}
