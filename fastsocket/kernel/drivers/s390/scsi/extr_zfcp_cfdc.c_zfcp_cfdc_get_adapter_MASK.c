
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zfcp_adapter {int dummy; } ;
struct ccw_device {int dev; } ;
typedef int busid ;


 struct zfcp_adapter* FUNC_0 (int *) ;
 struct ccw_device* FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (struct zfcp_adapter*) ;
 int VAR_0 ;

__attribute__((used)) static struct zfcp_adapter *FUNC_5(u32 VAR_1)
{
 char VAR_2[9];
 struct ccw_device *VAR_3;
 struct zfcp_adapter *VAR_4 = ((void*)0);

 FUNC_3(VAR_2, sizeof(VAR_2), "0.0.%04x", VAR_1);
 VAR_3 = FUNC_1(&VAR_0, VAR_2);
 if (!VAR_3)
  goto out;

 VAR_4 = FUNC_0(&VAR_3->dev);
 if (!VAR_4)
  goto out_put;

 FUNC_4(VAR_4);
out_put:
 FUNC_2(&VAR_3->dev);
out:
 return VAR_4;
}
