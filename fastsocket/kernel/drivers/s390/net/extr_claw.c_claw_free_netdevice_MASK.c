
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; struct claw_privbk* ml_priv; int name; } ;
struct claw_privbk {TYPE_1__* channel; } ;
struct TYPE_2__ {int * ndev; } ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,int ,char*,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct net_device * VAR_3, int VAR_4)
{
 struct claw_privbk *VAR_5;

 FUNC_0(2, VAR_2, "free_dev");
 if (!VAR_3)
  return;
 FUNC_1(2, VAR_2, "%s", VAR_3->name);
 VAR_5 = VAR_3->ml_priv;
 if (VAR_3->flags & VAR_0)
  FUNC_2(VAR_3);
 if (VAR_5) {
  VAR_5->channel[VAR_1].ndev = ((void*)0);
 }
 VAR_3->ml_priv = ((void*)0);





 FUNC_0(2, VAR_2, "free_ok");
}
