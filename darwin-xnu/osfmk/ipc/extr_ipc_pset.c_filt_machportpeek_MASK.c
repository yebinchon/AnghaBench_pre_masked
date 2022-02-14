
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int p_mqueue; } ;
struct knote {TYPE_1__ kn_ptr; } ;
typedef int ipc_mqueue_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_1)
{
 ipc_mqueue_t VAR_2 = VAR_1->kn_ptr.p_mqueue;

 return FUNC_0(VAR_2) ? VAR_0 : 0;
}
