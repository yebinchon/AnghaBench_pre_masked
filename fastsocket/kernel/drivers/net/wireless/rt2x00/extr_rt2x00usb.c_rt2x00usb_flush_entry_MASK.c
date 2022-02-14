
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_dev {int cap_flags; } ;
struct queue_entry_priv_usb_bcn {int guardian_urb; int urb; } ;
struct queue_entry_priv_usb {int guardian_urb; int urb; } ;
struct queue_entry {TYPE_1__* queue; int flags; struct queue_entry_priv_usb_bcn* priv_data; } ;
struct TYPE_2__ {scalar_t__ qid; struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct queue_entry *VAR_3, void *VAR_4)
{
 struct rt2x00_dev *VAR_5 = VAR_3->queue->rt2x00dev;
 struct queue_entry_priv_usb *VAR_6 = VAR_3->priv_data;
 struct queue_entry_priv_usb_bcn *VAR_7 = VAR_3->priv_data;

 if (!FUNC_0(VAR_0, &VAR_3->flags))
  return 0;

 FUNC_1(VAR_6->urb);




 if ((VAR_3->queue->qid == VAR_1) &&
     (FUNC_0(VAR_2, &VAR_5->cap_flags)))
  FUNC_1(VAR_7->guardian_urb);

 return 0;
}
