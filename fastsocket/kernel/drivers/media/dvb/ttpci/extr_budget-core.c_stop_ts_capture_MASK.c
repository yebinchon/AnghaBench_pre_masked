
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct budget {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*,struct budget*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct budget *VAR_3)
{
 FUNC_1(2, "budget: %p\n", VAR_3);

 FUNC_2(VAR_3->dev, VAR_2, VAR_1);
 FUNC_0(VAR_3->dev, VAR_0);
 return 0;
}
