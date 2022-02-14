
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {char* name; unsigned int rq_count; unsigned int wq_count; unsigned int intr_count; TYPE_3__* msix; TYPE_2__* msix_entry; struct net_device* napi; TYPE_1__* pdev; int vdev; struct net_device* netdev; } ;
struct enic {char* name; unsigned int rq_count; unsigned int wq_count; unsigned int intr_count; TYPE_3__* msix; TYPE_2__* msix_entry; struct enic* napi; TYPE_1__* pdev; int vdev; struct enic* netdev; } ;
struct TYPE_6__ {char* devname; int requested; struct net_device* devid; int isr; } ;
struct TYPE_5__ {int vector; } ;
struct TYPE_4__ {int irq; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;



 int FUNC_1 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_2 (struct net_device*) ;
 unsigned int FUNC_3 (struct net_device*) ;
 unsigned int FUNC_4 (struct net_device*,unsigned int) ;
 unsigned int FUNC_5 (struct net_device*,unsigned int) ;
 int FUNC_6 (int ,int ,int ,char*,struct net_device*) ;
 int FUNC_7 (char*,int,char*,char*,...) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct enic *VAR_7)
{
 struct net_device *VAR_8 = VAR_7->netdev;
 unsigned int VAR_9, VAR_10;
 int VAR_11 = 0;

 switch (FUNC_8(VAR_7->vdev)) {

 case 130:

  VAR_11 = FUNC_6(VAR_7->pdev->irq, VAR_1,
   VAR_0, VAR_8->name, VAR_8);
  break;

 case 129:

  VAR_11 = FUNC_6(VAR_7->pdev->irq, VAR_2,
   0, VAR_8->name, VAR_7);
  break;

 case 128:

  for (VAR_9 = 0; VAR_9 < VAR_7->rq_count; VAR_9++) {
   VAR_10 = FUNC_4(VAR_7, VAR_9);
   FUNC_7(VAR_7->msix[VAR_10].devname,
    sizeof(VAR_7->msix[VAR_10].devname),
    "%.11s-rx-%d", VAR_8->name, VAR_9);
   VAR_7->msix[VAR_10].isr = VAR_5;
   VAR_7->msix[VAR_10].devid = &VAR_7->napi[VAR_9];
  }

  for (VAR_9 = 0; VAR_9 < VAR_7->wq_count; VAR_9++) {
   VAR_10 = FUNC_5(VAR_7, VAR_9);
   FUNC_7(VAR_7->msix[VAR_10].devname,
    sizeof(VAR_7->msix[VAR_10].devname),
    "%.11s-tx-%d", VAR_8->name, VAR_9);
   VAR_7->msix[VAR_10].isr = VAR_6;
   VAR_7->msix[VAR_10].devid = VAR_7;
  }

  VAR_10 = FUNC_2(VAR_7);
  FUNC_7(VAR_7->msix[VAR_10].devname,
   sizeof(VAR_7->msix[VAR_10].devname),
   "%.11s-err", VAR_8->name);
  VAR_7->msix[VAR_10].isr = VAR_3;
  VAR_7->msix[VAR_10].devid = VAR_7;

  VAR_10 = FUNC_3(VAR_7);
  FUNC_7(VAR_7->msix[VAR_10].devname,
   sizeof(VAR_7->msix[VAR_10].devname),
   "%.11s-notify", VAR_8->name);
  VAR_7->msix[VAR_10].isr = VAR_4;
  VAR_7->msix[VAR_10].devid = VAR_7;

  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7->msix); VAR_9++)
   VAR_7->msix[VAR_9].requested = 0;

  for (VAR_9 = 0; VAR_9 < VAR_7->intr_count; VAR_9++) {
   VAR_11 = FUNC_6(VAR_7->msix_entry[VAR_9].vector,
    VAR_7->msix[VAR_9].isr, 0,
    VAR_7->msix[VAR_9].devname,
    VAR_7->msix[VAR_9].devid);
   if (VAR_11) {
    FUNC_1(VAR_7);
    break;
   }
   VAR_7->msix[VAR_9].requested = 1;
  }

  break;

 default:
  break;
 }

 return VAR_11;
}
