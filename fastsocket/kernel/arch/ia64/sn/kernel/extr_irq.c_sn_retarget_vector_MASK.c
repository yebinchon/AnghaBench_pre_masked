
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sn_pcibus_provider {int (* target_interrupt ) (struct sn_irq_info*) ;} ;
struct sn_irq_info {int irq_irq; int irq_cpuid; size_t irq_bridge_type; scalar_t__ irq_int_bit; int irq_slice; int irq_nasid; int rcu; int list; scalar_t__ irq_bridge; } ;
typedef int nasid_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct sn_irq_info*) ;
 struct sn_irq_info* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct sn_irq_info*,struct sn_irq_info*,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct sn_irq_info*) ;
 int FUNC_11 (int,int,int ) ;
 int FUNC_12 (int,int,struct sn_irq_info*,int,int,int) ;
 int FUNC_13 (int,int,struct sn_irq_info*) ;
 int FUNC_14 (int,int,struct sn_irq_info*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sn_pcibus_provider** VAR_3 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct sn_irq_info*) ;
 int FUNC_18 (struct sn_irq_info*) ;

struct sn_irq_info *FUNC_19(struct sn_irq_info *VAR_4,
           nasid_t VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8;



 int64_t VAR_9;
 int VAR_10, VAR_11;
 nasid_t VAR_12;
 struct sn_irq_info *VAR_13;
 struct sn_pcibus_provider *VAR_14;

 VAR_9 = (u64) VAR_4->irq_bridge;
 if (!VAR_9) {
  return ((void*)0);
 }

 VAR_12 = FUNC_0(VAR_9);

 if (VAR_12 & 1)
  VAR_10 = FUNC_2(VAR_9);
 else
  VAR_10 = FUNC_1(VAR_9);
 VAR_7 = VAR_4->irq_irq;


 VAR_11 = FUNC_14(VAR_12, VAR_10, VAR_4, VAR_5, VAR_6);
 if (!VAR_11) {
  VAR_13 = VAR_4;
  goto finish_up;
 }





 VAR_13 = FUNC_6(sizeof(struct sn_irq_info), VAR_0);
 if (VAR_13 == ((void*)0))
  return ((void*)0);

 FUNC_8(VAR_13, VAR_4, sizeof(struct sn_irq_info));


 FUNC_13(VAR_12, VAR_10, VAR_13);
 FUNC_18(VAR_13);


 VAR_11 = FUNC_12(VAR_12, VAR_10,
          VAR_13, VAR_7,
          VAR_5, VAR_6);


 if (VAR_11) {
  FUNC_5(VAR_13);
  return ((void*)0);
 }

 FUNC_10(VAR_13);
 FUNC_15(&VAR_2);
 FUNC_7(&VAR_4->list, &VAR_13->list);
 FUNC_16(&VAR_2);
 FUNC_3(&VAR_4->rcu, VAR_1);


finish_up:

 VAR_8 = FUNC_9(VAR_13->irq_nasid,
         VAR_13->irq_slice);
 VAR_13->irq_cpuid = VAR_8;

 VAR_14 = VAR_3[VAR_13->irq_bridge_type];





 if (VAR_13->irq_int_bit >= 0 &&
     VAR_14 && VAR_14->target_interrupt)
  (VAR_14->target_interrupt)(VAR_13);






 return VAR_13;
}
