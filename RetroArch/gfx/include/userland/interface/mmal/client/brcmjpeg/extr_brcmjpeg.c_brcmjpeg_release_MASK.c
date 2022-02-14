
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; scalar_t__ ref_count; } ;
typedef TYPE_1__ BRCMJPEG_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int * VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int * VAR_2 ;

void FUNC_5(BRCMJPEG_T *VAR_3)
{
   FUNC_1(VAR_3);
   if (--VAR_3->ref_count)
   {
      FUNC_3(VAR_3);
      return;
   }

   FUNC_0();
   if (VAR_3->type == VAR_0)
      VAR_2 = ((void*)0);
   else
      VAR_1 = ((void*)0);
   FUNC_2();
   FUNC_3(VAR_3);

   FUNC_4(VAR_3);
   return;
}
