
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* sighand; int blocked; } ;
struct TYPE_7__ {TYPE_2__* action; } ;
struct TYPE_5__ {scalar_t__ sa_handler; } ;
struct TYPE_6__ {TYPE_1__ sa; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;

int FUNC_1(int VAR_2)
{
 return (FUNC_0(&VAR_1->blocked, VAR_2) ||
  VAR_1->sighand->action[VAR_2-1].sa.sa_handler == VAR_0);
}
