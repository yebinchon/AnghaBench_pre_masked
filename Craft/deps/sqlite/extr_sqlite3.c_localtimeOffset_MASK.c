
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; } ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;
typedef int sLocal ;
typedef int i64 ;
struct TYPE_5__ {int Y; int M; int D; double s; int iJD; int validYMD; int validHMS; scalar_t__ validTZ; scalar_t__ validJD; scalar_t__ m; scalar_t__ h; scalar_t__ tz; } ;
typedef TYPE_1__ DateTime ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct tm*,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__*,struct tm*) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static sqlite3_int64 FUNC_5(
  DateTime *VAR_2,
  sqlite3_context *VAR_3,
  int *VAR_4
){
  DateTime VAR_5, VAR_6;
  time_t VAR_7;
  struct tm VAR_8;


  FUNC_2(&VAR_8, 0, sizeof(VAR_8));

  VAR_5 = *VAR_2;
  FUNC_1(&VAR_5);
  if( VAR_5.Y<1971 || VAR_5.Y>=2038 ){
    VAR_5.Y = 2000;
    VAR_5.M = 1;
    VAR_5.D = 1;
    VAR_5.h = 0;
    VAR_5.m = 0;
    VAR_5.s = 0.0;
  } else {
    int VAR_9 = (int)(VAR_5.s + 0.5);
    VAR_5.s = VAR_9;
  }
  VAR_5.tz = 0;
  VAR_5.validJD = 0;
  FUNC_0(&VAR_5);
  VAR_7 = (time_t)(VAR_5.iJD/1000 - 21086676*(i64)10000);
  if( FUNC_3(&VAR_7, &VAR_8) ){
    FUNC_4(VAR_3, "local time unavailable", -1);
    *VAR_4 = VAR_0;
    return 0;
  }
  VAR_6.Y = VAR_8.tm_year + 1900;
  VAR_6.M = VAR_8.tm_mon + 1;
  VAR_6.D = VAR_8.tm_mday;
  VAR_6.h = VAR_8.tm_hour;
  VAR_6.m = VAR_8.tm_min;
  VAR_6.s = VAR_8.tm_sec;
  VAR_6.validYMD = 1;
  VAR_6.validHMS = 1;
  VAR_6.validJD = 0;
  VAR_6.validTZ = 0;
  FUNC_0(&VAR_6);
  *VAR_4 = VAR_1;
  return VAR_6.iJD - VAR_5.iJD;
}
