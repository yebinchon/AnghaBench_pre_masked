
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct adapter {int flags; int pdev_dev; TYPE_3__** port; TYPE_2__* pdev; TYPE_1__* msix_info; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int irq; } ;
struct TYPE_4__ {int vec; int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (int ,struct adapter*) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (int ,int ,int ,int ,struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (struct adapter*) ;
 int FUNC_9 (struct adapter*) ;
 int FUNC_10 (struct adapter*) ;
 int FUNC_11 (struct adapter*) ;
 int VAR_5 ;
 int FUNC_12 (struct adapter*) ;

__attribute__((used)) static int FUNC_13(struct adapter *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_8(VAR_6);
 if (VAR_7)
  goto out;
 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7)
  goto freeq;

 if (VAR_6->flags & VAR_4) {
  FUNC_3(VAR_6);
  VAR_7 = FUNC_5(VAR_6->msix_info[0].vec, VAR_5, 0,
      VAR_6->msix_info[0].desc, VAR_6);
  if (VAR_7)
   goto irq_err;

  VAR_7 = FUNC_6(VAR_6);
  if (VAR_7) {
   FUNC_2(VAR_6->msix_info[0].vec, VAR_6);
   goto irq_err;
  }
 } else {
  VAR_7 = FUNC_5(VAR_6->pdev->irq, FUNC_11(VAR_6),
      (VAR_6->flags & VAR_3) ? 0 : VAR_2,
      VAR_6->port[0]->name, VAR_6);
  if (VAR_7)
   goto irq_err;
 }
 FUNC_1(VAR_6);
 FUNC_12(VAR_6);
 FUNC_10(VAR_6);
 VAR_6->flags |= VAR_1;
 FUNC_4(VAR_6, VAR_0);
 out:
 return VAR_7;
 irq_err:
 FUNC_0(VAR_6->pdev_dev, "request_irq failed, err %d\n", VAR_7);
 freeq:
 FUNC_9(VAR_6);
 goto out;
}
