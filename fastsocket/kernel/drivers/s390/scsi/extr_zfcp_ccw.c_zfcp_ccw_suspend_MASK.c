
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_adapter {int dummy; } ;
struct ccw_device {int dev; } ;
struct TYPE_2__ {int config_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct zfcp_adapter* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (struct zfcp_adapter*,int ,char*,int *) ;
 int FUNC_4 (struct zfcp_adapter*,char*,int *,int ,int ) ;
 int FUNC_5 (struct zfcp_adapter*) ;

__attribute__((used)) static int FUNC_6(struct ccw_device *VAR_3)

{
 struct zfcp_adapter *VAR_4 = FUNC_0(&VAR_3->dev);

 if (!VAR_4)
  return 0;

 FUNC_1(&VAR_2.config_mutex);

 FUNC_4(VAR_4, "ccsusp2", ((void*)0),
           VAR_1, VAR_0);
 FUNC_3(VAR_4, 0, "ccsusp1", ((void*)0));
 FUNC_5(VAR_4);

 FUNC_2(&VAR_2.config_mutex);

 return 0;
}
