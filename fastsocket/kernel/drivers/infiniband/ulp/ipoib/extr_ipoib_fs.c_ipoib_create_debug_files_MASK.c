
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {char* name; } ;
struct ipoib_dev_priv {void* path_dentry; void* mcg_dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,int,int ,struct net_device*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ipoib_dev_priv*,char*) ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int,char*,char*) ;

void FUNC_4(struct net_device *VAR_6)
{
 struct ipoib_dev_priv *VAR_7 = FUNC_2(VAR_6);
 char VAR_8[VAR_0 + sizeof "_path"];

 FUNC_3(VAR_8, sizeof VAR_8, "%s_mcg", VAR_6->name);
 VAR_7->mcg_dentry = FUNC_0(VAR_8, VAR_1 | VAR_2,
            VAR_5, VAR_6, &VAR_3);
 if (!VAR_7->mcg_dentry)
  FUNC_1(VAR_7, "failed to create mcg debug file\n");

 FUNC_3(VAR_8, sizeof VAR_8, "%s_path", VAR_6->name);
 VAR_7->path_dentry = FUNC_0(VAR_8, VAR_1 | VAR_2,
      VAR_5, VAR_6, &VAR_4);
 if (!VAR_7->path_dentry)
  FUNC_1(VAR_7, "failed to create path debug file\n");
}
