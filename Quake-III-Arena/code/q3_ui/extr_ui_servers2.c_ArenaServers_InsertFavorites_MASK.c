
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numfavoriteaddresses; int * favoriteaddresses; } ;
struct TYPE_3__ {int adrstr; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

void FUNC_4( void )
{
 int VAR_4;
 int VAR_5;
 char VAR_6[VAR_0];


 VAR_6[0] = '\0';
 FUNC_2( VAR_6, "hostname", "No Response" );
 for (VAR_4=0; VAR_4<VAR_1.numfavoriteaddresses; VAR_4++)
 {

  for (VAR_5=0; VAR_5<VAR_3; VAR_5++)
   if (!FUNC_3(VAR_1.favoriteaddresses[VAR_4],VAR_2[VAR_5].adrstr))
    break;

  if ( VAR_5 >= VAR_3)
  {

   FUNC_0( VAR_1.favoriteaddresses[VAR_4], VAR_6, FUNC_1() );
  }
 }
}
