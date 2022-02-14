
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rc_dev {TYPE_1__* raw; } ;
struct rc5_dec {int state; int count; int wanted_bits; int bits; } ;
struct ir_raw_event {int pulse; int duration; scalar_t__ reset; } ;
struct TYPE_2__ {int enabled_protocols; int prev_ev; struct rc5_dec rc5; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,int,...) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ir_raw_event*,int) ;
 int FUNC_4 (int ,int,int) ;
 scalar_t__ FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct ir_raw_event) ;
 int FUNC_7 (struct ir_raw_event*,int *) ;
 int FUNC_8 (struct rc_dev*,int,int) ;

__attribute__((used)) static int FUNC_9(struct rc_dev *VAR_9, struct ir_raw_event VAR_10)
{
 struct rc5_dec *VAR_11 = &VAR_9->raw->rc5;
 u8 VAR_12;
 u32 VAR_13;

        if (!(VAR_9->raw->enabled_protocols & VAR_8))
                return 0;

 if (!FUNC_6(VAR_10)) {
  if (VAR_10.reset)
   VAR_11->state = 128;
  return 0;
 }

 if (!FUNC_5(VAR_10.duration, VAR_7, VAR_7 / 2))
  goto out;

again:
 FUNC_0(2, "RC5(x) decode started at state %i (%uus %s)\n",
     VAR_11->state, FUNC_2(VAR_10.duration), FUNC_1(VAR_10.pulse));

 if (!FUNC_5(VAR_10.duration, VAR_7, VAR_7 / 2))
  return 0;

 switch (VAR_11->state) {

 case 128:
  if (!VAR_10.pulse)
   break;

  VAR_11->state = 131;
  VAR_11->count = 1;

  VAR_11->wanted_bits = VAR_2;
  FUNC_3(&VAR_10, VAR_5);
  goto again;

 case 131:
  if (!FUNC_4(VAR_10.duration, VAR_5, VAR_7 / 2))
   break;

  VAR_11->bits <<= 1;
  if (!VAR_10.pulse)
   VAR_11->bits |= 1;
  VAR_11->count++;
  VAR_11->state = 132;
  return 0;

 case 132:
  if (!FUNC_7(&VAR_10, &VAR_9->raw->prev_ev))
   break;

  if (VAR_11->count == VAR_11->wanted_bits)
   VAR_11->state = 129;
  else if (VAR_11->count == VAR_0)
   VAR_11->state = 130;
  else
   VAR_11->state = 131;

  FUNC_3(&VAR_10, VAR_4);
  goto again;

 case 130:
  if (!VAR_10.pulse && FUNC_5(VAR_10.duration, VAR_3, VAR_7 / 2)) {

   VAR_11->wanted_bits = VAR_2;
   FUNC_3(&VAR_10, VAR_3);
  } else {

   VAR_11->wanted_bits = VAR_6;
  }
  VAR_11->state = 131;
  goto again;

 case 129:
  if (VAR_10.pulse)
   break;

  if (VAR_11->wanted_bits == VAR_2) {

   u8 VAR_14, VAR_15, VAR_16;
   VAR_14 = (VAR_11->bits & 0x0003F) >> 0;
   VAR_15 = (VAR_11->bits & 0x00FC0) >> 6;
   VAR_16 = (VAR_11->bits & 0x1F000) >> 12;
   VAR_12 = (VAR_11->bits & 0x20000) ? 1 : 0;
   VAR_15 += (VAR_11->bits & 0x01000) ? 0 : 0x40;
   VAR_13 = VAR_16 << 16 | VAR_15 << 8 | VAR_14;

   FUNC_0(1, "RC5X scancode 0x%06x (toggle: %u)\n",
       VAR_13, VAR_12);

  } else {

   u8 VAR_17, VAR_18;
   VAR_17 = (VAR_11->bits & 0x0003F) >> 0;
   VAR_18 = (VAR_11->bits & 0x007C0) >> 6;
   VAR_12 = (VAR_11->bits & 0x00800) ? 1 : 0;
   VAR_17 += (VAR_11->bits & 0x01000) ? 0 : 0x40;
   VAR_13 = VAR_18 << 8 | VAR_17;

   FUNC_0(1, "RC5 scancode 0x%04x (toggle: %u)\n",
       VAR_13, VAR_12);
  }

  FUNC_8(VAR_9, VAR_13, VAR_12);
  VAR_11->state = 128;
  return 0;
 }

out:
 FUNC_0(1, "RC5(x) decode failed at state %i (%uus %s)\n",
     VAR_11->state, FUNC_2(VAR_10.duration), FUNC_1(VAR_10.pulse));
 VAR_11->state = 128;
 return -VAR_1;
}
