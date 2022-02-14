
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_stv {size_t scratch_use; scalar_t__ nullpackets; TYPE_2__* scratch; TYPE_1__* frame; int wq; scalar_t__ streaming; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {scalar_t__ grabstate; int curpix; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (struct usb_stv*,TYPE_2__*) ;
 int FUNC_2 (struct usb_stv*) ;
 int FUNC_3 (struct usb_stv*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5 (struct usb_stv *VAR_10, int VAR_11)
{
 int VAR_12 = 0;

 while (VAR_10->streaming && (VAR_10->frame[VAR_11].grabstate == VAR_6 || VAR_10->frame[VAR_11].grabstate == VAR_5)) {
  if (!VAR_10->frame[VAR_11].curpix) {
   VAR_12++;
  }
  FUNC_4 (VAR_10->wq, (VAR_10->scratch[VAR_10->scratch_use].state == VAR_1));

  if (VAR_10->nullpackets > VAR_8) {
   VAR_10->nullpackets = 0;
   FUNC_0 (2, "STV(i): too many null length packets, restarting capture");
   FUNC_3 (VAR_10);
   FUNC_2 (VAR_10);
  } else {
   if (VAR_10->scratch[VAR_10->scratch_use].state != VAR_1) {
    VAR_10->frame[VAR_11].grabstate = VAR_4;
    FUNC_0 (2, "STV(e): FRAME_ERROR in _newframe");
    return -VAR_3;
   }
   VAR_10->scratch[VAR_10->scratch_use].state = VAR_0;

   FUNC_1 (VAR_10, &VAR_10->scratch[VAR_10->scratch_use]);

   VAR_10->scratch[VAR_10->scratch_use].state = VAR_2;
   VAR_10->scratch_use++;
   if (VAR_10->scratch_use >= VAR_9)
    VAR_10->scratch_use = 0;
   if (VAR_12 > VAR_7) {
    VAR_12 = 0;
    FUNC_0 (2, "STV(i): too many errors, restarting capture");
    FUNC_3 (VAR_10);
    FUNC_2 (VAR_10);
   }
  }
 }
 return 0;
}
