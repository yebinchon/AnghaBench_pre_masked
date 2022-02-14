
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rc_dev {TYPE_1__* raw; } ;
struct rc5_sz_dec {int state; int count; int wanted_bits; int bits; } ;
struct ir_raw_event {int pulse; int duration; scalar_t__ reset; } ;
struct TYPE_2__ {int enabled_protocols; int prev_ev; struct rc5_sz_dec rc5_sz; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ir_raw_event*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct ir_raw_event) ;
 int FUNC_7 (struct ir_raw_event*,int *) ;
 int FUNC_8 (struct rc_dev*,int,int) ;

__attribute__((used)) static int FUNC_9(struct rc_dev *VAR_6, struct ir_raw_event VAR_7)
{
 struct rc5_sz_dec *VAR_8 = &VAR_6->raw->rc5_sz;
 u8 VAR_9, VAR_10, VAR_11;
 u32 VAR_12;

        if (!(VAR_6->raw->enabled_protocols & VAR_5))
                return 0;

 if (!FUNC_6(VAR_7)) {
  if (VAR_7.reset)
   VAR_8->state = 128;
  return 0;
 }

 if (!FUNC_5(VAR_7.duration, VAR_4, VAR_4 / 2))
  goto out;

again:
 FUNC_0(2, "RC5-sz decode started at state %i (%uus %s)\n",
     VAR_8->state, FUNC_2(VAR_7.duration), FUNC_1(VAR_7.pulse));

 if (!FUNC_5(VAR_7.duration, VAR_4, VAR_4 / 2))
  return 0;

 switch (VAR_8->state) {

 case 128:
  if (!VAR_7.pulse)
   break;

  VAR_8->state = 130;
  VAR_8->count = 1;
  VAR_8->wanted_bits = VAR_3;
  FUNC_3(&VAR_7, VAR_2);
  goto again;

 case 130:
  if (!FUNC_4(VAR_7.duration, VAR_2, VAR_4 / 2))
   break;

  VAR_8->bits <<= 1;
  if (!VAR_7.pulse)
   VAR_8->bits |= 1;
  VAR_8->count++;
  VAR_8->state = 131;
  return 0;

 case 131:
  if (!FUNC_7(&VAR_7, &VAR_6->raw->prev_ev))
   break;

  if (VAR_8->count == VAR_8->wanted_bits)
   VAR_8->state = 129;
  else
   VAR_8->state = 130;

  FUNC_3(&VAR_7, VAR_1);
  goto again;

 case 129:
  if (VAR_7.pulse)
   break;


  VAR_10 = (VAR_8->bits & 0x0003F) >> 0;
  VAR_11 = (VAR_8->bits & 0x02FC0) >> 6;
  VAR_9 = (VAR_8->bits & 0x01000) ? 1 : 0;
  VAR_12 = VAR_11 << 6 | VAR_10;

  FUNC_0(1, "RC5-sz scancode 0x%04x (toggle: %u)\n",
      VAR_12, VAR_9);

  FUNC_8(VAR_6, VAR_12, VAR_9);
  VAR_8->state = 128;
  return 0;
 }

out:
 FUNC_0(1, "RC5-sz decode failed at state %i (%uus %s)\n",
     VAR_8->state, FUNC_2(VAR_7.duration), FUNC_1(VAR_7.pulse));
 VAR_8->state = 128;
 return -VAR_0;
}
