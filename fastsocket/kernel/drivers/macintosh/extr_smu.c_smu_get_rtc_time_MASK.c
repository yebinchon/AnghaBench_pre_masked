
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_simple_cmd {int * buffer; } ;
struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; void* tm_wday; void* tm_hour; void* tm_min; void* tm_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct rtc_time*,int ,int) ;
 int * VAR_3 ;
 int FUNC_2 (struct smu_simple_cmd*,int ,int,int *,int *,int ) ;
 int FUNC_3 (struct smu_simple_cmd*) ;

int FUNC_4(struct rtc_time *VAR_4, int VAR_5)
{
 struct smu_simple_cmd VAR_6;
 int VAR_7;

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 FUNC_1(VAR_4, 0, sizeof(struct rtc_time));
 VAR_7 = FUNC_2(&VAR_6, VAR_1, 1, ((void*)0), ((void*)0),
         VAR_2);
 if (VAR_7)
  return VAR_7;
 FUNC_3(&VAR_6);

 VAR_4->tm_sec = FUNC_0(VAR_6.buffer[0]);
 VAR_4->tm_min = FUNC_0(VAR_6.buffer[1]);
 VAR_4->tm_hour = FUNC_0(VAR_6.buffer[2]);
 VAR_4->tm_wday = FUNC_0(VAR_6.buffer[3]);
 VAR_4->tm_mday = FUNC_0(VAR_6.buffer[4]);
 VAR_4->tm_mon = FUNC_0(VAR_6.buffer[5]) - 1;
 VAR_4->tm_year = FUNC_0(VAR_6.buffer[6]) + 100;

 return 0;
}
