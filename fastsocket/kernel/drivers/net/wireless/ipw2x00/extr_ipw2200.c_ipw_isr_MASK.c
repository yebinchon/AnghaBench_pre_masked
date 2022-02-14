
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw_priv {int status; int isr_inta; int irq_lock; int irq_tasklet; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ipw_priv*) ;
 int FUNC_2 (struct ipw_priv*,int ) ;
 int FUNC_3 (struct ipw_priv*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct ipw_priv *VAR_8 = VAR_7;
 u32 VAR_9, VAR_10;

 if (!VAR_8)
  return VAR_4;

 FUNC_4(&VAR_8->irq_lock);

 if (!(VAR_8->status & VAR_5)) {

  goto none;
 }

 VAR_9 = FUNC_2(VAR_8, VAR_2);
 VAR_10 = FUNC_2(VAR_8, VAR_1);

 if (VAR_9 == 0xFFFFFFFF) {

  FUNC_0("IRQ INTA == 0xFFFFFFFF\n");
  goto none;
 }

 if (!(VAR_9 & (VAR_0 & VAR_10))) {

  goto none;
 }


 FUNC_1(VAR_8);


 VAR_9 &= (VAR_0 & VAR_10);
 FUNC_3(VAR_8, VAR_2, VAR_9);


 VAR_8->isr_inta = VAR_9;

 FUNC_6(&VAR_8->irq_tasklet);

 FUNC_5(&VAR_8->irq_lock);

 return VAR_3;
      none:
 FUNC_5(&VAR_8->irq_lock);
 return VAR_4;
}
