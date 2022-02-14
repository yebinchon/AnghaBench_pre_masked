
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
typedef scalar_t__ u32 ;
struct sockaddr {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ iw_mode; } ;
typedef TYPE_1__ islpci_private ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int *,struct sockaddr*,int *) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (struct net_device*,int ,union iwreq_data*,int *) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_2, u32 VAR_3)
{
 islpci_private *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3) {
  FUNC_2(VAR_2);
  if (VAR_4->iw_mode == VAR_0) {
   union iwreq_data VAR_5;
   FUNC_3(VAR_2, ((void*)0), (struct sockaddr *) &VAR_5,
     ((void*)0));
   FUNC_5(VAR_2, VAR_1, &VAR_5, ((void*)0));
  } else
   FUNC_4(FUNC_0(VAR_2),
       "Link established");
 } else {
  FUNC_1(VAR_2);
  FUNC_4(FUNC_0(VAR_2), "Link lost");
 }
}
