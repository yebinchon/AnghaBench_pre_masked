
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stk_camera {int urbs_used; TYPE_1__* isobufs; int udev; } ;
struct TYPE_2__ {scalar_t__ urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct stk_camera*) ;
 int FUNC_3 (struct stk_camera*) ;
 int FUNC_4 (struct stk_camera*) ;
 int FUNC_5 (struct stk_camera*) ;
 int FUNC_6 (struct stk_camera*,int,int*) ;
 int FUNC_7 (struct stk_camera*,int,int) ;
 scalar_t__ FUNC_8 (struct stk_camera*) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_11(struct stk_camera *VAR_4)
{
 int VAR_5;
 int VAR_6, VAR_7;
 int VAR_8, VAR_9;

 if (!FUNC_4(VAR_4))
  return -VAR_1;
 if (!FUNC_3(VAR_4) || !FUNC_2(VAR_4)) {
  FUNC_0("FIXME: Buffers are not allocated\n");
  return -VAR_0;
 }
 VAR_7 = FUNC_9(VAR_4->udev, 0, 5);

 if (VAR_7 < 0)
  FUNC_0("usb_set_interface failed !\n");
 if (FUNC_8(VAR_4))
  FUNC_0("error awaking the sensor\n");

 FUNC_6(VAR_4, 0x0116, &VAR_8);
 FUNC_6(VAR_4, 0x0117, &VAR_9);

 FUNC_7(VAR_4, 0x0116, 0x0000);
 FUNC_7(VAR_4, 0x0117, 0x0000);

 FUNC_6(VAR_4, 0x0100, &VAR_5);
 FUNC_7(VAR_4, 0x0100, VAR_5 | 0x80);

 FUNC_7(VAR_4, 0x0116, VAR_8);
 FUNC_7(VAR_4, 0x0117, VAR_9);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_4->isobufs[VAR_6].urb) {
   VAR_7 = FUNC_10(VAR_4->isobufs[VAR_6].urb, VAR_2);
   FUNC_1(&VAR_4->urbs_used);
   if (VAR_7)
    return VAR_7;
  }
 }
 FUNC_5(VAR_4);
 return 0;
}
