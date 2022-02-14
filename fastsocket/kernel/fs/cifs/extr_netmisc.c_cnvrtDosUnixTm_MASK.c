
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
typedef int __le16 ;
struct TYPE_4__ {int Day; int Month; int Year; } ;
struct TYPE_3__ {int TwoSeconds; int Minutes; int Hours; } ;
typedef TYPE_1__ SMB_TIME ;
typedef TYPE_2__ SMB_DATE ;


 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (int,char*,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__* VAR_0 ;

struct timespec FUNC_3(__le16 VAR_1, __le16 VAR_2, int VAR_3)
{
 struct timespec VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 u16 VAR_10 = FUNC_2(VAR_1);
 u16 VAR_11 = FUNC_2(VAR_2);
 SMB_TIME *VAR_12 = (SMB_TIME *)&VAR_11;
 SMB_DATE *VAR_13 = (SMB_DATE *)&VAR_10;

 FUNC_1(1, "date %d time %d", VAR_10, VAR_11);

 VAR_5 = 2 * VAR_12->TwoSeconds;
 VAR_6 = VAR_12->Minutes;
 if ((VAR_5 > 59) || (VAR_6 > 59))
  FUNC_0(1, "illegal time min %d sec %d", VAR_6, VAR_5);
 VAR_5 += (VAR_6 * 60);
 VAR_5 += 60 * 60 * VAR_12->Hours;
 if (VAR_12->Hours > 24)
  FUNC_0(1, "illegal hours %d", VAR_12->Hours);
 VAR_7 = VAR_13->Day;
 VAR_8 = VAR_13->Month;
 if ((VAR_7 > 31) || (VAR_8 > 12)) {
  FUNC_0(1, "illegal date, month %d day: %d", VAR_8, VAR_7);
  if (VAR_8 > 12)
   VAR_8 = 12;
 }
 VAR_8 -= 1;
 VAR_7 += VAR_0[VAR_8];
 VAR_7 += 3652;
 VAR_9 = VAR_13->Year;
 VAR_7 += VAR_9 * 365;
 VAR_7 += (VAR_9/4);






 if (VAR_9 >= 120)
  VAR_7 = VAR_7 - 1;


 if (VAR_9 != 120)
  VAR_7 -= ((VAR_9 & 0x03) == 0) && (VAR_8 < 2 ? 1 : 0);
 VAR_5 += 24 * 60 * 60 * VAR_7;

 VAR_4.tv_sec = VAR_5 + VAR_3;



 VAR_4.tv_nsec = 0;
 return VAR_4;
}
