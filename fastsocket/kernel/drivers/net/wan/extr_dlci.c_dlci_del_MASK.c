
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct frad_local {int (* deassoc ) (struct net_device*,struct net_device*) ;} ;
struct dlci_local {int list; struct net_device* slave; } ;
struct dlci_add {int devname; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct net_device*,struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct dlci_add *VAR_3)
{
 struct dlci_local *VAR_4;
 struct frad_local *VAR_5;
 struct net_device *VAR_6, *VAR_7;
 int VAR_8;


 VAR_6 = FUNC_0(&VAR_2, VAR_3->devname);
 if (!VAR_6)
  return(-VAR_1);

 if (FUNC_4(VAR_6)) {
  return(-VAR_0);
 }

 VAR_4 = FUNC_3(VAR_6);
 VAR_7 = VAR_4->slave;
 VAR_5 = FUNC_3(VAR_7);

 FUNC_5();
 VAR_8 = (*VAR_5->deassoc)(VAR_7, VAR_6);
 if (!VAR_8) {
  FUNC_2(&VAR_4->list);

  FUNC_8(VAR_6);

  FUNC_1(VAR_7);
 }
 FUNC_6();

 return(VAR_8);
}
