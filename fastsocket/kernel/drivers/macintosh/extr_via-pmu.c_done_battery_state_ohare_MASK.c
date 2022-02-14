
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adb_request {int* reply; } ;
struct TYPE_2__ {unsigned int flags; long charge; long max_charge; long amperage; long voltage; long time_remaining; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 TYPE_1__* VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_2(struct adb_request* VAR_11)
{
 unsigned int VAR_12 = VAR_5;
 long VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 long VAR_18, VAR_19;
 long VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24 = FUNC_1(VAR_0,
   ((void*)0), VAR_1, 0);

 if (VAR_11->reply[0] & 0x01)
  VAR_10 |= VAR_6;
 else
  VAR_10 &= ~VAR_6;

 if (VAR_24 == VAR_2) {
  VAR_19 = 189;
  VAR_18 = 213;
  VAR_17 = 6500;
 } else {
  VAR_19 = 330;
  VAR_18 = 330;
  VAR_17 = 6500;
 }
 VAR_16 = VAR_19;


 if (VAR_11->reply[0] & 0x04) {
  VAR_12 |= VAR_4;
  if (VAR_11->reply[0] & 0x02)
   VAR_12 |= VAR_3;
  VAR_15 = (VAR_11->reply[1] << 8) | VAR_11->reply[2];
  VAR_21 = (VAR_15 * 265 + 72665) / 10;
  VAR_20 = VAR_11->reply[5];
  if ((VAR_11->reply[0] & 0x01) == 0) {
   if (VAR_20 > 200)
    VAR_15 += ((VAR_20 - 200) * 15)/100;
  } else if (VAR_11->reply[0] & 0x02) {
   VAR_15 = (VAR_15 * 97) / 100;
   VAR_16 = VAR_18;
  }
  VAR_14 = (100 * VAR_15) / VAR_16;
  if (VAR_11->reply[0] & 0x40) {
   VAR_13 = (VAR_11->reply[6] << 8) + VAR_11->reply[7];
   if (VAR_13 > VAR_17)
    VAR_13 = VAR_17;
   VAR_13 *= 100;
   VAR_13 = 100 - VAR_13 / VAR_17;
   if (VAR_13 < VAR_14)
    VAR_14 = VAR_13;
  }
  if (VAR_20 > 0)
   VAR_22 = (VAR_14 * 16440) / VAR_20;
  else
   VAR_22 = 0;
  VAR_23 = 100;
  VAR_20 = -VAR_20;
 } else
  VAR_14 = VAR_23 = VAR_20 = VAR_21 = VAR_22 = 0;

 VAR_8[VAR_9].flags = VAR_12;
 VAR_8[VAR_9].charge = VAR_14;
 VAR_8[VAR_9].max_charge = VAR_23;
 VAR_8[VAR_9].amperage = VAR_20;
 VAR_8[VAR_9].voltage = VAR_21;
 VAR_8[VAR_9].time_remaining = VAR_22;

 FUNC_0(0, &VAR_7);
}
