
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int png_voidp ;
typedef TYPE_2__* png_imagep ;
typedef int jmp_buf ;
struct TYPE_6__ {TYPE_1__* opaque; } ;
struct TYPE_5__ {int error_buf; } ;


 int FUNC_0 (TYPE_2__* volatile) ;
 scalar_t__ FUNC_1 (int ) ;

int
FUNC_2(png_imagep VAR_0, int (*VAR_1)(png_voidp), png_voidp VAR_2)
{
   volatile png_imagep VAR_3 = VAR_0;
   volatile int VAR_4;
   volatile png_voidp VAR_5;
   jmp_buf VAR_6;


   VAR_5 = VAR_3->opaque->error_buf;
   VAR_4 = FUNC_1(VAR_6) == 0;

   if (VAR_4 != 0)
   {

      VAR_3->opaque->error_buf = VAR_6;
      VAR_4 = VAR_1(VAR_2);
   }

   VAR_3->opaque->error_buf = VAR_5;


   if (VAR_4 == 0)
      FUNC_0(VAR_3);

   return VAR_4;
}
