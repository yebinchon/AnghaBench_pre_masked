
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int time_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct TYPE_3__ {int tz_utc; } ;
struct msdos_sb_info {TYPE_1__ options; } ;
typedef scalar_t__ __le16 ;
struct TYPE_4__ {int tz_minuteswest; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int* VAR_7 ;
 TYPE_2__ VAR_8 ;

void FUNC_2(struct msdos_sb_info *VAR_9, struct timespec *VAR_10,
         __le16 *VAR_11, __le16 *VAR_12, u8 *VAR_13)
{
 time_t VAR_14 = VAR_10->tv_sec;
 time_t VAR_15, VAR_16, VAR_17, VAR_18;

 if (!VAR_9->options.tz_utc)
  VAR_14 -= VAR_8.tz_minuteswest * VAR_3;


 if (VAR_14 < VAR_4) {
  *VAR_11 = 0;
  *VAR_12 = FUNC_1((0 << 9) | (1 << 5) | 1);
  if (VAR_13)
   *VAR_13 = 0;
  return;
 }
 VAR_15 = VAR_14 / VAR_1 - VAR_0;
 VAR_18 = VAR_15 / 365;
 VAR_16 = (VAR_18 + 3) / 4;
 if (VAR_18 > VAR_6)
  VAR_16--;
 if (VAR_18 * 365 + VAR_16 > VAR_15)
  VAR_18--;
 VAR_16 = (VAR_18 + 3) / 4;
 if (VAR_18 > VAR_6)
  VAR_16--;
 VAR_15 -= VAR_18 * 365 + VAR_16;

 if (FUNC_0(VAR_18) && VAR_15 == VAR_7[3]) {
  VAR_17 = 2;
 } else {
  if (FUNC_0(VAR_18) && VAR_15 > VAR_7[3])
   VAR_15--;
  for (VAR_17 = 1; VAR_17 < 12; VAR_17++) {
   if (VAR_7[VAR_17 + 1] > VAR_15)
    break;
  }
 }
 VAR_15 -= VAR_7[VAR_17];

 *VAR_11 = FUNC_1(((VAR_14 / VAR_2) % 24) << 11
       | ((VAR_14 / VAR_3) % 60) << 5
       | (VAR_14 % VAR_3) >> 1);
 *VAR_12 = FUNC_1((VAR_18 << 9) | (VAR_17 << 5) | (VAR_15 + 1));
 if (VAR_13)
  *VAR_13 = (VAR_10->tv_sec & 1) * 100 + VAR_10->tv_nsec / 10000000;
}
