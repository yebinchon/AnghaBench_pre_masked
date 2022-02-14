
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int ptr; int cheats; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(void)
{
   if (!VAR_0.cheats || VAR_0.size == 0)
      return;

   VAR_0.ptr = (VAR_0.ptr + 1) % VAR_0.size;
   FUNC_0(&VAR_0, VAR_0.ptr);
}
