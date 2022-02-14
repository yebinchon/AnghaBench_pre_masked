
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdq_data {int hdq_irqstatus; int dev; int hdq_spinlock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hdq_data*,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct hdq_data *VAR_8 = VAR_7;
 unsigned long VAR_9;

 FUNC_2(&VAR_8->hdq_spinlock, VAR_9);
 VAR_8->hdq_irqstatus = FUNC_1(VAR_8, VAR_1);
 FUNC_3(&VAR_8->hdq_spinlock, VAR_9);
 FUNC_0(VAR_8->dev, "hdq_isr: %x", VAR_8->hdq_irqstatus);

 if (VAR_8->hdq_irqstatus &
  (VAR_4 | VAR_2
  | VAR_3)) {

  FUNC_4(&VAR_5);
 }

 return VAR_0;
}
