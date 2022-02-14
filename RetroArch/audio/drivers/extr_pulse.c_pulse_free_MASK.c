
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mainloop; scalar_t__ context; scalar_t__ stream; } ;
typedef TYPE_1__ pa_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(void *VAR_0)
{
   pa_t *VAR_1 = (pa_t*)VAR_0;

   if (!VAR_1)
      return;

   if (VAR_1->mainloop)
      FUNC_6(VAR_1->mainloop);

   if (VAR_1->stream)
   {
      FUNC_3(VAR_1->stream);
      FUNC_4(VAR_1->stream);
   }

   if (VAR_1->context)
   {
      FUNC_1(VAR_1->context);
      FUNC_2(VAR_1->context);
   }

   if (VAR_1->mainloop)
      FUNC_5(VAR_1->mainloop);

   FUNC_0(VAR_1);
}
