
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvsd_host {int mmc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct mvsd_host *VAR_3 = VAR_2;
 FUNC_0(VAR_3->mmc, FUNC_1(100));
 return VAR_0;
}
