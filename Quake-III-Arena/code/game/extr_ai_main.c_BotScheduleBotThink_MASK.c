
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int integer; } ;
struct TYPE_3__ {int botthink_residual; int inuse; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__** VAR_2 ;
 int VAR_3 ;

void FUNC_0(void) {
 int VAR_4, VAR_5;

 VAR_5 = 0;

 for( VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ ) {
  if( !VAR_2[VAR_4] || !VAR_2[VAR_4]->inuse ) {
   continue;
  }

  VAR_2[VAR_4]->botthink_residual = VAR_1.integer * VAR_5 / VAR_3;
  VAR_5++;
 }
}
