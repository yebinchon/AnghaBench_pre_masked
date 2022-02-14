
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct urb {int interval; struct u132* hcpriv; } ;
struct u132_urbq {struct urb* urb; int urb_more; } ;
struct u132_udev {int dummy; } ;
struct u132_endp {int delayed; int urb_more; scalar_t__ queue_size; int queue_last; struct urb** urb_list; scalar_t__ jiffies; } ;
struct u132 {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct u132_urbq* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct u132 *VAR_5,
 struct u132_udev *VAR_6, struct urb *VAR_7,
 struct usb_device *VAR_8, struct u132_endp *VAR_9, u8 VAR_10,
 u8 VAR_11, u8 VAR_12)
{
 VAR_7->hcpriv = VAR_5;
 VAR_9->delayed = 1;
 VAR_9->jiffies = VAR_4 + FUNC_2(VAR_7->interval);
 if (VAR_9->queue_size++ < VAR_1) {
  VAR_9->urb_list[VAR_0 & VAR_9->queue_last++] = VAR_7;
 } else {
  struct u132_urbq *VAR_13 = FUNC_0(sizeof(struct u132_urbq),
   VAR_3);
  if (VAR_13 == ((void*)0)) {
   VAR_9->queue_size -= 1;
   return -VAR_2;
  } else {
   FUNC_1(&VAR_13->urb_more, &VAR_9->urb_more);
   VAR_13->urb = VAR_7;
  }
 }
 return 0;
}
