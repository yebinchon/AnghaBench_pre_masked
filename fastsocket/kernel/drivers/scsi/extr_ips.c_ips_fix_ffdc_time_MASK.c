
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef long time_t ;
struct TYPE_5__ {long hour; long minute; long second; int yearH; int yearL; int month; long day; } ;
struct TYPE_6__ {TYPE_1__ ffdc; } ;
struct TYPE_7__ {TYPE_2__ cmd; } ;
typedef TYPE_3__ ips_scb_t ;
typedef int ips_ha_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(ips_ha_t * VAR_6, ips_scb_t * VAR_7, time_t VAR_8)
{
 long VAR_9;
 long VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14[2] = { VAR_1, VAR_0 };
 int VAR_15[12][2] = { {31, 31},
 {28, 29},
 {31, 31},
 {30, 30},
 {31, 31},
 {30, 30},
 {31, 31},
 {31, 31},
 {30, 30},
 {31, 31},
 {30, 30},
 {31, 31}
 };

 FUNC_2("ips_fix_ffdc_time", 1);

 VAR_9 = VAR_8 / VAR_3;
 VAR_10 = VAR_8 % VAR_3;

 VAR_7->cmd.ffdc.hour = (VAR_10 / VAR_4);
 VAR_10 = VAR_10 % VAR_4;
 VAR_7->cmd.ffdc.minute = (VAR_10 / VAR_5);
 VAR_7->cmd.ffdc.second = (VAR_10 % VAR_5);

 VAR_12 = VAR_2;
 while (VAR_9 < 0 || VAR_9 >= VAR_14[VAR_13 = FUNC_0(VAR_12)]) {
  int VAR_16;

  VAR_16 = VAR_12 + (VAR_9 / VAR_1);
  if (VAR_9 < 0)
   --VAR_16;
  VAR_9 -= (VAR_16 - VAR_12) * VAR_1 +
      FUNC_1(VAR_16 - 1) -
      FUNC_1(VAR_12 - 1);
  VAR_12 = VAR_16;
 }

 VAR_7->cmd.ffdc.yearH = VAR_12 / 100;
 VAR_7->cmd.ffdc.yearL = VAR_12 % 100;

 for (VAR_11 = 0; VAR_9 >= VAR_15[VAR_11][VAR_13]; ++VAR_11)
  VAR_9 -= VAR_15[VAR_11][VAR_13];

 VAR_7->cmd.ffdc.month = VAR_11 + 1;
 VAR_7->cmd.ffdc.day = VAR_9 + 1;
}
