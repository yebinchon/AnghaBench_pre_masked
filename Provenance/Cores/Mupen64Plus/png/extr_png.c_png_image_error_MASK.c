
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* png_imagep ;
typedef int png_const_charp ;
struct TYPE_4__ {int warning_or_error; int message; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int,int ,int ) ;

int
FUNC_2(png_imagep VAR_1, png_const_charp VAR_2)
{

   FUNC_1(VAR_1->message, (sizeof VAR_1->message), 0, VAR_2);
   VAR_1->warning_or_error |= VAR_0;
   FUNC_0(VAR_1);
   return 0;
}
