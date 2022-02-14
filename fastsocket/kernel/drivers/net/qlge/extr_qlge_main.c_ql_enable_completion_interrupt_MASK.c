
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int hw_lock; int flags; struct intr_context* intr_context; } ;
struct intr_context {int intr_en_mask; int irq_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ql_adapter*,int ) ;
 int FUNC_3 (struct ql_adapter*,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;

u32 FUNC_7(struct ql_adapter *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = 0;
 unsigned long VAR_6 = 0;
 struct intr_context *VAR_7 = VAR_3->intr_context + VAR_4;

 if (FUNC_1(FUNC_6(VAR_1, &VAR_3->flags) && VAR_4)) {



  FUNC_3(VAR_3, VAR_0,
      VAR_7->intr_en_mask);
  VAR_5 = FUNC_2(VAR_3, VAR_2);
  return VAR_5;
 }

 FUNC_4(&VAR_3->hw_lock, VAR_6);
 if (FUNC_0(&VAR_7->irq_cnt)) {
  FUNC_3(VAR_3, VAR_0,
      VAR_7->intr_en_mask);
  VAR_5 = FUNC_2(VAR_3, VAR_2);
 }
 FUNC_5(&VAR_3->hw_lock, VAR_6);
 return VAR_5;
}
