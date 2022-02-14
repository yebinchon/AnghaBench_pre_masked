
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int times ;
typedef scalar_t__ time_t ;
struct tm {int tm_year; int tm_wday; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct TYPE_8__ {scalar_t__ Status; } ;
struct TYPE_7__ {int resd; int regionid; int dotsel; int mshnmi; int sysres; int sndres; int cdres; int* SMEM; scalar_t__ basetime; scalar_t__ clocksync; } ;
struct TYPE_6__ {int* OREG; } ;
struct TYPE_5__ {int tm_year; int tm_wday; int tm_mday; int tm_mon; int tm_sec; int tm_min; int tm_hour; } ;


 TYPE_4__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__*,struct tm*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,struct tm*) ;
 int FUNC_3 (struct tm*,int ,int) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_5(void) {

   int VAR_9;
   struct tm VAR_10;
   u8 VAR_11[4];
   time_t VAR_12;

   VAR_4->OREG[0] = 0x80 | (VAR_3->resd << 6);



   if (VAR_3->clocksync) {
      VAR_12 = VAR_3->basetime + ((u64)VAR_5 * 1001 / 60000);
   } else {
      VAR_12 = FUNC_4(((void*)0));
   }







   FUNC_2(&VAR_12, &VAR_10);

   VAR_11[0] = (1900 + VAR_10.tm_year) / 1000;
   VAR_11[1] = ((1900 + VAR_10.tm_year) % 1000) / 100;
   VAR_11[2] = (((1900 + VAR_10.tm_year) % 1000) % 100) / 10;
   VAR_11[3] = (((1900 + VAR_10.tm_year) % 1000) % 100) % 10;
   VAR_4->OREG[1] = (VAR_11[0] << 4) | VAR_11[1];
   VAR_4->OREG[2] = (VAR_11[2] << 4) | VAR_11[3];
   VAR_4->OREG[3] = (VAR_10.tm_wday << 4) | (VAR_10.tm_mon + 1);
   VAR_4->OREG[4] = ((VAR_10.tm_mday / 10) << 4) | (VAR_10.tm_mday % 10);
   VAR_4->OREG[5] = ((VAR_10.tm_hour / 10) << 4) | (VAR_10.tm_hour % 10);
   VAR_4->OREG[6] = ((VAR_10.tm_min / 10) << 4) | (VAR_10.tm_min % 10);
   VAR_4->OREG[7] = ((VAR_10.tm_sec / 10) << 4) | (VAR_10.tm_sec % 10);

   if(VAR_0.Status == VAR_2 || VAR_0.Status == VAR_1) {
    VAR_6.tm_year=0x62;
    VAR_6.tm_wday=0x04;
    VAR_6.tm_mday=0x01;
    VAR_6.tm_mon=0;
    VAR_8 = ((VAR_5 / 60) + VAR_7);

    VAR_6.tm_sec=VAR_8 % 60;
    VAR_6.tm_min=VAR_8/60;
    VAR_6.tm_hour=VAR_6.tm_min/60;


    VAR_6.tm_min=VAR_6.tm_min % 60;
    VAR_6.tm_hour=VAR_6.tm_hour % 24;

    VAR_11[0] = (1900 + VAR_6.tm_year) / 1000;
    VAR_11[1] = ((1900 + VAR_6.tm_year) % 1000) / 100;
    VAR_11[2] = (((1900 + VAR_6.tm_year) % 1000) % 100) / 10;
    VAR_11[3] = (((1900 + VAR_6.tm_year) % 1000) % 100) % 10;
    VAR_4->OREG[1] = (VAR_11[0] << 4) | VAR_11[1];
    VAR_4->OREG[2] = (VAR_11[2] << 4) | VAR_11[3];
    VAR_4->OREG[3] = (VAR_6.tm_wday << 4) | (VAR_6.tm_mon + 1);
    VAR_4->OREG[4] = ((VAR_6.tm_mday / 10) << 4) | (VAR_6.tm_mday % 10);
    VAR_4->OREG[5] = ((VAR_6.tm_hour / 10) << 4) | (VAR_6.tm_hour % 10);
    VAR_4->OREG[6] = ((VAR_6.tm_min / 10) << 4) | (VAR_6.tm_min % 10);
    VAR_4->OREG[7] = ((VAR_6.tm_sec / 10) << 4) | (VAR_6.tm_sec % 10);
   }


   VAR_4->OREG[8] = 0;
   VAR_4->OREG[9] = VAR_3->regionid;
   VAR_4->OREG[10] = 0x34|(VAR_3->dotsel<<6)|(VAR_3->mshnmi<<3)|(VAR_3->sysres<<1)|VAR_3->sndres;



   VAR_4->OREG[11] = VAR_3->cdres << 6;


   for(VAR_9 = 0;VAR_9 < 4;VAR_9++)
      VAR_4->OREG[12+VAR_9] = VAR_3->SMEM[VAR_9];

   VAR_4->OREG[31] = 0x10;
}
