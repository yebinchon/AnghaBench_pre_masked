
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device_context {struct hv_device* device_ctx; } ;
struct net_device {char* dev_addr; unsigned char addr_assign_type; } ;
struct hv_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,void*) ;
 int FUNC_1 (char*,char*,int) ;
 struct net_device_context* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct hv_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, void *VAR_2)
{
 struct net_device_context *VAR_3 = FUNC_2(VAR_1);
 struct hv_device *VAR_4 = VAR_3->device_ctx;
 struct sockaddr *VAR_5 = VAR_2;
 char VAR_6[VAR_0];
 unsigned char VAR_7;
 int VAR_8;

 FUNC_1(VAR_6, VAR_1->dev_addr, VAR_0);
 VAR_7 = VAR_1->addr_assign_type;

 VAR_8 = FUNC_0(VAR_1, VAR_2);
 if (VAR_8 != 0)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_4, VAR_5->sa_data);
 if (VAR_8 != 0) {

  FUNC_1(VAR_1->dev_addr, VAR_6, VAR_0);
  VAR_1->addr_assign_type = VAR_7;
 }

 return VAR_8;
}
