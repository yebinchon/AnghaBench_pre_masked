
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct ab3100 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ab3100*,int ,int*) ;
 int FUNC_1 (struct ab3100*,int ,int*,int) ;
 struct ab3100* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (unsigned long,struct rtc_time*) ;
 int FUNC_5 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, struct rtc_time *VAR_5)
{
 struct ab3100 *VAR_6 = FUNC_2(VAR_4);
 unsigned long VAR_7;
 u8 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_6,
      VAR_0, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (!(VAR_8 & 0x01)) {
  FUNC_3(VAR_4, "clock not set (lost power)");
  return -VAR_3;
 } else {
  u64 VAR_10;
  u8 VAR_11[6];


  VAR_9 = FUNC_1(VAR_6,
            VAR_2,
            VAR_11, 6);
  if (VAR_9 != 0)
   return VAR_9;

  VAR_10 = ((u64) VAR_11[5] << 40) | ((u64) VAR_11[4] << 32) |
   ((u64) VAR_11[3] << 24) | ((u64) VAR_11[2] << 16) |
   ((u64) VAR_11[1] << 8) | (u64) VAR_11[0];
  VAR_7 = (unsigned long) (VAR_10 /
     (u64) (VAR_1 * 2));
 }

 FUNC_4(VAR_7, VAR_5);

 return FUNC_5(VAR_5);
}
