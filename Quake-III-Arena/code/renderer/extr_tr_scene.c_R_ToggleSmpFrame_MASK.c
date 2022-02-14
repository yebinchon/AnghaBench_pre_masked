
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ used; } ;
struct TYPE_8__ {TYPE_1__ commands; } ;
struct TYPE_7__ {scalar_t__ integer; } ;
struct TYPE_6__ {int smpFrame; } ;


 TYPE_4__** VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_3__* VAR_9 ;
 TYPE_2__ VAR_10 ;

void FUNC_0( void ) {
 if ( VAR_9->integer ) {


  VAR_10.smpFrame ^= 1;
 } else {
  VAR_10.smpFrame = 0;
 }

 VAR_0[VAR_10.smpFrame]->commands.used = 0;

 VAR_2 = 0;

 VAR_5 = 0;
 VAR_1 = 0;

 VAR_6 = 0;
 VAR_3 = 0;

 VAR_7 = 0;
 VAR_4 = 0;

 VAR_8 = 0;
}
