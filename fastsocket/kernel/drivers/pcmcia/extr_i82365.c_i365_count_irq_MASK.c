
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
    FUNC_1(VAR_3, VAR_0);
    VAR_2++;
    FUNC_0(2, "-> hit on irq %d\n", VAR_4);
    return VAR_1;
}
