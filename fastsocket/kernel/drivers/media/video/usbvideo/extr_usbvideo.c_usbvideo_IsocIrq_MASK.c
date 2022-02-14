
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int urb_length; int data_count; int urb_count; } ;
struct uvd {int debug; TYPE_3__* dev; int dp; TYPE_1__ stats; int streaming; } ;
struct urb {TYPE_3__* dev; int status; TYPE_2__* iso_frame_desc; int actual_length; int error_count; struct uvd* context; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ actual_length; scalar_t__ status; } ;


 int FUNC_0 (struct uvd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct urb*,int ) ;
 int FUNC_5 (struct uvd*,struct urb*) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct uvd *VAR_6 = VAR_2->context;


 if (!FUNC_0(VAR_6))
  return;
 if (!VAR_6->streaming) {
  if (VAR_6->debug >= 1)
   FUNC_2(&VAR_6->dev->dev,
     "Not streaming, but interrupt!\n");
  return;
 }

 VAR_6->stats.urb_count++;
 if (VAR_2->actual_length <= 0)
  goto urb_done_with;


 VAR_5 = FUNC_5(VAR_6, VAR_2);
 VAR_6->stats.urb_length = VAR_5;
 if (VAR_5 <= 0)
  goto urb_done_with;


 VAR_6->stats.data_count += VAR_5;
 FUNC_1(&VAR_6->dp);

urb_done_with:
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->iso_frame_desc[VAR_3].status = 0;
  VAR_2->iso_frame_desc[VAR_3].actual_length = 0;
 }
 VAR_2->status = 0;
 VAR_2->dev = VAR_6->dev;
 VAR_4 = FUNC_4 (VAR_2, VAR_1);
 if(VAR_4)
  FUNC_3("usb_submit_urb error (%d)", VAR_4);
 return;
}
