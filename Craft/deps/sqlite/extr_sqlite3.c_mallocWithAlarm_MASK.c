
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ alarmCallback; int alarmThreshold; int nearlyFull; int mutex; } ;
struct TYPE_4__ {int (* xRoundup ) (int) ;void* (* xMalloc ) (int) ;} ;
struct TYPE_5__ {TYPE_1__ m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 void* FUNC_8 (int) ;
 void* FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(int VAR_5, void **VAR_6){
  int VAR_7;
  void *VAR_8;
  FUNC_0( FUNC_6(VAR_3) );
  VAR_7 = VAR_4.m.xRoundup(VAR_5);
  FUNC_4(VAR_1, VAR_5);
  if( VAR_3!=0 ){
    int VAR_9 = FUNC_5(VAR_2);
    if( VAR_9 >= VAR_3 - VAR_7 ){
      VAR_3 = 1;
      FUNC_1(VAR_7);
    }else{
      VAR_3 = 0;
    }
  }
  VAR_8 = VAR_4.m.xMalloc(VAR_7);






  if( VAR_8 ){
    VAR_7 = FUNC_2(VAR_8);
    FUNC_3(VAR_2, VAR_7);
    FUNC_3(VAR_0, 1);
  }
  *VAR_6 = VAR_8;
  return VAR_7;
}
