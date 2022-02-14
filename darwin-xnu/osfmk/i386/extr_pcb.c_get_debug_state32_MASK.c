
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int x86_debug_state32_t ;
typedef TYPE_2__* thread_t ;
struct TYPE_4__ {int * ids; } ;
struct TYPE_5__ {TYPE_1__ machine; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_2(thread_t VAR_1, x86_debug_state32_t *VAR_2)
{
 x86_debug_state32_t *VAR_3;

 VAR_3 = VAR_1->machine.ids;

 if (VAR_3) {
  FUNC_1(VAR_3, VAR_2, VAR_0);
 } else
  FUNC_0(VAR_2, sizeof *VAR_2);
}
