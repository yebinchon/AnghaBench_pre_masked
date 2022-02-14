
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
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1 (struct timeval *VAR_3)
{
 uint32_t VAR_4;
 hp_sdc_transaction VAR_5;
 uint8_t VAR_6[5] = {
  VAR_1 | VAR_0,
  VAR_2, 2, 0, 0
 };

 VAR_5.endidx = 4;

 if (0xffff < VAR_3->tv_sec) return -1;
 VAR_4 = VAR_3->tv_sec * 100;
 if (0xffff < VAR_3->tv_usec / 10000) return -1;
 VAR_4 += VAR_3->tv_usec / 10000;
 if (VAR_4 > 0xffff) return -1;

 VAR_6[3] = (uint8_t)(VAR_4 & 0xff);
 VAR_6[4] = (uint8_t)((VAR_4 >> 8) & 0xff);

 VAR_5.seq = VAR_6;

 if (FUNC_0(&VAR_5)) return -1;
 return 0;
}
