
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atyfb_par {int int_lock; int irq_flags; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct atyfb_par*) ;
 int FUNC_1 (int ,int,struct atyfb_par*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int ,int ,int ,char*,struct atyfb_par*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct atyfb_par *VAR_7, int VAR_8)
{
 u32 VAR_9;

 if (!FUNC_7(0, &VAR_7->irq_flags)) {
  if (FUNC_4(VAR_7->irq, VAR_6, VAR_5, "atyfb", VAR_7)) {
   FUNC_2(0, &VAR_7->irq_flags);
   return -VAR_4;
  }
  FUNC_5(&VAR_7->int_lock);
  VAR_9 = FUNC_0(VAR_0, VAR_7) & VAR_1;

  FUNC_1(VAR_0, VAR_9 | VAR_2, VAR_7);

  FUNC_1(VAR_0, VAR_9 | VAR_3, VAR_7);
  FUNC_6(&VAR_7->int_lock);
 } else if (VAR_8) {
  FUNC_5(&VAR_7->int_lock);
  VAR_9 = FUNC_0(VAR_0, VAR_7) & VAR_1;
  if (!(VAR_9 & VAR_3)) {
   FUNC_3("atyfb: someone disabled IRQ [%08x]\n",
          VAR_9);

   FUNC_1(VAR_0, VAR_9 |
        VAR_3, VAR_7);
  }
  FUNC_6(&VAR_7->int_lock);
 }

 return 0;
}
