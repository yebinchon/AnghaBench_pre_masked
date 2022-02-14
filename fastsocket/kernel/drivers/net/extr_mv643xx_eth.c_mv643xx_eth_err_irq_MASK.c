
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv643xx_eth_shared_private {int smi_busy_wait; scalar_t__ base; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct mv643xx_eth_shared_private *VAR_6 = VAR_5;

 if (FUNC_0(VAR_6->base + VAR_0) & VAR_1) {
  FUNC_2(~VAR_1, VAR_6->base + VAR_0);
  FUNC_1(&VAR_6->smi_busy_wait);
  return VAR_2;
 }

 return VAR_3;
}
