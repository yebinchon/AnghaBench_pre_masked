
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_net_private {int fd; int list; int user; int (* close ) (int,int *) ;} ;
struct net_device {int irq; } ;


 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 struct uml_net_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct uml_net_private *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_1);

 FUNC_0(VAR_1->irq, VAR_1);
 if (VAR_2->close != ((void*)0))
  (*VAR_2->close)(VAR_2->fd, &VAR_2->user);
 VAR_2->fd = -1;

 FUNC_4(&VAR_0);
 FUNC_1(&VAR_2->list);
 FUNC_5(&VAR_0);

 return 0;
}
