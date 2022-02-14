
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2port_device {int id; int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct c2port_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct c2port_device *VAR_4)
{
 if (!VAR_4)
  return;

 FUNC_0(VAR_4->dev, "C2 port %s removed\n", VAR_4->name);

 FUNC_2(VAR_4->dev, &VAR_0);
 FUNC_5(&VAR_3);
 FUNC_3(&VAR_2, VAR_4->id);
 FUNC_6(&VAR_3);

 FUNC_1(VAR_1, VAR_4->id);

 FUNC_4(VAR_4);
}
