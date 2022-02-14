
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wrqu ;
struct TYPE_2__ {int sa_family; int sa_data; } ;
union iwreq_data {TYPE_1__ addr; } ;
struct sta_info {int addr; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (union iwreq_data*,int ,int) ;
 int FUNC_2 (struct net_device*,int ,union iwreq_data*,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3,
         struct sta_info *VAR_4)
{
 union iwreq_data VAR_5;
 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 FUNC_0(VAR_5.addr.sa_data, VAR_4->addr, VAR_1);
 VAR_5.addr.sa_family = VAR_0;
 FUNC_2(VAR_3, VAR_2, &VAR_5, ((void*)0));
}
