
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct urb {int unlinked; } ;
struct u132_endp {scalar_t__ dequeueing; struct u132* u132; } ;
struct u132 {int going; int scheduler_lock; TYPE_1__* platform_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct u132*,struct u132_endp*,struct urb*,int ) ;
 int FUNC_4 (struct u132*,struct u132_endp*,struct urb*,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_2, struct urb *VAR_3, u8 *VAR_4,
 int VAR_5, int VAR_6, int VAR_7, int VAR_8,
 int VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 struct u132_endp *VAR_14 = VAR_2;
 struct u132 *VAR_15 = VAR_14->u132;
 FUNC_1(&VAR_15->scheduler_lock);
 if (VAR_15->going > 1) {
  FUNC_0(&VAR_15->platform_dev->dev, "device has been removed %d\n"
   , VAR_15->going);
  FUNC_2(&VAR_15->scheduler_lock);
  FUNC_3(VAR_15, VAR_14, VAR_3, -VAR_1);
  return;
 } else if (VAR_14->dequeueing) {
  VAR_14->dequeueing = 0;
  FUNC_2(&VAR_15->scheduler_lock);
  FUNC_4(VAR_15, VAR_14, VAR_3, -VAR_0);
  return;
 } else if (VAR_15->going > 0) {
  FUNC_0(&VAR_15->platform_dev->dev, "device is being removed "
    "urb=%p\n", VAR_3);
  FUNC_2(&VAR_15->scheduler_lock);
  FUNC_4(VAR_15, VAR_14, VAR_3, -VAR_1);
  return;
 } else if (!VAR_3->unlinked) {
  FUNC_2(&VAR_15->scheduler_lock);
  FUNC_4(VAR_15, VAR_14, VAR_3, 0);
  return;
 } else {
  FUNC_0(&VAR_15->platform_dev->dev, "CALLBACK called urb=%p "
    "unlinked=%d\n", VAR_3, VAR_3->unlinked);
  FUNC_2(&VAR_15->scheduler_lock);
  FUNC_4(VAR_15, VAR_14, VAR_3, 0);
  return;
 }
}
