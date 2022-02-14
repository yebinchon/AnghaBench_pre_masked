
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct h3600_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct h3600_dev*) ;
 int FUNC_5 (struct serio*) ;
 struct h3600_dev* FUNC_6 (struct serio*) ;
 int FUNC_7 (struct serio*,int *) ;

__attribute__((used)) static void FUNC_8(struct serio *VAR_2)
{
 struct h3600_dev *VAR_3 = FUNC_6(VAR_2);

 FUNC_0(VAR_0, &VAR_3->dev);
 FUNC_0(VAR_1, &VAR_3->dev);
 FUNC_1(VAR_3->dev);
 FUNC_3(VAR_3->dev);
 FUNC_5(VAR_2);
 FUNC_7(VAR_2, ((void*)0));
 FUNC_2(VAR_3->dev);
 FUNC_4(VAR_3);
}
