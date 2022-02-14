
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ microsoft_gen1; } ;
struct mceusb_dev {int parser_state; int rem; int cmd; int* buf_in; int rc; int dev; TYPE_1__ flags; } ;
struct TYPE_7__ {int pulse; int duration; } ;




 int FUNC_0 (TYPE_2__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct mceusb_dev*,int*,int,int,int) ;
 int FUNC_9 (struct mceusb_dev*,int) ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static void FUNC_10(struct mceusb_dev *VAR_8, int VAR_9)
{
 FUNC_0(VAR_7);
 int VAR_10 = 0;


 if (VAR_8->flags.microsoft_gen1)
  VAR_10 = 2;


 if (VAR_9 <= VAR_10)
  return;

 for (; VAR_10 < VAR_9; VAR_10++) {
  switch (VAR_8->parser_state) {
  case 128:
   VAR_8->rem = FUNC_7(VAR_8->cmd, VAR_8->buf_in[VAR_10]);
   FUNC_8(VAR_8, VAR_8->buf_in, VAR_10 - 1,
          VAR_8->rem + 2, 0);
   FUNC_9(VAR_8, VAR_10);
   VAR_8->parser_state = 131;
   break;
  case 129:
   VAR_8->rem--;
   FUNC_3(&VAR_7);
   VAR_7.pulse = ((VAR_8->buf_in[VAR_10] & VAR_4) != 0);
   VAR_7.duration = (VAR_8->buf_in[VAR_10] & VAR_5)
      * FUNC_1(VAR_6);

   FUNC_2(VAR_8->dev, "Storing %s with duration %d\n",
    VAR_7.pulse ? "pulse" : "space",
    VAR_7.duration);

   FUNC_6(VAR_8->rc, &VAR_7);
   break;
  case 131:
   VAR_8->rem--;
   break;
  case 130:


   VAR_8->cmd = VAR_8->buf_in[VAR_10];
   if ((VAR_8->cmd == VAR_0) ||
       ((VAR_8->cmd & VAR_2) !=
        VAR_1)) {
    VAR_8->parser_state = 128;
    continue;
   }
   VAR_8->rem = (VAR_8->cmd & VAR_3);
   FUNC_8(VAR_8, VAR_8->buf_in,
          VAR_10, VAR_8->rem + 1, 0);
   if (VAR_8->rem)
    VAR_8->parser_state = 129;
   else
    FUNC_5(VAR_8->rc);
   break;
  }

  if (VAR_8->parser_state != 130 && !VAR_8->rem)
   VAR_8->parser_state = 130;
 }
 FUNC_2(VAR_8->dev, "processed IR data, calling ir_raw_event_handle\n");
 FUNC_4(VAR_8->rc);
}
