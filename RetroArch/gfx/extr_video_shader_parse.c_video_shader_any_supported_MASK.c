
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ flags; } ;
typedef TYPE_1__ gfx_ctx_flags_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;

bool FUNC_2(void)
{
   gfx_ctx_flags_t VAR_4;
   VAR_4.flags = 0;
   FUNC_1(&VAR_4);

   return
      FUNC_0(VAR_4.flags, VAR_3) ||
      FUNC_0(VAR_4.flags, VAR_1) ||
      FUNC_0(VAR_4.flags, VAR_0) ||
      FUNC_0(VAR_4.flags, VAR_2);
}
