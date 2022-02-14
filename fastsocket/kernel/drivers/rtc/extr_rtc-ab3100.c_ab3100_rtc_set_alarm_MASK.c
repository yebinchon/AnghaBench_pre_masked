
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct rtc_wkalrm {int enabled; int time; } ;
struct device {int dummy; } ;
struct ab3100 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ab3100*,int ,int,int) ;
 int FUNC_1 (struct ab3100*,int ,unsigned char) ;
 struct ab3100* FUNC_2 (struct device*) ;
 int FUNC_3 (int *,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 struct ab3100 *VAR_8 = FUNC_2(VAR_6);
 u8 VAR_9[] = {VAR_0, VAR_1, VAR_2, VAR_3};
 unsigned char VAR_10[4];
 unsigned long VAR_11;
 u64 VAR_12;
 int VAR_13;
 int VAR_14;

 FUNC_3(&VAR_7->time, &VAR_11);
 VAR_12 = (u64) VAR_11 * VAR_5 * 2;
 VAR_10[0] = (VAR_12 >> 16) & 0xFF;
 VAR_10[1] = (VAR_12 >> 24) & 0xFF;
 VAR_10[2] = (VAR_12 >> 32) & 0xFF;
 VAR_10[3] = (VAR_12 >> 40) & 0xFF;


 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
  VAR_13 = FUNC_1(VAR_8,
       VAR_9[VAR_14], VAR_10[VAR_14]);
  if (VAR_13)
   return VAR_13;
 }

 return FUNC_0(VAR_8,
         VAR_4, ~(1 << 2),
         VAR_7->enabled << 2);
}
