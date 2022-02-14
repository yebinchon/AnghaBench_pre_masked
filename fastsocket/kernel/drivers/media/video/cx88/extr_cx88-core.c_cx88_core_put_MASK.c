
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cx88_core {scalar_t__ i2c_rc; int v4l2_dev; int lmmio; int devlist; int i2c_adap; scalar_t__ i2c_rtc; int refcount; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct cx88_core*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cx88_core*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct cx88_core *VAR_2, struct pci_dev *VAR_3)
{
 FUNC_11(FUNC_10(VAR_3,0),
      FUNC_9(VAR_3,0));

 if (!FUNC_0(&VAR_2->refcount))
  return;

 FUNC_7(&VAR_1);
 FUNC_1(VAR_2);
 if (0 == VAR_2->i2c_rc) {
  if (VAR_2->i2c_rtc)
   FUNC_3(VAR_2->i2c_rtc);
  FUNC_2(&VAR_2->i2c_adap);
 }
 FUNC_6(&VAR_2->devlist);
 FUNC_4(VAR_2->lmmio);
 VAR_0--;
 FUNC_8(&VAR_1);
 FUNC_12(&VAR_2->v4l2_dev);
 FUNC_5(VAR_2);
}
