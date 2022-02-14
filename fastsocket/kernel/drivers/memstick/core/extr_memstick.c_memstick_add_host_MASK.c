
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memstick_host {int (* set_param ) (struct memstick_host*,int ,int ) ;int id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct memstick_host*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct memstick_host*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct memstick_host*,int ,int ) ;

int FUNC_9(struct memstick_host *VAR_6)
{
 int VAR_7;

 if (!FUNC_3(&VAR_4, VAR_1))
  return -VAR_0;

 FUNC_6(&VAR_5);
 VAR_7 = FUNC_2(&VAR_4, VAR_6, &VAR_6->id);
 FUNC_7(&VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_0(&VAR_6->dev, "memstick%u", VAR_6->id);

 VAR_7 = FUNC_1(&VAR_6->dev);
 if (VAR_7) {
  FUNC_6(&VAR_5);
  FUNC_4(&VAR_4, VAR_6->id);
  FUNC_7(&VAR_5);
  return VAR_7;
 }

 VAR_6->set_param(VAR_6, VAR_2, VAR_3);
 FUNC_5(VAR_6);
 return 0;
}
