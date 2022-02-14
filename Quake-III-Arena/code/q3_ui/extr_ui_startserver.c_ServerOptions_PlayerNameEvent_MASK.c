
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ generic; } ;
typedef TYPE_2__ menutext_s ;
struct TYPE_6__ {int newBotIndex; int * playerNameBuffers; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void FUNC_1( void* VAR_2, int VAR_3 ) {
 int VAR_4;

 if( VAR_3 != VAR_0 ) {
  return;
 }
 VAR_4 = ((menutext_s*)VAR_2)->generic.id;
 VAR_1.newBotIndex = VAR_4;
 FUNC_0( VAR_1.playerNameBuffers[VAR_4] );
}
