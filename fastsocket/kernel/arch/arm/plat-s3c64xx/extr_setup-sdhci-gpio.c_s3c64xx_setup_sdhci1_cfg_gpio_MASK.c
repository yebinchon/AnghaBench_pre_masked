
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (unsigned int,int ) ;

void FUNC_5(struct platform_device *VAR_2, int VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_5 = FUNC_1(2 + VAR_3);


 for (VAR_4 = FUNC_1(0); VAR_4 < VAR_5; VAR_4++) {
  FUNC_3(VAR_4, FUNC_2(2));
  FUNC_4(VAR_4, VAR_0);
 }

 FUNC_4(FUNC_0(6), VAR_1);
 FUNC_3(FUNC_0(6), FUNC_2(3));
}
