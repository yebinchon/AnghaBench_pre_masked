
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbcs_soft {int algo; int putdma; int getdma; int algolock; int dmareadlock; int dmawritelock; int algo_queue; int dmaread_queue; int dmawrite_queue; struct cx_dev* cxdev; void* mmr_base; int list; int nasid; } ;
struct cx_device_id {int dummy; } ;
struct TYPE_2__ {int nasid; } ;
struct cx_dev {int dev; struct mbcs_soft* soft; TYPE_1__ cx_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 struct mbcs_soft* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mbcs_soft*) ;
 int FUNC_7 (struct cx_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct cx_dev *VAR_4, const struct cx_device_id *VAR_5)
{
 struct mbcs_soft *VAR_6;

 VAR_4->soft = ((void*)0);

 VAR_6 = FUNC_2(sizeof(struct mbcs_soft), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->nasid = VAR_4->cx_id.nasid;
 FUNC_3(&VAR_6->list, &VAR_3);
 VAR_6->mmr_base = (void *)FUNC_10(VAR_4->cx_id.nasid);
 VAR_4->soft = VAR_6;
 VAR_6->cxdev = VAR_4;

 FUNC_1(&VAR_6->dmawrite_queue);
 FUNC_1(&VAR_6->dmaread_queue);
 FUNC_1(&VAR_6->algo_queue);

 FUNC_9(&VAR_6->dmawritelock);
 FUNC_9(&VAR_6->dmareadlock);
 FUNC_9(&VAR_6->algolock);

 FUNC_5(&VAR_6->getdma);
 FUNC_8(&VAR_6->putdma);
 FUNC_4(&VAR_6->algo);

 FUNC_6(VAR_6);


 FUNC_7(VAR_4);

 FUNC_0(&VAR_4->dev, &VAR_2);

 return 0;
}
