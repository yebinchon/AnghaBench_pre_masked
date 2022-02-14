
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* pStart; void* pEnd; scalar_t__ nFreeSlot; int bUnderPressure; scalar_t__ nReserve; scalar_t__ nSlot; int mutex; TYPE_1__* pFree; } ;
struct TYPE_3__ {struct TYPE_3__* pNext; } ;
typedef TYPE_1__ PgFreeslot ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(void *VAR_5){
  int VAR_6 = 0;
  if( VAR_5==0 ) return 0;
  if( VAR_5>=VAR_4 && VAR_5<VAR_4 ){
    PgFreeslot *VAR_7;
    FUNC_6(VAR_4);
    FUNC_4(VAR_3, -1);
    VAR_7 = (PgFreeslot*)VAR_5;
    VAR_7->pNext = VAR_4;
    VAR_4 = VAR_7;
    VAR_4++;
    VAR_4 = VAR_4<VAR_4;
    FUNC_0( VAR_4<=VAR_4 );
    FUNC_7(VAR_4);
  }else{
    FUNC_0( FUNC_2(VAR_5, VAR_1) );
    FUNC_3(VAR_5, VAR_0);
    VAR_6 = FUNC_1(VAR_5);

    FUNC_6(VAR_4);
    FUNC_4(VAR_2, -VAR_6);
    FUNC_7(VAR_4);

    FUNC_5(VAR_5);
  }
  return VAR_6;
}
