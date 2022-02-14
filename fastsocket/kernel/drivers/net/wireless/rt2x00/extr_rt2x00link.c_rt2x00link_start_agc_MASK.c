
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct link {int agc_work; } ;
struct rt2x00_dev {int hw; TYPE_2__* ops; int flags; struct link link; } ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {scalar_t__ gain_calibration; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void FUNC_2(struct rt2x00_dev *VAR_2)
{
 struct link *VAR_3 = &VAR_2->link;

 if (FUNC_1(VAR_1, &VAR_2->flags) &&
     VAR_2->ops->lib->gain_calibration)
  FUNC_0(VAR_2->hw,
          &VAR_3->agc_work,
          VAR_0);
}
