
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mutex; } ;
struct TYPE_4__ {int (* xFree ) (void*) ;} ;
struct TYPE_5__ {TYPE_1__ m; scalar_t__ bMemstat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;

void FUNC_9(void *VAR_6){
  if( VAR_6==0 ) return;
  FUNC_0( FUNC_3(VAR_6, VAR_0) );
  FUNC_0( FUNC_2(VAR_6, VAR_1) );
  if( VAR_5.bMemstat ){
    FUNC_5(VAR_4);
    FUNC_4(VAR_3, -FUNC_1(VAR_6));
    FUNC_4(VAR_2, -1);
    VAR_5.m.xFree(VAR_6);
    FUNC_6(VAR_4);
  }else{
    VAR_5.m.xFree(VAR_6);
  }
}
