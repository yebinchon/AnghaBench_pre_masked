
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct card_ir {int ir; int dev; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(unsigned long VAR_0)
{
 struct card_ir *VAR_1 = (struct card_ir *)VAR_0;

 FUNC_0(1, "ir-common: key released\n");
 FUNC_1(VAR_1->dev, &VAR_1->ir);
}
