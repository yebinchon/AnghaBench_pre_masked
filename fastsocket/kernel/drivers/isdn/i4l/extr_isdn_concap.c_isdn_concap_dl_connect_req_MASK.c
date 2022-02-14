
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct concap_proto {struct net_device* net_dev; } ;
typedef int isdn_net_local ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct concap_proto *VAR_0)
{
 struct net_device *VAR_1 = VAR_0 -> net_dev;
 isdn_net_local *VAR_2 = (isdn_net_local *) FUNC_2(VAR_1);
 int VAR_3;
 FUNC_0( "isdn_concap_dl_connect_req: %s \n", VAR_1 -> name);


 VAR_3 = FUNC_1( VAR_2 );
 if ( VAR_3 ) FUNC_0("dialing failed\n");
 return VAR_3;
}
