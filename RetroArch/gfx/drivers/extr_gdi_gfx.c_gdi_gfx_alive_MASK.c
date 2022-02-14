
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ctx_data; TYPE_1__* ctx_driver; } ;
typedef TYPE_2__ gdi_t ;
struct TYPE_3__ {int (* check_window ) (int ,int*,int*,unsigned int*,unsigned int*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int*,int*,unsigned int*,unsigned int*,int) ;
 int FUNC_2 (unsigned int*,unsigned int*) ;
 int FUNC_3 (unsigned int*,unsigned int*) ;

__attribute__((used)) static bool FUNC_4(void *VAR_1)
{
   unsigned VAR_2 = 0;
   unsigned VAR_3 = 0;
   bool VAR_4 = 0;
   bool VAR_5 = 0;
   bool VAR_6 = 0;
   bool VAR_7 = FUNC_0(VAR_0, ((void*)0));
   gdi_t *VAR_8 = (gdi_t*)VAR_1;


   FUNC_2(&VAR_2, &VAR_3);

   VAR_8->ctx_driver->check_window(VAR_8->ctx_data,
            &VAR_4, &VAR_5, &VAR_2, &VAR_3, VAR_7);

   VAR_6 = !VAR_4;

   if (VAR_2 != 0 && VAR_3 != 0)
      FUNC_3(&VAR_2, &VAR_3);

   return VAR_6;
}
