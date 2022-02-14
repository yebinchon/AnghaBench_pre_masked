
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct port_info {int xact_addr_filt; int viid; TYPE_1__* adapter; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct TYPE_2__ {int fn; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct port_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, void *VAR_2)
{
 int VAR_3;
 struct sockaddr *VAR_4 = VAR_2;
 struct port_info *VAR_5 = FUNC_2(VAR_1);

 if (!FUNC_0(VAR_4->sa_data))
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_5->adapter, VAR_5->adapter->fn, VAR_5->viid,
       VAR_5->xact_addr_filt, VAR_4->sa_data, 1, 1);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_1(VAR_1->dev_addr, VAR_4->sa_data, VAR_1->addr_len);
 VAR_5->xact_addr_filt = VAR_3;
 return 0;
}
