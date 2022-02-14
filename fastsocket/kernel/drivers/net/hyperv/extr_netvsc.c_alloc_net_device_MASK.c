
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {int start_remove; int destroy; struct net_device* ndev; struct hv_device* dev; int wait_drain; } ;
struct net_device {int dummy; } ;
struct hv_device {int dummy; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct hv_device*,struct netvsc_device*) ;
 int FUNC_2 (int *) ;
 struct netvsc_device* FUNC_3 (int,int ) ;

__attribute__((used)) static struct netvsc_device *FUNC_4(struct hv_device *VAR_1)
{
 struct netvsc_device *VAR_2;
 struct net_device *VAR_3 = FUNC_0(VAR_1);

 VAR_2 = FUNC_3(sizeof(struct netvsc_device), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_2(&VAR_2->wait_drain);
 VAR_2->start_remove = 0;
 VAR_2->destroy = 0;
 VAR_2->dev = VAR_1;
 VAR_2->ndev = VAR_3;

 FUNC_1(VAR_1, VAR_2);
 return VAR_2;
}
