
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t res_ptr; int * res_buf; int source; } ;
typedef TYPE_1__ al_t ;
typedef scalar_t__ ALint ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__,int *) ;

__attribute__((used)) static bool FUNC_2(al_t *VAR_1)
{
   ALint VAR_2;

   FUNC_0(VAR_1->source, VAR_0, &VAR_2);

   if (VAR_2 <= 0)
      return 0;

   FUNC_1(VAR_1->source, VAR_2, &VAR_1->res_buf[VAR_1->res_ptr]);
   VAR_1->res_ptr += VAR_2;
   return 1;
}
