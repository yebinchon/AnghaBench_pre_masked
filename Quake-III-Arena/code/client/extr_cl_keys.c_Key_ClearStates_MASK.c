
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ repeats; scalar_t__ down; } ;


 int FUNC_0 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

void FUNC_1 (void)
{
 int VAR_4;

 VAR_1 = VAR_3;

 for ( VAR_4=0 ; VAR_4 < VAR_0 ; VAR_4++ ) {
  if ( VAR_2[VAR_4].down ) {
   FUNC_0( VAR_4, VAR_3, 0 );

  }
  VAR_2[VAR_4].down = 0;
  VAR_2[VAR_4].repeats = 0;
 }
}
