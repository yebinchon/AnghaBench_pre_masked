
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skbd {int dev; } ;
struct serio {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct skbd*) ;
 int FUNC_2 (struct serio*) ;
 struct skbd* FUNC_3 (struct serio*) ;
 int FUNC_4 (struct serio*,int *) ;

__attribute__((used)) static void FUNC_5(struct serio *VAR_0)
{
 struct skbd *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_0);
 FUNC_4(VAR_0, ((void*)0));
 FUNC_0(VAR_1->dev);
 FUNC_1(VAR_1);
}
