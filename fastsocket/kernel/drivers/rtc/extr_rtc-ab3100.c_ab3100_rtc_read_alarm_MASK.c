
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct rtc_wkalrm {int enabled; int time; scalar_t__ pending; } ;
struct device {int dummy; } ;
struct ab3100 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ab3100*,int ,int*) ;
 int FUNC_1 (struct ab3100*,int ,int*,int) ;
 struct ab3100* FUNC_2 (struct device*) ;
 int FUNC_3 (unsigned long,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct ab3100 *VAR_5 = FUNC_2(VAR_3);
 unsigned long VAR_6;
 u64 VAR_7;
 u8 VAR_8[6];
 u8 VAR_9;
 int VAR_10;


 VAR_10 = FUNC_0(VAR_5,
      VAR_1, &VAR_9);
 if (VAR_10)
  return VAR_10;
 if (VAR_9 & 0x04)
  VAR_4->enabled = 1;
 else
  VAR_4->enabled = 0;

 VAR_4->pending = 0;

 VAR_10 = FUNC_1(VAR_5,
           VAR_0, VAR_8, 4);
 if (VAR_10)
  return VAR_10;
 VAR_7 = ((u64) VAR_8[3] << 40) | ((u64) VAR_8[2] << 32) |
  ((u64) VAR_8[1] << 24) | ((u64) VAR_8[0] << 16);
 VAR_6 = (unsigned long) (VAR_7 / (u64) (VAR_2 * 2));

 FUNC_3(VAR_6, &VAR_4->time);

 return FUNC_4(&VAR_4->time);
}
