
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; int watchdog_work; int vco_work; int agc_work; } ;
struct rt2x00_dev {TYPE_1__ link; int cap_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int *) ;

void FUNC_2(struct rt2x00_dev *VAR_5)
{
 FUNC_0(&VAR_5->link.agc_work, VAR_1);
 if (FUNC_1(VAR_0, &VAR_5->cap_flags))
  FUNC_0(&VAR_5->link.vco_work, VAR_3);
 FUNC_0(&VAR_5->link.watchdog_work, VAR_4);
 FUNC_0(&VAR_5->link.work, VAR_2);
}
