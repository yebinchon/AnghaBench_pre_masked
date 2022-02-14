
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_dev {int dummy; } ;
struct budget {struct saa7146_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,struct budget*) ;
 int FUNC_1 (struct saa7146_dev*,int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3 (struct budget *VAR_2, int VAR_3)
{
 struct saa7146_dev *VAR_4=VAR_2->dev;
 FUNC_0(2, "budget: %p\n", VAR_2);

 FUNC_1(VAR_4, 3, VAR_0);
 FUNC_2(VAR_3 ? 500 : 1000);
 FUNC_1(VAR_4, 3, VAR_1);
 FUNC_2(VAR_3 ? 1000 : 500);
}
