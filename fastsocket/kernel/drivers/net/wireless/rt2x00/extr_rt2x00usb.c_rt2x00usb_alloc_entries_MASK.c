
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_dev {int cap_flags; } ;
struct queue_entry_priv_usb_bcn {void* guardian_urb; void* urb; } ;
struct queue_entry_priv_usb {void* guardian_urb; void* urb; } ;
struct data_queue {unsigned int limit; scalar_t__ qid; TYPE_1__* entries; struct rt2x00_dev* rt2x00dev; } ;
struct TYPE_2__ {struct queue_entry_priv_usb_bcn* priv_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct data_queue *VAR_4)
{
 struct rt2x00_dev *VAR_5 = VAR_4->rt2x00dev;
 struct queue_entry_priv_usb *VAR_6;
 struct queue_entry_priv_usb_bcn *VAR_7;
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4->limit; VAR_8++) {
  VAR_6 = VAR_4->entries[VAR_8].priv_data;
  VAR_6->urb = FUNC_1(0, VAR_1);
  if (!VAR_6->urb)
   return -VAR_0;
 }






 if (VAR_4->qid != VAR_2 ||
     !FUNC_0(VAR_3, &VAR_5->cap_flags))
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_4->limit; VAR_8++) {
  VAR_7 = VAR_4->entries[VAR_8].priv_data;
  VAR_7->guardian_urb = FUNC_1(0, VAR_1);
  if (!VAR_7->guardian_urb)
   return -VAR_0;
 }

 return 0;
}
