
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_se401 {size_t scratch_use; scalar_t__ nullpackets; scalar_t__ format; int cheight; int cwidth; TYPE_2__* frame; scalar_t__ enhance; TYPE_1__* dev; TYPE_3__* scratch; int wq; scalar_t__ streaming; } ;
struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_6__ {scalar_t__ grabstate; int data; int curpix; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct usb_se401*,TYPE_3__*) ;
 int FUNC_2 (struct usb_se401*,TYPE_3__*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct usb_se401*) ;
 int FUNC_6 (struct usb_se401*) ;
 int VAR_13 ;
 int FUNC_7 (int,int *,int *) ;

__attribute__((used)) static int FUNC_8(struct usb_se401 *VAR_14, int VAR_15)
{
 FUNC_0(VAR_13, VAR_12);
 int VAR_16 = 0;

 while (VAR_14->streaming &&
     (VAR_14->frame[VAR_15].grabstate == VAR_8 ||
      VAR_14->frame[VAR_15].grabstate == VAR_7)) {
  if (!VAR_14->frame[VAR_15].curpix)
   VAR_16++;

  FUNC_7(
      VAR_14->scratch[VAR_14->scratch_use].state != VAR_1,
          &VAR_14->wq, &VAR_13);
  if (VAR_14->nullpackets > VAR_10) {
   VAR_14->nullpackets = 0;
   FUNC_3(&VAR_14->dev->dev,
    "too many null length packets, restarting capture\n");
   FUNC_6(VAR_14);
   FUNC_5(VAR_14);
  } else {
   if (VAR_14->scratch[VAR_14->scratch_use].state !=
        VAR_1) {
    VAR_14->frame[VAR_15].grabstate = VAR_6;
    return -VAR_3;
   }
   VAR_14->scratch[VAR_14->scratch_use].state = VAR_0;
   if (VAR_14->format == VAR_4)
    FUNC_1(VAR_14,
     &VAR_14->scratch[VAR_14->scratch_use]);
   else
    FUNC_2(VAR_14,
     &VAR_14->scratch[VAR_14->scratch_use]);

   VAR_14->scratch[VAR_14->scratch_use].state =
       VAR_2;
   VAR_14->scratch_use++;
   if (VAR_14->scratch_use >= VAR_11)
    VAR_14->scratch_use = 0;
   if (VAR_16 > VAR_9) {
    VAR_16 = 0;
    FUNC_3(&VAR_14->dev->dev,
          "too many errors, restarting capture\n");
    FUNC_6(VAR_14);
    FUNC_5(VAR_14);
   }
  }
 }

 if (VAR_14->frame[VAR_15].grabstate == VAR_5)
  if (VAR_14->enhance)
   FUNC_4(VAR_14->frame[VAR_15].data,
     VAR_14->cheight * VAR_14->cwidth * 3);
 return 0;
}
