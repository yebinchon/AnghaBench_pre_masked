
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcast_data {void* dev; int port; int addr; int mcast_addr; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1)
{
 struct mcast_data *VAR_2 = VAR_0;

 VAR_2->mcast_addr = FUNC_0(VAR_2->addr, VAR_2->port);
 VAR_2->dev = VAR_1;
 return 0;
}
