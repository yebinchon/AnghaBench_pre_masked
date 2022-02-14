
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int tls_array; int task_size; } ;
struct TYPE_7__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;

void
FUNC_6 (void)
{

 VAR_4->thread.flags &= ~(VAR_2 | VAR_1);
 FUNC_2(VAR_4);
}
