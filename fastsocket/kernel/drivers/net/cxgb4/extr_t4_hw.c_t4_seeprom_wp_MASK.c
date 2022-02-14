
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,unsigned int*) ;

int FUNC_1(struct adapter *VAR_1, bool VAR_2)
{
 unsigned int VAR_3 = VAR_2 ? 0xc : 0;
 int VAR_4 = FUNC_0(VAR_1->pdev, VAR_0, 4, &VAR_3);
 return VAR_4 < 0 ? VAR_4 : 0;
}
