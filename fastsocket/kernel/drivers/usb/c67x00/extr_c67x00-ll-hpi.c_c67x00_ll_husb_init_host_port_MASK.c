
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c67x00_sie {int sie_num; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct c67x00_sie*) ;
 int FUNC_2 (struct c67x00_sie*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct c67x00_sie*) ;

void FUNC_7(struct c67x00_sie *VAR_2)
{

 FUNC_5(VAR_2->dev, FUNC_0(VAR_2->sie_num), VAR_0);
 FUNC_1(VAR_2);

 FUNC_2(VAR_2, VAR_1);

 if (!(FUNC_4(VAR_2->dev, FUNC_0(VAR_2->sie_num)) & VAR_0))
  FUNC_3(FUNC_6(VAR_2),
    "SIE %d not set to host mode\n", VAR_2->sie_num);
}
