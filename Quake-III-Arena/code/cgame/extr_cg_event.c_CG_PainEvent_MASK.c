
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int painTime; int painDirection; } ;
struct TYPE_6__ {int number; } ;
struct TYPE_8__ {TYPE_2__ pe; TYPE_1__ currentState; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_9__ {int time; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (int *,int ,int ,int ) ;

void FUNC_2( centity_t *VAR_2, int VAR_3 ) {
 char *VAR_4;


 if ( VAR_1.time - VAR_2->pe.painTime < 500 ) {
  return;
 }

 if ( VAR_3 < 25 ) {
  VAR_4 = "*pain25_1.wav";
 } else if ( VAR_3 < 50 ) {
  VAR_4 = "*pain50_1.wav";
 } else if ( VAR_3 < 75 ) {
  VAR_4 = "*pain75_1.wav";
 } else {
  VAR_4 = "*pain100_1.wav";
 }
 FUNC_1( ((void*)0), VAR_2->currentState.number, VAR_0,
  FUNC_0( VAR_2->currentState.number, VAR_4 ) );


 VAR_2->pe.painTime = VAR_1.time;
 VAR_2->pe.painDirection ^= 1;
}
