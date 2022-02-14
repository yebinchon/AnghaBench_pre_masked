
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_device {int dummy; } ;
struct blkif_sring {int dummy; } ;
struct TYPE_2__ {int * sring; } ;
struct blkfront_info {int ring_ref; int irq; int evtchn; TYPE_1__ ring; int sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct blkif_sring*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct blkif_sring*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,char*,struct blkfront_info*) ;
 int FUNC_4 (struct blkfront_info*,int ) ;
 int VAR_7 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct xenbus_device*,int *) ;
 int FUNC_9 (struct xenbus_device*,int,char*) ;
 int FUNC_10 (struct xenbus_device*,int ) ;

__attribute__((used)) static int FUNC_11(struct xenbus_device *VAR_8,
    struct blkfront_info *VAR_9)
{
 struct blkif_sring *VAR_10;
 int VAR_11;

 VAR_9->ring_ref = VAR_3;

 VAR_10 = (struct blkif_sring *)FUNC_2(VAR_2 | VAR_6);
 if (!VAR_10) {
  FUNC_9(VAR_8, -VAR_1, "allocating shared ring");
  return -VAR_1;
 }
 FUNC_1(VAR_10);
 FUNC_0(&VAR_9->ring, VAR_10, VAR_5);

 FUNC_6(VAR_9->sg, VAR_0);

 VAR_11 = FUNC_10(VAR_8, FUNC_7(VAR_9->ring.sring));
 if (VAR_11 < 0) {
  FUNC_5((unsigned long)VAR_10);
  VAR_9->ring.sring = ((void*)0);
  goto fail;
 }
 VAR_9->ring_ref = VAR_11;

 VAR_11 = FUNC_8(VAR_8, &VAR_9->evtchn);
 if (VAR_11)
  goto fail;

 VAR_11 = FUNC_3(VAR_9->evtchn,
     VAR_7,
     VAR_4, "blkif", VAR_9);
 if (VAR_11 <= 0) {
  FUNC_9(VAR_8, VAR_11,
     "bind_evtchn_to_irqhandler failed");
  goto fail;
 }
 VAR_9->irq = VAR_11;

 return 0;
fail:
 FUNC_4(VAR_9, 0);
 return VAR_11;
}
