
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn_irq_info {int dummy; } ;
typedef int nasid_t ;


 int VAR_0 ;
 int FUNC_0 (struct sn_irq_info*) ;
 int FUNC_1 (struct sn_irq_info*) ;
 struct sn_irq_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int,int,int ,int,int,int) ;

struct sn_irq_info *FUNC_4(nasid_t VAR_1, int VAR_2, int VAR_3,
        nasid_t VAR_4, int VAR_5)
{
 struct sn_irq_info *VAR_6;
 int VAR_7;
 int VAR_8 = sizeof(struct sn_irq_info);

 if ((VAR_1 & 1) == 0)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_8, VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_1, VAR_2, FUNC_0(VAR_6), VAR_3,
      VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_1(VAR_6);
  return ((void*)0);
 } else {
  return VAR_6;
 }
}
