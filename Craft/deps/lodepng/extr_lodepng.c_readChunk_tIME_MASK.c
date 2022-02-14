
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int year; unsigned char month; unsigned char day; unsigned char hour; unsigned char minute; unsigned char second; } ;
struct TYPE_5__ {int time_defined; TYPE_1__ time; } ;
typedef TYPE_2__ LodePNGInfo ;



__attribute__((used)) static unsigned FUNC_0(LodePNGInfo* VAR_0, const unsigned char* VAR_1, size_t VAR_2)
{
  if(VAR_2 != 7) return 73;

  VAR_0->time_defined = 1;
  VAR_0->time.year = 256 * VAR_1[0] + VAR_1[+ 1];
  VAR_0->time.month = VAR_1[2];
  VAR_0->time.day = VAR_1[3];
  VAR_0->time.hour = VAR_1[4];
  VAR_0->time.minute = VAR_1[5];
  VAR_0->time.second = VAR_1[6];

  return 0;
}
