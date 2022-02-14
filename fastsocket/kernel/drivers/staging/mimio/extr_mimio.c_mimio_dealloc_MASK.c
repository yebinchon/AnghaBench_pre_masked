
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dma; scalar_t__ buf; int urb; } ;
struct TYPE_5__ {int dma; scalar_t__ buf; int urb; } ;
struct mimio {TYPE_3__* idev; TYPE_2__ out; int udev; TYPE_1__ in; } ;
struct TYPE_7__ {int dev; scalar_t__ grab; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct mimio*) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct mimio *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 FUNC_7(VAR_1->in.urb);

 FUNC_7(VAR_1->out.urb);

 if (VAR_1->idev) {
  FUNC_3(VAR_1->idev);
  if (VAR_1->idev->grab)
   FUNC_1(VAR_1->idev->grab);
  else
   FUNC_0(&VAR_1->idev->dev, "mimio->idev->grab == NULL"
    " -- didn't call input_close_device\n");
 }

 FUNC_6(VAR_1->in.urb);

 FUNC_6(VAR_1->out.urb);

 if (VAR_1->in.buf) {
  FUNC_5(VAR_1->udev, VAR_0, VAR_1->in.buf,
    VAR_1->in.dma);
 }

 if (VAR_1->out.buf)
  FUNC_5(VAR_1->udev, VAR_0, VAR_1->out.buf,
    VAR_1->out.dma);

 if (VAR_1->idev)
  FUNC_2(VAR_1->idev);

 FUNC_4(VAR_1);
}
