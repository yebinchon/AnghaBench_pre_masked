
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ allocsize; scalar_t__ buffer; } ;
typedef TYPE_1__ Image ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(Image *VAR_2, const char *VAR_3)
{
   if (FUNC_0(VAR_2->buffer, 95))
   {
      FUNC_2(VAR_1);
      FUNC_3(VAR_0, "%s: overwrite at start of image buffer\n", VAR_3);
      FUNC_1(1);
   }

   if (FUNC_0(VAR_2->buffer+16+VAR_2->allocsize, 95))
   {
      FUNC_2(VAR_1);
      FUNC_3(VAR_0, "%s: overwrite at end of image buffer\n", VAR_3);
      FUNC_1(1);
   }
}
