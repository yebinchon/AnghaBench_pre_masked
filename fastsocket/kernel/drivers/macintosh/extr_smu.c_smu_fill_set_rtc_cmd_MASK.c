
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_cmd_buf {int cmd; int length; int* data; } ;
struct rtc_time {int tm_wday; scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct smu_cmd_buf *VAR_0,
     struct rtc_time *VAR_1)
{
 VAR_0->cmd = 0x8e;
 VAR_0->length = 8;
 VAR_0->data[0] = 0x80;
 VAR_0->data[1] = FUNC_0(VAR_1->tm_sec);
 VAR_0->data[2] = FUNC_0(VAR_1->tm_min);
 VAR_0->data[3] = FUNC_0(VAR_1->tm_hour);
 VAR_0->data[4] = VAR_1->tm_wday;
 VAR_0->data[5] = FUNC_0(VAR_1->tm_mday);
 VAR_0->data[6] = FUNC_0(VAR_1->tm_mon) + 1;
 VAR_0->data[7] = FUNC_0(VAR_1->tm_year - 100);
}
