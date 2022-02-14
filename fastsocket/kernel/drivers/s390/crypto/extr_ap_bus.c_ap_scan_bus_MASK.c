
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct device {int kobj; int release; int parent; int * bus; } ;
struct ap_device {int unregistered; int queue_depth; int device_type; unsigned int functions; struct device device; int lock; scalar_t__ qid; int timeout; int list; int requestq; int pendingq; } ;
typedef scalar_t__ ap_qid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ap_device*) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,unsigned int*) ;
 int FUNC_7 (scalar_t__,int*,int*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;
 struct device* FUNC_10 (int *,int *,void*,int ) ;
 scalar_t__ FUNC_11 (struct device*,char*,int ) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct ap_device*) ;
 struct ap_device* FUNC_15 (int,int ) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int ,unsigned long) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int *) ;
 struct ap_device* FUNC_24 (struct device*) ;

__attribute__((used)) static void FUNC_25(struct work_struct *VAR_13)
{
 struct ap_device *VAR_14;
 struct device *VAR_15;
 ap_qid_t VAR_16;
 int VAR_17, VAR_18;
 unsigned int VAR_19;
 int VAR_20, VAR_21;

 FUNC_5();
 if (FUNC_8() != 0) {
  return;
 }
 for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++) {
  VAR_16 = FUNC_0(VAR_21, VAR_10);
  VAR_15 = FUNC_10(&VAR_7, ((void*)0),
          (void *)(unsigned long)VAR_16,
          VAR_6);
  if (FUNC_9(VAR_21))
   VAR_20 = FUNC_7(VAR_16, &VAR_17, &VAR_18);
  else
   VAR_20 = -VAR_3;
  if (VAR_15) {
   if (VAR_20 == -VAR_2) {
    FUNC_18(VAR_5);
    FUNC_17(VAR_1);
    VAR_20 = FUNC_7(VAR_16, &VAR_17,
          &VAR_18);
   }
   VAR_14 = FUNC_24(VAR_15);
   FUNC_20(&VAR_14->lock);
   if (VAR_20 || VAR_14->unregistered) {
    FUNC_22(&VAR_14->lock);
    if (VAR_14->unregistered)
     VAR_21--;
    FUNC_13(VAR_15);
    FUNC_16(VAR_15);
    continue;
   }
   FUNC_22(&VAR_14->lock);
   FUNC_16(VAR_15);
   continue;
  }
  if (VAR_20)
   continue;
  VAR_20 = FUNC_3(VAR_16);
  if (VAR_20)
   continue;
  VAR_14 = FUNC_15(sizeof(*VAR_14), VAR_4);
  if (!VAR_14)
   break;
  VAR_14->qid = VAR_16;
  VAR_14->queue_depth = VAR_17;
  VAR_14->unregistered = 1;
  FUNC_21(&VAR_14->lock);
  FUNC_2(&VAR_14->pendingq);
  FUNC_2(&VAR_14->requestq);
  FUNC_2(&VAR_14->list);
  FUNC_19(&VAR_14->timeout, VAR_11,
       (unsigned long) VAR_14);
  switch (VAR_18) {
  case 0:

   if (FUNC_4(VAR_14)) {
    FUNC_14(VAR_14);
    continue;
   }
   break;
  default:
   VAR_14->device_type = VAR_18;
  }

  VAR_20 = FUNC_6(VAR_16, &VAR_19);
  if (!VAR_20)
   VAR_14->functions = VAR_19;
  else
   VAR_14->functions = 0u;

  VAR_14->device.bus = &VAR_7;
  VAR_14->device.parent = VAR_12;
  if (FUNC_11(&VAR_14->device, "card%02x",
     FUNC_1(VAR_14->qid))) {
   FUNC_14(VAR_14);
   continue;
  }
  VAR_14->device.release = VAR_9;
  VAR_20 = FUNC_12(&VAR_14->device);
  if (VAR_20) {
   FUNC_16(&VAR_14->device);
   continue;
  }

  VAR_20 = FUNC_23(&VAR_14->device.kobj,
     &VAR_8);
  if (!VAR_20) {
   FUNC_20(&VAR_14->lock);
   VAR_14->unregistered = 0;
   FUNC_22(&VAR_14->lock);
  } else
   FUNC_13(&VAR_14->device);
 }
}
