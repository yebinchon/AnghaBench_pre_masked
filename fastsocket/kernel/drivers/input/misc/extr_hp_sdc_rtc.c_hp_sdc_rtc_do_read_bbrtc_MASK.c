
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct semaphore {int dummy; } ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_wday; int tm_hour; int tm_min; int tm_sec; } ;
struct TYPE_4__ {struct semaphore* semaphore; } ;
struct TYPE_5__ {int endidx; int* seq; TYPE_1__ act; } ;
typedef TYPE_2__ hp_sdc_transaction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct semaphore*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct semaphore*) ;
 int FUNC_3 (struct rtc_time*,int ,int) ;

__attribute__((used)) static int FUNC_4 (struct rtc_time *VAR_5)
{
 struct semaphore VAR_6;
 hp_sdc_transaction VAR_7;
 uint8_t VAR_8[91];
 int VAR_9;

 VAR_9 = 0;
 while (VAR_9 < 91) {
  VAR_8[VAR_9++] = VAR_1 |
   VAR_2 | VAR_0;
  VAR_8[VAR_9++] = 0x01;
    VAR_8[VAR_9] = VAR_9 / 7;
  VAR_9++;
  VAR_8[VAR_9++] = VAR_4;
  VAR_8[VAR_9++] = 2;
  VAR_9++; VAR_9++;
 }
 VAR_8[84] |= VAR_3;
 VAR_7.endidx = 91;
 VAR_7.seq = VAR_8;
 VAR_7.act.semaphore = &VAR_6;
 FUNC_2(&VAR_6);

 if (FUNC_1(&VAR_7)) return -1;

 FUNC_0(&VAR_6);


 if (!((VAR_8[83] | VAR_8[90] | VAR_8[69] | VAR_8[76] |
        VAR_8[55] | VAR_8[62] | VAR_8[34] | VAR_8[41] |
        VAR_8[20] | VAR_8[27] | VAR_8[6] | VAR_8[13]) & 0x0f))
  return -1;

 FUNC_3(VAR_5, 0, sizeof(struct rtc_time));
 VAR_5->tm_year = (VAR_8[83] & 0x0f) + (VAR_8[90] & 0x0f) * 10;
 VAR_5->tm_mon = (VAR_8[69] & 0x0f) + (VAR_8[76] & 0x0f) * 10;
 VAR_5->tm_mday = (VAR_8[55] & 0x0f) + (VAR_8[62] & 0x0f) * 10;
 VAR_5->tm_wday = (VAR_8[48] & 0x0f);
 VAR_5->tm_hour = (VAR_8[34] & 0x0f) + (VAR_8[41] & 0x0f) * 10;
 VAR_5->tm_min = (VAR_8[20] & 0x0f) + (VAR_8[27] & 0x0f) * 10;
 VAR_5->tm_sec = (VAR_8[6] & 0x0f) + (VAR_8[13] & 0x0f) * 10;

 return 0;
}
