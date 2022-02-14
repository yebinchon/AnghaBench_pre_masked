
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sn_irq_info {int irq_bridge; } ;
typedef int nasid_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sn_irq_info*) ;
 int FUNC_3 (int,int,struct sn_irq_info*) ;

void FUNC_4(struct sn_irq_info *VAR_0)
{
 u64 VAR_1 = (u64) VAR_0->irq_bridge;
 nasid_t VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 if (VAR_2 & 1) {
  VAR_3 = FUNC_1(VAR_1);
  FUNC_3(VAR_2, VAR_3, VAR_0);
  FUNC_2(VAR_0);
 }
}
