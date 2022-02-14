
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int widthInChars; } ;
struct TYPE_4__ {int keyCatchers; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;

void FUNC_2 (void) {
 VAR_5 = FUNC_1( VAR_3, VAR_0 );
 if ( VAR_5 < 0 || VAR_5 >= VAR_2 ) {
  VAR_5 = -1;
  return;
 }
 VAR_6 = VAR_8;
 FUNC_0( &VAR_4 );
 VAR_4.widthInChars = 30;
 VAR_7.keyCatchers ^= VAR_1;
}
