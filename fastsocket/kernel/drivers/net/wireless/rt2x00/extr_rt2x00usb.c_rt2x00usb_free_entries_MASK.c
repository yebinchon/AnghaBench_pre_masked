
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_dev {int cap_flags; } ;
struct queue_entry_priv_usb_bcn {int guardian_urb; int urb; } ;
struct queue_entry_priv_usb {int guardian_urb; int urb; } ;
struct data_queue {unsigned int limit; scalar_t__ qid; TYPE_1__* entries; struct rt2x00_dev* rt2x00dev; } ;
struct TYPE_2__ {struct queue_entry_priv_usb_bcn* priv_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct data_queue *VAR_2)
{
 struct rt2x00_dev *VAR_3 = VAR_2->rt2x00dev;
 struct queue_entry_priv_usb *VAR_4;
 struct queue_entry_priv_usb_bcn *VAR_5;
 unsigned int VAR_6;

 if (!VAR_2->entries)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_2->limit; VAR_6++) {
  VAR_4 = VAR_2->entries[VAR_6].priv_data;
  FUNC_2(VAR_4->urb);
  FUNC_1(VAR_4->urb);
 }






 if (VAR_2->qid != VAR_0 ||
     !FUNC_0(VAR_1, &VAR_3->cap_flags))
  return;

 for (VAR_6 = 0; VAR_6 < VAR_2->limit; VAR_6++) {
  VAR_5 = VAR_2->entries[VAR_6].priv_data;
  FUNC_2(VAR_5->guardian_urb);
  FUNC_1(VAR_5->guardian_urb);
 }
}
