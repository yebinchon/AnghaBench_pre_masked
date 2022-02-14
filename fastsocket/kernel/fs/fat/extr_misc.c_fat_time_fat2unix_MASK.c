
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
typedef int time_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct TYPE_3__ {int tz_utc; } ;
struct msdos_sb_info {TYPE_1__ options; } ;
typedef int __le16 ;
struct TYPE_4__ {int tz_minuteswest; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 TYPE_2__ VAR_6 ;

void FUNC_3(struct msdos_sb_info *VAR_7, struct timespec *VAR_8,
         __le16 VAR_9, __le16 VAR_10, u8 VAR_11)
{
 u16 VAR_12 = FUNC_1(VAR_9), VAR_13 = FUNC_1(VAR_10);
 time_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_18 = VAR_13 >> 9;
 VAR_17 = FUNC_2(1, (VAR_13 >> 5) & 0xf);
 VAR_15 = FUNC_2(1, VAR_13 & 0x1f) - 1;

 VAR_16 = (VAR_18 + 3) / 4;
 if (VAR_18 > VAR_4)
  VAR_16--;
 if (FUNC_0(VAR_18) && VAR_17 > 2)
  VAR_16++;

 VAR_14 = (VAR_12 & 0x1f) << 1;
 VAR_14 += ((VAR_12 >> 5) & 0x3f) * VAR_3;
 VAR_14 += (VAR_12 >> 11) * VAR_2;
 VAR_14 += (VAR_18 * 365 + VAR_16
     + VAR_5[VAR_17] + VAR_15
     + VAR_0) * VAR_1;

 if (!VAR_7->options.tz_utc)
  VAR_14 += VAR_6.tz_minuteswest * VAR_3;

 if (VAR_11) {
  VAR_8->tv_sec = VAR_14 + (VAR_11 / 100);
  VAR_8->tv_nsec = (VAR_11 % 100) * 10000000;
 } else {
  VAR_8->tv_sec = VAR_14;
  VAR_8->tv_nsec = 0;
 }
}
