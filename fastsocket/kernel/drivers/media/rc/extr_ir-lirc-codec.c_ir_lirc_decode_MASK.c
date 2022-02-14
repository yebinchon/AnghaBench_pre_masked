
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct rc_dev {TYPE_2__* raw; } ;
struct lirc_codec {int gap; int gap_duration; TYPE_1__* drv; int gap_start; int send_timeout_reports; } ;
struct ir_raw_event {int duration; scalar_t__ pulse; scalar_t__ timeout; int carrier; scalar_t__ carrier_report; scalar_t__ reset; } ;
struct TYPE_6__ {int wait_poll; } ;
struct TYPE_5__ {int enabled_protocols; struct lirc_codec lirc; } ;
struct TYPE_4__ {TYPE_3__* rbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*,unsigned char*) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct rc_dev *VAR_3, struct ir_raw_event VAR_4)
{
 struct lirc_codec *VAR_5 = &VAR_3->raw->lirc;
 int VAR_6;

 if (!(VAR_3->raw->enabled_protocols & VAR_2))
  return 0;

 if (!VAR_3->raw->lirc.drv || !VAR_3->raw->lirc.drv->rbuf)
  return -VAR_0;


 if (VAR_4.reset)
  return 0;


 if (VAR_4.carrier_report) {
  VAR_6 = FUNC_1(VAR_4.carrier);
  FUNC_0(2, "carrier report (freq: %d)\n", VAR_6);


 } else if (VAR_4.timeout) {

  if (VAR_5->gap)
   return 0;

  VAR_5->gap_start = FUNC_8();
  VAR_5->gap = 1;
  VAR_5->gap_duration = VAR_4.duration;

  if (!VAR_5->send_timeout_reports)
   return 0;

  VAR_6 = FUNC_4(VAR_4.duration / 1000);
  FUNC_0(2, "timeout report (duration: %d)\n", VAR_6);


 } else {

  if (VAR_5->gap) {
   int VAR_7;

   VAR_5->gap_duration += FUNC_10(FUNC_9(FUNC_8(),
    VAR_5->gap_start));


   FUNC_7(VAR_5->gap_duration, 1000);
   VAR_5->gap_duration = FUNC_12(VAR_5->gap_duration,
       (u64)VAR_1);

   VAR_7 = FUNC_3(VAR_5->gap_duration);
   FUNC_11(VAR_3->raw->lirc.drv->rbuf,
      (unsigned char *) &VAR_7);
   VAR_5->gap = 0;
  }

  VAR_6 = VAR_4.pulse ? FUNC_2(VAR_4.duration / 1000) :
     FUNC_3(VAR_4.duration / 1000);
  FUNC_0(2, "delivering %uus %s to lirc_dev\n",
      FUNC_6(VAR_4.duration), FUNC_5(VAR_4.pulse));
 }

 FUNC_11(VAR_3->raw->lirc.drv->rbuf,
     (unsigned char *) &VAR_6);
 FUNC_13(&VAR_3->raw->lirc.drv->rbuf->wait_poll);

 return 0;
}
