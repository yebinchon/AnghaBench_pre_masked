
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* Resize ) (int,int,int) ;scalar_t__ (* IsFullscreen ) () ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;

void FUNC_3(void)
{
   if (VAR_0->IsFullscreen())
   {
      VAR_0->Resize(320, 224, 0);
   }
   else
   {
      VAR_0->Resize(640, 480, 1);
   }
}
