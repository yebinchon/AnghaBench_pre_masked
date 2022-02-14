
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int evTime; int evValue; int evValue2; int evPtrLength; void* evPtr; int evType; } ;
typedef TYPE_1__ sysEvent_t ;
typedef int sysEventType_t ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;
 size_t VAR_4 ;

void FUNC_3( int VAR_5, sysEventType_t VAR_6, int VAR_7, int VAR_8, int VAR_9, void *VAR_10 ) {
  sysEvent_t *VAR_11;

  VAR_11 = &VAR_3[ VAR_2 & VAR_0 ];


  if ( VAR_2 - VAR_4 >= VAR_1 )
  {
    FUNC_0("Sys_QueEvent: overflow\n");

    if ( VAR_11->evPtr )
    {
      FUNC_2( VAR_11->evPtr );
    }
    VAR_4++;
  }

  VAR_2++;

  if ( VAR_5 == 0 )
  {
    VAR_5 = FUNC_1();
  }

  VAR_11->evTime = VAR_5;
  VAR_11->evType = VAR_6;
  VAR_11->evValue = VAR_7;
  VAR_11->evValue2 = VAR_8;
  VAR_11->evPtrLength = VAR_9;
  VAR_11->evPtr = VAR_10;
}
