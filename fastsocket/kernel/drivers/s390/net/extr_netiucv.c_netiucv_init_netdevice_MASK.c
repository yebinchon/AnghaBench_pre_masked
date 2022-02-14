
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netiucv_priv {int fsm; int conn; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct net_device* FUNC_1 (int,char*,int ) ;
 scalar_t__ FUNC_2 (struct net_device*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 struct netiucv_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,char*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static struct net_device *FUNC_9(char *VAR_10)
{
 struct netiucv_priv *VAR_11;
 struct net_device *VAR_12;

 VAR_12 = FUNC_1(sizeof(struct netiucv_priv), "iucv%d",
      VAR_8);
 if (!VAR_12)
  return ((void*)0);
 if (FUNC_2(VAR_12, VAR_12->name) < 0)
  goto out_netdev;

 VAR_11 = FUNC_7(VAR_12);
 VAR_11->fsm = FUNC_5("netiucvdev", VAR_7,
    VAR_5, VAR_4, VAR_3,
    VAR_6, VAR_0, VAR_2);
 if (!VAR_11->fsm)
  goto out_netdev;

 VAR_11->conn = FUNC_8(VAR_12, VAR_10);
 if (!VAR_11->conn) {
  FUNC_0(VAR_9, 2, "NULL from netiucv_new_connection\n");
  goto out_fsm;
 }
 FUNC_4(VAR_11->fsm, VAR_1);
 return VAR_12;

out_fsm:
 FUNC_6(VAR_11->fsm);
out_netdev:
 FUNC_3(VAR_12);
 return ((void*)0);
}
