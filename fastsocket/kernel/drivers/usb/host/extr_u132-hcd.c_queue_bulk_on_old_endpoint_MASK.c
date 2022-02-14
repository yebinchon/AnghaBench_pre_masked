
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct urb {struct u132* hcpriv; } ;
struct u132_urbq {struct urb* urb; int urb_more; } ;
struct u132_udev {int dummy; } ;
struct u132_endp {int urb_more; scalar_t__ queue_size; int queue_last; struct urb** urb_list; } ;
struct u132 {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct u132_urbq* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct u132 *VAR_4, struct u132_udev *VAR_5,
 struct urb *VAR_6,
 struct usb_device *VAR_7, struct u132_endp *VAR_8, u8 VAR_9,
 u8 VAR_10, u8 VAR_11)
{
 VAR_6->hcpriv = VAR_4;
 if (VAR_8->queue_size++ < VAR_1) {
  VAR_8->urb_list[VAR_0 & VAR_8->queue_last++] = VAR_6;
 } else {
  struct u132_urbq *VAR_12 = FUNC_0(sizeof(struct u132_urbq),
   VAR_3);
  if (VAR_12 == ((void*)0)) {
   VAR_8->queue_size -= 1;
   return -VAR_2;
  } else {
   FUNC_1(&VAR_12->urb_more, &VAR_8->urb_more);
   VAR_12->urb = VAR_6;
  }
 }
 return 0;
}
