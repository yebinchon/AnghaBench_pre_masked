
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_context ;
struct TYPE_4__ {scalar_t__ mallocFailed; scalar_t__ tooBig; } ;
typedef TYPE_1__ StrAccum ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_5(sqlite3_context *VAR_1){
  StrAccum *VAR_2;
  VAR_2 = FUNC_1(VAR_1, 0);
  if( VAR_2 ){
    if( VAR_2->tooBig ){
      FUNC_3(VAR_1);
    }else if( VAR_2->mallocFailed ){
      FUNC_2(VAR_1);
    }else{
      FUNC_4(VAR_1, FUNC_0(VAR_2), -1,
                          VAR_0);
    }
  }
}
