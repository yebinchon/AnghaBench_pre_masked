
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct frad_local {int * dlci; struct net_device** master; } ;
struct dlci_local {int config; } ;
struct dlci_conf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 short VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 short FUNC_3 (struct net_device*,int ,int ,int ,int *,int,int *,short*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6, struct net_device *VAR_7, int VAR_8)
{
 struct frad_local *VAR_9;
 struct dlci_local *VAR_10;
 int VAR_11;
 short VAR_12, VAR_13;

 VAR_9 = FUNC_1(VAR_6);

 for(VAR_11=0;VAR_11<VAR_0;VAR_11++)
  if (VAR_9->master[VAR_11] == VAR_7)
   break;

 if (VAR_11 == VAR_0)
  return(-VAR_2);

 VAR_10 = FUNC_1(VAR_7);

 VAR_13 = VAR_4;
 VAR_12 = sizeof(struct dlci_conf);
 if (FUNC_2(VAR_6)) {
  if (VAR_8)
   VAR_13 = FUNC_3(VAR_6, VAR_3, FUNC_0(VAR_9->dlci[VAR_11]), 0,
               ((void*)0), 0, &VAR_10->config, &VAR_12);
  else
   VAR_13 = FUNC_3(VAR_6, VAR_5, FUNC_0(VAR_9->dlci[VAR_11]), 0,
               &VAR_10->config, sizeof(struct dlci_conf) - 4 * sizeof(short), ((void*)0), ((void*)0));
 }

 return(VAR_13 == VAR_4 ? 0 : -VAR_1);
}
