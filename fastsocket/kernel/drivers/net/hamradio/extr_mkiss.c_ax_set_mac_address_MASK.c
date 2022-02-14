
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ax25 {int sax25_call; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, void *VAR_2)
{
 struct sockaddr_ax25 *VAR_3 = VAR_2;

 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1->dev_addr, &VAR_3->sax25_call, VAR_0);
 FUNC_2(VAR_1);
 FUNC_4(VAR_1);

 return 0;
}
