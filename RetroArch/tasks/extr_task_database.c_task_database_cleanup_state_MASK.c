
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * buf; } ;
typedef TYPE_1__ database_state_handle_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(
      database_state_handle_t *VAR_0)
{
   if (!VAR_0)
      return;

   if (VAR_0->buf)
      FUNC_0(VAR_0->buf);
   VAR_0->buf = ((void*)0);
}
