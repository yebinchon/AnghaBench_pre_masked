
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int number; int dev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *,char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct parport *VAR_2)
{
 FUNC_1(VAR_1, VAR_2->dev, FUNC_0(VAR_0, VAR_2->number),
        ((void*)0), "parport%d", VAR_2->number);
}
