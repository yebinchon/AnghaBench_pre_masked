
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link_ant {int flags; int active; } ;
struct TYPE_2__ {struct link_ant ant; } ;
struct rt2x00_dev {TYPE_1__ link; } ;
struct antenna_setup {scalar_t__ rx; scalar_t__ tx; } ;
typedef int new_ant ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct antenna_setup*,int *,int) ;
 int FUNC_2 (struct rt2x00_dev*,struct antenna_setup) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (struct rt2x00_dev*,int) ;

__attribute__((used)) static void FUNC_6(struct rt2x00_dev *VAR_5)
{
 struct link_ant *VAR_6 = &VAR_5->link.ant;
 struct antenna_setup VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_1(&VAR_7, &VAR_6->active, sizeof(VAR_7));





 VAR_8 = FUNC_3(VAR_5);
 VAR_9 = FUNC_4(VAR_5);
 FUNC_5(VAR_5, VAR_8);
 if (FUNC_0(VAR_8 - VAR_9) < 5)
  return;

 VAR_6->flags |= VAR_2;

 if (VAR_6->flags & VAR_3)
  VAR_7.rx = (VAR_7.rx == VAR_0) ? VAR_1 : VAR_0;

 if (VAR_6->flags & VAR_4)
  VAR_7.tx = (VAR_7.tx == VAR_0) ? VAR_1 : VAR_0;

 FUNC_2(VAR_5, VAR_7);
}
