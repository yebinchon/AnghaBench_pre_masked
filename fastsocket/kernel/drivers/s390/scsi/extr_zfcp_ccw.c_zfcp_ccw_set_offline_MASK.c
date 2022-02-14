
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_adapter {int dummy; } ;
struct ccw_device {int dev; } ;
struct TYPE_2__ {int config_mutex; } ;


 struct zfcp_adapter* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (struct zfcp_adapter*,int ,char*,int *) ;
 int FUNC_4 (struct zfcp_adapter*) ;

__attribute__((used)) static int FUNC_5(struct ccw_device *VAR_1)
{
 struct zfcp_adapter *VAR_2;

 FUNC_1(&VAR_0.config_mutex);
 VAR_2 = FUNC_0(&VAR_1->dev);
 FUNC_3(VAR_2, 0, "ccsoff1", ((void*)0));
 FUNC_4(VAR_2);
 FUNC_2(&VAR_0.config_mutex);
 return 0;
}
