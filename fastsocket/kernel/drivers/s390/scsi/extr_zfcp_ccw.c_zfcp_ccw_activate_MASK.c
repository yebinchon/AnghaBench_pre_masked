
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int scan_work; } ;
struct ccw_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct zfcp_adapter* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zfcp_adapter*,int ,char*,int *) ;
 int FUNC_3 (struct zfcp_adapter*,char*,int *,int,int ) ;
 int FUNC_4 (struct zfcp_adapter*) ;

__attribute__((used)) static int FUNC_5(struct ccw_device *VAR_4, int VAR_5, char *VAR_6)
{
 struct zfcp_adapter *VAR_7 = FUNC_0(&VAR_4->dev);

 if (!VAR_7)
  return 0;

 FUNC_3(VAR_7, VAR_6, ((void*)0), VAR_5, VAR_0);
 FUNC_3(VAR_7, VAR_6, ((void*)0),
           VAR_3, VAR_1);
 FUNC_2(VAR_7, VAR_2,
    VAR_6, ((void*)0));
 FUNC_4(VAR_7);
 FUNC_1(&VAR_7->scan_work);

 return 0;
}
