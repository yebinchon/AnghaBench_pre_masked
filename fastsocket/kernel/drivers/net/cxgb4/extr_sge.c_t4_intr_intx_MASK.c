
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct adapter *VAR_5 = VAR_4;

 FUNC_3(VAR_5, FUNC_0(VAR_2), 0);
 if (FUNC_2(VAR_5) | FUNC_1(VAR_5))
  return VAR_0;
 return VAR_1;
}
