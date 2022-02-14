
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cycx_x25_channel {int lcn; int link; int card; scalar_t__ svc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct cycx_x25_channel* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct cycx_x25_channel *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->svc) {
  FUNC_2(VAR_3->card, VAR_3->link, VAR_3->lcn, 0, 0);
  FUNC_0(VAR_2, VAR_1);
 } else
  FUNC_0(VAR_2, VAR_0);
}
