
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coh901331_port {int rtc; int clk; scalar_t__ virtbase; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct coh901331_port *VAR_6 = VAR_5;

 FUNC_1(VAR_6->clk);

 FUNC_3(1, VAR_6->virtbase + VAR_0);







 FUNC_3(0, VAR_6->virtbase + VAR_1);
 FUNC_0(VAR_6->clk);


 FUNC_2(VAR_6->rtc, 1, VAR_3);

 return VAR_2;
}
