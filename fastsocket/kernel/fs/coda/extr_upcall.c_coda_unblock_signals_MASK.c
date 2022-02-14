
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sigset_t ;
struct TYPE_4__ {TYPE_1__* sighand; int blocked; } ;
struct TYPE_3__ {int siglock; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(sigset_t *VAR_1)
{
 FUNC_1(&VAR_0->sighand->siglock);
 VAR_0->blocked = *VAR_1;
 FUNC_0();
 FUNC_2(&VAR_0->sighand->siglock);
}
