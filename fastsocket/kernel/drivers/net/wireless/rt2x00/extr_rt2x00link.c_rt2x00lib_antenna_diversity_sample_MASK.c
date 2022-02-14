
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rx; } ;
struct link_ant {int flags; TYPE_2__ active; } ;
struct TYPE_3__ {struct link_ant ant; } ;
struct rt2x00_dev {TYPE_1__ link; } ;
struct antenna_setup {int rx; int tx; } ;
typedef int new_ant ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct antenna_setup*,TYPE_2__*,int) ;
 int FUNC_1 (struct rt2x00_dev*,struct antenna_setup) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*,int) ;

__attribute__((used)) static void FUNC_5(struct rt2x00_dev *VAR_5)
{
 struct link_ant *VAR_6 = &VAR_5->link.ant;
 struct antenna_setup VAR_7;
 int VAR_8;

 int VAR_9 = FUNC_2(VAR_5);
 int VAR_10 = FUNC_3(VAR_5);

 FUNC_0(&VAR_7, &VAR_6->active, sizeof(VAR_7));




 VAR_6->flags &= ~VAR_2;
 if (VAR_9 >= VAR_10) {
  FUNC_4(VAR_5,
   VAR_9);
  return;
 }

 VAR_8 = (VAR_6->active.rx == VAR_0) ? VAR_1 : VAR_0;

 if (VAR_6->flags & VAR_3)
  VAR_7.rx = VAR_8;

 if (VAR_6->flags & VAR_4)
  VAR_7.tx = VAR_8;

 FUNC_1(VAR_5, VAR_7);
}
