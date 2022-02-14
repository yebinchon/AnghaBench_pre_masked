
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ucvector ;
struct TYPE_3__ {int year; unsigned char month; unsigned char day; unsigned char hour; unsigned char minute; unsigned char second; } ;
typedef TYPE_1__ LodePNGTime ;


 unsigned int FUNC_0 (int *,char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static unsigned FUNC_3(ucvector* VAR_0, const LodePNGTime* VAR_1)
{
  unsigned VAR_2 = 0;
  unsigned char* VAR_3 = (unsigned char*)FUNC_2(7);
  if(!VAR_3) return 83;
  VAR_3[0] = (unsigned char)(VAR_1->year / 256);
  VAR_3[1] = (unsigned char)(VAR_1->year % 256);
  VAR_3[2] = VAR_1->month;
  VAR_3[3] = VAR_1->day;
  VAR_3[4] = VAR_1->hour;
  VAR_3[5] = VAR_1->minute;
  VAR_3[6] = VAR_1->second;
  VAR_2 = FUNC_0(VAR_0, "tIME", VAR_3, 7);
  FUNC_1(VAR_3);
  return VAR_2;
}
