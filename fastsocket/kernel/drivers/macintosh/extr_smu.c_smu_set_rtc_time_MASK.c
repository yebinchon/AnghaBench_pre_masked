
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_simple_cmd {int dummy; } ;
struct rtc_time {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; int tm_wday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int * VAR_3 ;
 int FUNC_1 (struct smu_simple_cmd*,int ,int,int *,int *,int ,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct smu_simple_cmd*) ;

int FUNC_3(struct rtc_time *VAR_4, int VAR_5)
{
 struct smu_simple_cmd VAR_6;
 int VAR_7;

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_1(&VAR_6, VAR_1, 8, ((void*)0), ((void*)0),
         VAR_2,
         FUNC_0(VAR_4->tm_sec),
         FUNC_0(VAR_4->tm_min),
         FUNC_0(VAR_4->tm_hour),
         VAR_4->tm_wday,
         FUNC_0(VAR_4->tm_mday),
         FUNC_0(VAR_4->tm_mon) + 1,
         FUNC_0(VAR_4->tm_year - 100));
 if (VAR_7)
  return VAR_7;
 FUNC_2(&VAR_6);

 return 0;
}
