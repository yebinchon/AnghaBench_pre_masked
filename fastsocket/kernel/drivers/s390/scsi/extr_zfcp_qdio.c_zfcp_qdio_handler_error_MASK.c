
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_qdio {struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {TYPE_1__* ccw_device; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct zfcp_adapter*,int,char*,int *) ;
 int FUNC_2 (struct zfcp_adapter*,int ,char*,int *) ;
 int FUNC_3 (struct zfcp_adapter*) ;

__attribute__((used)) static void FUNC_4(struct zfcp_qdio *VAR_3, char *VAR_4,
        unsigned int VAR_5)
{
 struct zfcp_adapter *VAR_6 = VAR_3->adapter;

 FUNC_0(&VAR_6->ccw_device->dev, "A QDIO problem occurred\n");

 if (VAR_5 & VAR_0) {
  FUNC_3(VAR_6);
  FUNC_2(VAR_6, 0, VAR_4, ((void*)0));
  return;
 }
 FUNC_1(VAR_6,
    VAR_1 |
    VAR_2, VAR_4, ((void*)0));
}
