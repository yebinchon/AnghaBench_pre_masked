
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; int sa_data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
typedef int islpci_private ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *,int ,int ,char**) ;
 int * FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_4, struct iw_request_info *VAR_5,
  struct sockaddr *VAR_6, char *VAR_7)
{
 islpci_private *VAR_8 = FUNC_2(VAR_4);
 char VAR_9[6];
 int VAR_10;

 if (VAR_6->sa_family != VAR_0)
  return -VAR_3;


 FUNC_0(&VAR_9[0], VAR_6->sa_data, 6);


 VAR_10 = FUNC_1(VAR_8, VAR_1, 0, &VAR_9);

 return (VAR_10 ? VAR_10 : -VAR_2);
}
