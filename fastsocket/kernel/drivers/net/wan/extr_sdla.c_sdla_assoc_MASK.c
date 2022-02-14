
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ type; scalar_t__ dev_addr; int mtu; } ;
struct TYPE_2__ {scalar_t__ station; } ;
struct frad_local {short* dlci; TYPE_1__ config; struct net_device** master; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 short FUNC_0 (short) ;
 struct frad_local* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ,int ,int ,scalar_t__,int,int *,int *) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_7, struct net_device *VAR_8)
{
 struct frad_local *VAR_9;
 int VAR_10;

 if (VAR_8->type != VAR_0)
  return(-VAR_3);

 VAR_9 = FUNC_1(VAR_7);

 for(VAR_10=0;VAR_10<VAR_1;VAR_10++)
 {
  if (!VAR_9->master[VAR_10])
   break;
  if (FUNC_0(VAR_9->dlci[VAR_10]) == *(short *)(VAR_8->dev_addr))
   return(-VAR_2);
 }

 if (VAR_10 == VAR_1)
  return(-VAR_4);


 VAR_9->master[VAR_10] = VAR_8;
 VAR_9->dlci[VAR_10] = -*(short *)(VAR_8->dev_addr);
 VAR_8->mtu = VAR_7->mtu;

 if (FUNC_2(VAR_7)) {
  if (VAR_9->config.station == VAR_5)
   FUNC_4(VAR_7);
  else
   FUNC_3(VAR_7, VAR_6, 0, 0, VAR_8->dev_addr, sizeof(short), ((void*)0), ((void*)0));
 }

 return(0);
}
