
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct mcast_data {struct sockaddr_in* mcast_addr; } ;


 int FUNC_0 (int,void*,int,struct sockaddr_in*,int) ;

int FUNC_1(int VAR_0, void *VAR_1, int VAR_2, struct mcast_data *VAR_3)
{
 struct sockaddr_in *VAR_4 = VAR_3->mcast_addr;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, sizeof(*VAR_4));
}
