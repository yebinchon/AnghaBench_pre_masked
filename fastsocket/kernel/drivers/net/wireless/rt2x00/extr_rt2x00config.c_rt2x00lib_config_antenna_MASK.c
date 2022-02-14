
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct antenna_setup {scalar_t__ rx; scalar_t__ tx; } ;
struct link_ant {int flags; struct antenna_setup active; } ;
struct TYPE_4__ {struct link_ant ant; } ;
struct rt2x00_dev {int rx; int flags; TYPE_3__* ops; TYPE_1__ link; struct antenna_setup default_ant; } ;
typedef int config ;
struct TYPE_6__ {TYPE_2__* lib; } ;
struct TYPE_5__ {int (* config_ant ) (struct rt2x00_dev*,struct antenna_setup*) ;} ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct antenna_setup*,struct antenna_setup*,int) ;
 int FUNC_1 (struct rt2x00_dev*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rt2x00_dev*,struct antenna_setup*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6(struct rt2x00_dev *VAR_5,
         struct antenna_setup VAR_6)
{
 struct link_ant *VAR_7 = &VAR_5->link.ant;
 struct antenna_setup *VAR_8 = &VAR_5->default_ant;
 struct antenna_setup *VAR_9 = &VAR_5->link.ant.active;
 if (!(VAR_7->flags & VAR_1)) {
  if (VAR_6.rx == VAR_2) {
   VAR_7->flags |= VAR_1;

   if (VAR_8->rx == VAR_2)
    VAR_6.rx = VAR_0;
   else
    VAR_6.rx = VAR_8->rx;
  }
 } else if (VAR_6.rx == VAR_2)
  VAR_6.rx = VAR_9->rx;

 if (!(VAR_7->flags & VAR_3)) {
  if (VAR_6.tx == VAR_2) {
   VAR_7->flags |= VAR_3;

   if (VAR_8->tx == VAR_2)
    VAR_6.tx = VAR_0;
   else
    VAR_6.tx = VAR_8->tx;
  }
 } else if (VAR_6.tx == VAR_2)
  VAR_6.tx = VAR_9->tx;





 if (FUNC_5(VAR_4, &VAR_5->flags))
  FUNC_3(VAR_5->rx);






 VAR_5->ops->lib->config_ant(VAR_5, &VAR_6);

 FUNC_1(VAR_5, 1);

 FUNC_0(VAR_9, &VAR_6, sizeof(VAR_6));

 if (FUNC_5(VAR_4, &VAR_5->flags))
  FUNC_2(VAR_5->rx);
}
