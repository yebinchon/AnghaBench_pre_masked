
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ handle; scalar_t__ ctx; struct TYPE_4__* res_buf; struct TYPE_4__* buffers; int num_buffers; int source; } ;
typedef TYPE_1__ al_t ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(void *VAR_0)
{
   al_t *VAR_1 = (al_t*)VAR_0;

   if (!VAR_1)
      return;

   FUNC_2(VAR_1->source);
   FUNC_1(1, &VAR_1->source);

   if (VAR_1->buffers)
      FUNC_0(VAR_1->num_buffers, VAR_1->buffers);

   FUNC_6(VAR_1->buffers);
   FUNC_6(VAR_1->res_buf);
   FUNC_5(((void*)0));

   if (VAR_1->ctx)
      FUNC_4(VAR_1->ctx);
   if (VAR_1->handle)
      FUNC_3(VAR_1->handle);
   FUNC_6(VAR_1);
}
