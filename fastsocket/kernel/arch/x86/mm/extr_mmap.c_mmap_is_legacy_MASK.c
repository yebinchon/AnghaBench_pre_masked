
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int personality; TYPE_2__* signal; } ;
struct TYPE_5__ {TYPE_1__* rlim; } ;
struct TYPE_4__ {scalar_t__ rlim_cur; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(void)
{
 if (VAR_3->personality & VAR_0)
  return 1;

 if (VAR_3->signal->rlim[VAR_1].rlim_cur == VAR_2)
  return 1;

 return VAR_4;
}
