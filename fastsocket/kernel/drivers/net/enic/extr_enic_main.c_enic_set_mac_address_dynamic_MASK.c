
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {char* sa_data; } ;
struct net_device {int dummy; } ;
struct enic {int netdev; } ;


 int FUNC_0 (struct enic*) ;
 int FUNC_1 (struct enic*) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct enic* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, void *VAR_1)
{
 struct enic *VAR_2 = FUNC_3(VAR_0);
 struct sockaddr *VAR_3 = VAR_1;
 char *VAR_4 = VAR_3->sa_data;
 int VAR_5;

 if (FUNC_4(VAR_2->netdev)) {
  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5)
   return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_0, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (FUNC_4(VAR_2->netdev)) {
  VAR_5 = FUNC_0(VAR_2);
  if (VAR_5)
   return VAR_5;
 }

 return VAR_5;
}
