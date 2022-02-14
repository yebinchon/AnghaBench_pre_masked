
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rc_dev {int keypressed; TYPE_1__* raw; } ;
struct nec_dec {int state; int is_nec_x; int necx_repeat; int bits; int count; } ;
struct ir_raw_event {int pulse; int duration; scalar_t__ reset; } ;
struct TYPE_2__ {int enabled_protocols; struct nec_dec nec; } ;


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






 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct ir_raw_event) ;
 int FUNC_7 (struct rc_dev*,int,int ) ;
 int FUNC_8 (struct rc_dev*) ;

__attribute__((used)) static int FUNC_9(struct rc_dev *VAR_14, struct ir_raw_event VAR_15)
{
 struct nec_dec *VAR_16 = &VAR_14->raw->nec;
 u32 VAR_17;
 u8 VAR_18, VAR_19, VAR_20, VAR_21;

 if (!(VAR_14->raw->enabled_protocols & VAR_13))
  return 0;

 if (!FUNC_6(VAR_15)) {
  if (VAR_15.reset)
   VAR_16->state = 130;
  return 0;
 }

 FUNC_0(2, "NEC decode started at state %d (%uus %s)\n",
     VAR_16->state, FUNC_2(VAR_15.duration), FUNC_1(VAR_15.pulse));

 switch (VAR_16->state) {

 case 130:
  if (!VAR_15.pulse)
   break;

  if (FUNC_4(VAR_15.duration, VAR_6, VAR_12 / 2)) {
   VAR_16->is_nec_x = 0;
   VAR_16->necx_repeat = 0;
  } else if (FUNC_4(VAR_15.duration, VAR_1, VAR_12 / 2))
   VAR_16->is_nec_x = 1;
  else
   break;

  VAR_16->count = 0;
  VAR_16->state = 131;
  return 0;

 case 131:
  if (VAR_15.pulse)
   break;

  if (FUNC_4(VAR_15.duration, VAR_7, VAR_12 / 2)) {
   VAR_16->state = 133;
   return 0;
  } else if (FUNC_4(VAR_15.duration, VAR_9, VAR_12 / 2)) {
   if (!VAR_14->keypressed) {
    FUNC_0(1, "Discarding last key repeat: event after key up\n");
   } else {
    FUNC_8(VAR_14);
    FUNC_0(1, "Repeat last key\n");
    VAR_16->state = 129;
   }
   return 0;
  }

  break;

 case 133:
  if (!VAR_15.pulse)
   break;

  if (!FUNC_4(VAR_15.duration, VAR_5, VAR_12 / 2))
   break;

  VAR_16->state = 132;
  return 0;

 case 132:
  if (VAR_15.pulse)
   break;

  if (VAR_16->necx_repeat && VAR_16->count == VAR_2 &&
   FUNC_5(VAR_15.duration,
   VAR_11, VAR_12 / 2)) {
    FUNC_0(1, "Repeat last key\n");
    FUNC_8(VAR_14);
    VAR_16->state = 130;
    return 0;

  } else if (VAR_16->count > VAR_2)
   VAR_16->necx_repeat = 0;

  VAR_16->bits <<= 1;
  if (FUNC_4(VAR_15.duration, VAR_4, VAR_12 / 2))
   VAR_16->bits |= 1;
  else if (!FUNC_4(VAR_15.duration, VAR_3, VAR_12 / 2))
   break;
  VAR_16->count++;

  if (VAR_16->count == VAR_8)
   VAR_16->state = 129;
  else
   VAR_16->state = 133;

  return 0;

 case 129:
  if (!VAR_15.pulse)
   break;

  if (!FUNC_4(VAR_15.duration, VAR_10, VAR_12 / 2))
   break;

  VAR_16->state = 128;
  return 0;

 case 128:
  if (VAR_15.pulse)
   break;

  if (!FUNC_5(VAR_15.duration, VAR_11, VAR_12 / 2))
   break;

  VAR_18 = FUNC_3((VAR_16->bits >> 24) & 0xff);
  VAR_19 = FUNC_3((VAR_16->bits >> 16) & 0xff);
  VAR_20 = FUNC_3((VAR_16->bits >> 8) & 0xff);
  VAR_21 = FUNC_3((VAR_16->bits >> 0) & 0xff);

  if ((VAR_20 ^ VAR_21) != 0xff) {
   FUNC_0(1, "NEC checksum error: received 0x%08x\n",
       VAR_16->bits);
   break;
  }

  if ((VAR_18 ^ VAR_19) != 0xff) {

   VAR_17 = VAR_18 << 16 |
       VAR_19 << 8 |
       VAR_20;
   FUNC_0(1, "NEC (Ext) scancode 0x%06x\n", VAR_17);
  } else {

   VAR_17 = VAR_18 << 8 | VAR_20;
   FUNC_0(1, "NEC scancode 0x%04x\n", VAR_17);
  }

  if (VAR_16->is_nec_x)
   VAR_16->necx_repeat = 1;

  FUNC_7(VAR_14, VAR_17, 0);
  VAR_16->state = 130;
  return 0;
 }

 FUNC_0(1, "NEC decode failed at state %d (%uus %s)\n",
     VAR_16->state, FUNC_2(VAR_15.duration), FUNC_1(VAR_15.pulse));
 VAR_16->state = 130;
 return -VAR_0;
}
