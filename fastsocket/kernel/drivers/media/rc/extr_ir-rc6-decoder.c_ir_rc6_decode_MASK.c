
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rc_dev {TYPE_1__* raw; } ;
struct rc6_dec {int state; int header; int toggle; int body; int wanted_bits; int count; } ;
struct ir_raw_event {int pulse; int duration; scalar_t__ reset; } ;
struct TYPE_2__ {int enabled_protocols; int prev_ev; struct rc6_dec rc6; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ir_raw_event*,int) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct ir_raw_event) ;
 int FUNC_7 (struct ir_raw_event*,int *) ;
 int FUNC_8 (struct rc6_dec*) ;
 int FUNC_9 (struct rc_dev*,int,int) ;

__attribute__((used)) static int FUNC_10(struct rc_dev *VAR_15, struct ir_raw_event VAR_16)
{
 struct rc6_dec *VAR_17 = &VAR_15->raw->rc6;
 u32 VAR_18;
 u8 VAR_19;

 if (!(VAR_15->raw->enabled_protocols & VAR_14))
  return 0;

 if (!FUNC_6(VAR_16)) {
  if (VAR_16.reset)
   VAR_17->state = 131;
  return 0;
 }

 if (!FUNC_5(VAR_16.duration, VAR_13, VAR_13 / 2))
  goto out;

again:
 FUNC_0(2, "RC6 decode started at state %i (%uus %s)\n",
     VAR_17->state, FUNC_2(VAR_16.duration), FUNC_1(VAR_16.pulse));

 if (!FUNC_5(VAR_16.duration, VAR_13, VAR_13 / 2))
  return 0;

 switch (VAR_17->state) {

 case 131:
  if (!VAR_16.pulse)
   break;




  if (!FUNC_4(VAR_16.duration, VAR_8, VAR_13))
   break;

  VAR_17->state = 130;
  VAR_17->count = 0;
  return 0;

 case 130:
  if (VAR_16.pulse)
   break;

  if (!FUNC_4(VAR_16.duration, VAR_9, VAR_13 / 2))
   break;

  VAR_17->state = 132;
  return 0;

 case 132:
  if (!FUNC_4(VAR_16.duration, VAR_6, VAR_13 / 2))
   break;

  VAR_17->header <<= 1;
  if (VAR_16.pulse)
   VAR_17->header |= 1;
  VAR_17->count++;
  VAR_17->state = 133;
  return 0;

 case 133:
  if (!FUNC_7(&VAR_16, &VAR_15->raw->prev_ev))
   break;

  if (VAR_17->count == VAR_7)
   VAR_17->state = 128;
  else
   VAR_17->state = 132;

  FUNC_3(&VAR_16, VAR_5);
  goto again;

 case 128:
  if (!FUNC_4(VAR_16.duration, VAR_12, VAR_13 / 2))
   break;

  VAR_17->toggle = VAR_16.pulse;
  VAR_17->state = 129;
  return 0;

 case 129:
  if (!FUNC_7(&VAR_16, &VAR_15->raw->prev_ev) ||
      !FUNC_5(VAR_16.duration, VAR_11, VAR_13 / 2))
   break;

  if (!(VAR_17->header & VAR_10)) {
   FUNC_0(1, "RC6 invalid start bit\n");
   break;
  }

  VAR_17->state = 135;
  FUNC_3(&VAR_16, VAR_11);
  VAR_17->count = 0;

  switch (FUNC_8(VAR_17)) {
  case 138:
   VAR_17->wanted_bits = VAR_1;
   break;
  case 137:



   if ((!VAR_16.pulse && !FUNC_5(VAR_16.duration, VAR_13, VAR_13 / 2)) ||
       FUNC_5(VAR_16.duration, VAR_13, VAR_13 / 2))
    VAR_17->wanted_bits = VAR_2;
   else
    VAR_17->wanted_bits = VAR_4;
   break;
  default:
   FUNC_0(1, "RC6 unknown mode\n");
   goto out;
  }
  goto again;

 case 135:
  if (!FUNC_4(VAR_16.duration, VAR_6, VAR_13 / 2))
   break;

  VAR_17->body <<= 1;
  if (VAR_16.pulse)
   VAR_17->body |= 1;
  VAR_17->count++;
  VAR_17->state = 136;
  return 0;

 case 136:
  if (!FUNC_7(&VAR_16, &VAR_15->raw->prev_ev))
   break;

  if (VAR_17->count == VAR_17->wanted_bits)
   VAR_17->state = 134;
  else
   VAR_17->state = 135;

  FUNC_3(&VAR_16, VAR_5);
  goto again;

 case 134:
  if (VAR_16.pulse)
   break;

  switch (FUNC_8(VAR_17)) {
  case 138:
   VAR_18 = VAR_17->body & 0xffff;
   VAR_19 = VAR_17->toggle;
   FUNC_0(1, "RC6(0) scancode 0x%04x (toggle: %u)\n",
       VAR_18, VAR_19);
   break;
  case 137:
   if (VAR_17->wanted_bits == VAR_2) {
    VAR_19 = VAR_17->body & VAR_3 ? 1 : 0;
    VAR_18 = VAR_17->body & ~VAR_3;
   } else {
    VAR_19 = 0;
    VAR_18 = VAR_17->body & 0xffffff;
   }

   FUNC_0(1, "RC6(6A) scancode 0x%08x (toggle: %u)\n",
       VAR_18, VAR_19);
   break;
  default:
   FUNC_0(1, "RC6 unknown mode\n");
   goto out;
  }

  FUNC_9(VAR_15, VAR_18, VAR_19);
  VAR_17->state = 131;
  return 0;
 }

out:
 FUNC_0(1, "RC6 decode failed at state %i (%uus %s)\n",
     VAR_17->state, FUNC_2(VAR_16.duration), FUNC_1(VAR_16.pulse));
 VAR_17->state = 131;
 return -VAR_0;
}
