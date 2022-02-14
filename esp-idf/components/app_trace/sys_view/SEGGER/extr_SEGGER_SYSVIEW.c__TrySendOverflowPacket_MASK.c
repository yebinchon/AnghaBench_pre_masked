
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U8 ;
typedef void* U32 ;
struct TYPE_2__ {void* LastTxTimeStamp; void* DropCount; int EnableState; } ;
typedef void* I32 ;


 int VAR_0 ;
 int FUNC_0 (int *,void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int *,int) ;
 void* FUNC_3 () ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_4(void) {
  U32 VAR_3;
  I32 VAR_4;
  int VAR_5;
  U8 VAR_6[11];
  U8* VAR_7;

  VAR_6[0] = VAR_1;
  VAR_7 = &VAR_6[1];
  FUNC_0(VAR_7, VAR_2.DropCount);



  VAR_3 = FUNC_3();
  VAR_4 = VAR_3 - VAR_2.LastTxTimeStamp;
  FUNC_1(VAR_4);
  FUNC_0(VAR_7, VAR_4);



  VAR_5 = FUNC_2(VAR_0, VAR_6, VAR_7 - VAR_6);
  if (VAR_5) {
    VAR_2.LastTxTimeStamp = VAR_3;
    VAR_2.EnableState--;
  } else {
    VAR_2.DropCount++;
  }

  return VAR_5;
}
