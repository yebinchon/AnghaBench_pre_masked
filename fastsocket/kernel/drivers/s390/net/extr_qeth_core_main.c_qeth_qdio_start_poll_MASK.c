
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {int napi; TYPE_1__* dev; } ;
struct ccw_device {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct ccw_device *VAR_1, int VAR_2,
  unsigned long VAR_3)
{
 struct qeth_card *VAR_4 = (struct qeth_card *)VAR_3;

 if (VAR_4->dev && (VAR_4->dev->flags & VAR_0))
  FUNC_0(&VAR_4->napi);
}
