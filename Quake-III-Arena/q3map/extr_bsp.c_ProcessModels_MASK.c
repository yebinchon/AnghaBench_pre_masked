
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int patches; int brushes; } ;
typedef TYPE_1__ entity_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_4 (void)
{
 qboolean VAR_7;
 entity_t *VAR_8;

 VAR_7 = VAR_5;

 FUNC_0 ();

 for ( VAR_1=0 ; VAR_1< VAR_2 ; VAR_1++ ) {
  VAR_8 = &VAR_0[VAR_1];

  if ( !VAR_8->brushes && !VAR_8->patches ) {
   continue;
  }

  FUNC_3 ("############### model %i ###############\n", VAR_3);
  if (VAR_1 == 0)
   FUNC_2 ();
  else
   FUNC_1 ();

  if (!VAR_6)
   VAR_5 = VAR_4;
 }

 VAR_5 = VAR_7;
}
