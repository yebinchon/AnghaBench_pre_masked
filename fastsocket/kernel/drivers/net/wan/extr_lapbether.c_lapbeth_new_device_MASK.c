
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct lapbethdev {int node; struct net_device* ethdev; struct net_device* axdev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_1 (int,char*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct lapbethdev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *,int *) ;
 struct lapbethdev* FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_4)
{
 struct net_device *VAR_5;
 struct lapbethdev *VAR_6;
 int VAR_7 = -VAR_1;

 FUNC_0();

 VAR_5 = FUNC_1(sizeof(*VAR_6), "lapb%d",
      VAR_3);
 if (!VAR_5)
  goto out;

 VAR_6 = FUNC_8(VAR_5);
 VAR_6->axdev = VAR_5;

 FUNC_3(VAR_4);
 VAR_6->ethdev = VAR_4;

 VAR_7 = FUNC_2(VAR_5, VAR_5->name);
 if (VAR_7 < 0)
  goto fail;

 VAR_7 = -VAR_0;
 if (FUNC_9(VAR_5))
  goto fail;

 FUNC_7(&VAR_6->node, &VAR_2);
 VAR_7 = 0;
out:
 return VAR_7;
fail:
 FUNC_4(VAR_4);
 FUNC_5(VAR_5);
 FUNC_6(VAR_6);
 goto out;
}
