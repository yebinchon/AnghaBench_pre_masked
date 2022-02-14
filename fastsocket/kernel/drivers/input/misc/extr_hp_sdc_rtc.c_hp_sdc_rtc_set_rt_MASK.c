
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_3__ {int endidx; int* seq; } ;
typedef TYPE_1__ hp_sdc_transaction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1 (struct timeval *VAR_4)
{
 uint32_t VAR_5;
 unsigned int VAR_6;
 hp_sdc_transaction VAR_7;
 uint8_t VAR_8[11] = {
  VAR_1 | VAR_0,
  VAR_3, 3, 0, 0, 0,
  VAR_1 | VAR_0,
  VAR_2, 2, 0, 0
 };

 VAR_7.endidx = 10;

 if (0xffff < VAR_4->tv_sec / 86400) return -1;
 VAR_6 = VAR_4->tv_sec / 86400;
 if (0xffff < VAR_4->tv_usec / 1000000 / 86400) return -1;
 VAR_6 += ((VAR_4->tv_sec % 86400) + VAR_4->tv_usec / 1000000) / 86400;
 if (VAR_6 > 0xffff) return -1;

 if (0xffffff < VAR_4->tv_sec) return -1;
 VAR_5 = VAR_4->tv_sec * 100;
 if (0xffffff < VAR_4->tv_usec / 10000) return -1;
 VAR_5 += VAR_4->tv_usec / 10000;
 if (VAR_5 > 0xffffff) return -1;

 VAR_8[3] = (uint8_t)(VAR_5 & 0xff);
 VAR_8[4] = (uint8_t)((VAR_5 >> 8) & 0xff);
 VAR_8[5] = (uint8_t)((VAR_5 >> 16) & 0xff);

 VAR_8[9] = (uint8_t)(VAR_6 & 0xff);
 VAR_8[10] = (uint8_t)((VAR_6 >> 8) & 0xff);

 VAR_7.seq = VAR_8;

 if (FUNC_0(&VAR_7)) return -1;
 return 0;
}
