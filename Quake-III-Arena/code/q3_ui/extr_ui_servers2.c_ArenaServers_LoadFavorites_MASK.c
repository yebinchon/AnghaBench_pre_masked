
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pingtime; int adrstr; } ;
typedef TYPE_1__ servernode_t ;
typedef int qboolean ;
struct TYPE_8__ {size_t numfavoriteaddresses; int * favoriteaddresses; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 TYPE_6__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (char*,int) ;

void FUNC_8( void )
{
 int VAR_8;
 int VAR_9;
 int VAR_10;
 char VAR_11[VAR_2];
 char VAR_12[VAR_0];
 servernode_t VAR_13[VAR_1];
 qboolean VAR_14;

 VAR_14 = VAR_6;
 VAR_11[0] = '\0';


 FUNC_3( VAR_13, VAR_4, sizeof(servernode_t)*VAR_1 );
 VAR_10 = VAR_5;


 FUNC_4( VAR_4, 0, sizeof(servernode_t)*VAR_1 );
 VAR_5 = 0;


 for (VAR_8=0; VAR_8<VAR_1; VAR_8++)
 {
  FUNC_6( FUNC_7("server%d",VAR_8+1), VAR_12, VAR_0 );
  if (!VAR_12[0])
   continue;



  if (VAR_12[0] < '0' || VAR_12[0] > '9')
   continue;




  FUNC_5( VAR_3.favoriteaddresses[VAR_5], VAR_12 );


  for (VAR_9=0; VAR_9<VAR_10; VAR_9++)
   if (!FUNC_1( VAR_13[VAR_9].adrstr, VAR_12 ))
    break;

  if (VAR_9 < VAR_10)
  {

   FUNC_3( &VAR_4[VAR_5], &VAR_13[VAR_9], sizeof(servernode_t) );
   VAR_14 = VAR_7;
  }
  else
  {

   FUNC_2( VAR_4[VAR_5].adrstr, VAR_12, VAR_0 );
   VAR_4[VAR_5].pingtime = FUNC_0();
  }

  VAR_5++;
 }

 VAR_3.numfavoriteaddresses = VAR_5;

 if (!VAR_14)
 {


  VAR_5 = 0;
 }
}
