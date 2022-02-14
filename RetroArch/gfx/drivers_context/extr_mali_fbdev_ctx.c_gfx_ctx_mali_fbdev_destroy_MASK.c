
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int resize; int egl; } ;
typedef TYPE_1__ mali_ctx_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void *VAR_2)
{
   int VAR_3;
   mali_ctx_data_t *VAR_4 = (mali_ctx_data_t*)VAR_2;

   if (VAR_4)
   {




       VAR_4->resize = 0;
       FUNC_2(VAR_4);
   }


   VAR_3 = FUNC_4("/dev/tty", VAR_0);
   FUNC_3(VAR_3, VAR_1, 5);
   FUNC_3(VAR_3, VAR_1, 1);
   FUNC_0(VAR_3);

   FUNC_5("setterm -cursor on");
}
