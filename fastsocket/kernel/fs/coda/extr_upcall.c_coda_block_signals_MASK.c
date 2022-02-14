
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sigset_t ;
struct TYPE_4__ {TYPE_1__* sighand; int blocked; } ;
struct TYPE_3__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(sigset_t *VAR_4)
{
 FUNC_3(&VAR_3->sighand->siglock);
 *VAR_4 = VAR_3->blocked;

 FUNC_2(&VAR_3->blocked);
 FUNC_1(&VAR_3->blocked, VAR_1);
 FUNC_1(&VAR_3->blocked, VAR_2);
 FUNC_1(&VAR_3->blocked, VAR_0);

 FUNC_0();
 FUNC_4(&VAR_3->sighand->siglock);
}
