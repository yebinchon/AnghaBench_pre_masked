
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int y; int x; scalar_t__* on; } ;
struct TYPE_4__ {TYPE_3__ n; int p; } ;
typedef TYPE_1__ st_percent_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

void
FUNC_2
( st_percent_t* VAR_1,
  int VAR_2 )
{
    if (VAR_2 && *VAR_1->n.on)
 FUNC_1(VAR_1->n.x, VAR_1->n.y, VAR_0, VAR_1->p);

    FUNC_0(&VAR_1->n, VAR_2);
}
