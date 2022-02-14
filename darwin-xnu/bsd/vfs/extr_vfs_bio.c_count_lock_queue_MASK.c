
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* buf_t ;
struct TYPE_6__ {TYPE_2__* tqh_first; } ;
struct TYPE_4__ {TYPE_2__* tqe_next; } ;
struct TYPE_5__ {TYPE_1__ b_freelist; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(void)
{
 buf_t VAR_3;
 int VAR_4 = 0;

 FUNC_0(VAR_1);

 for (VAR_3 = VAR_2[VAR_0].tqh_first; VAR_3;
     VAR_3 = VAR_3->b_freelist.tqe_next)
  VAR_4++;
 FUNC_1(VAR_1);

 return (VAR_4);
}
