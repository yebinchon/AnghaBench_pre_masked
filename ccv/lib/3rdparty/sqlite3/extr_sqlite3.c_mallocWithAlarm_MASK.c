
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_6__ {int alarmThreshold; int nearlyFull; int mutex; } ;
struct TYPE_4__ {int (* xRoundup ) (int) ;void* (* xMalloc ) (int) ;} ;
struct TYPE_5__ {TYPE_1__ m; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 void* FUNC_8 (int) ;
 void* FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(int VAR_6, void **VAR_7){
  void *VAR_8;
  int VAR_9;
  FUNC_0( FUNC_6(VAR_4) );
  FUNC_0( VAR_6>0 );






  VAR_9 = VAR_5.m.xRoundup(VAR_6);
  FUNC_3(VAR_2, VAR_6);
  if( VAR_4>0 ){
    sqlite3_int64 VAR_10 = FUNC_5(VAR_3);
    if( VAR_10 >= VAR_4 - VAR_9 ){
      VAR_4 = 1;
      FUNC_1(VAR_9);
    }else{
      VAR_4 = 0;
    }
  }
  VAR_8 = VAR_5.m.xMalloc(VAR_9);






  if( VAR_8 ){
    VAR_9 = FUNC_2(VAR_8);
    FUNC_4(VAR_3, VAR_9);
    FUNC_4(VAR_1, 1);
  }
  *VAR_7 = VAR_8;
}
