
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int st ;
struct TYPE_5__ {TYPE_1__* pack; struct TYPE_5__* next; } ;
typedef TYPE_2__ searchpath_t ;
typedef scalar_t__ qboolean ;
struct TYPE_4__ {scalar_t__ checksum; } ;


 int FUNC_0 (char*,int,char*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (char*,int,char*) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 char** VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (char*,char*) ;

qboolean FUNC_5( char *VAR_7, int VAR_8, qboolean VAR_9 ) {
 searchpath_t *VAR_10;
 qboolean VAR_11, VAR_12;
 int VAR_13;

 if ( !VAR_1 ) {
  return VAR_5;
 }

 *VAR_7 = 0;

 for ( VAR_13 = 0 ; VAR_13 < VAR_1 ; VAR_13++ ) {

  VAR_12 = VAR_5;
  VAR_11 = VAR_5;


  if ( FUNC_2(VAR_3[VAR_13], "baseq3") || FUNC_2(VAR_3[VAR_13], "missionpack") ) {
   continue;
  }

  for ( VAR_10 = VAR_2 ; VAR_10 ; VAR_10 = VAR_10->next ) {
   if ( VAR_10->pack && VAR_10->pack->checksum == VAR_4[VAR_13] ) {
    VAR_11 = VAR_6;
    break;
   }
  }

  if ( !VAR_11 && VAR_3[VAR_13] && *VAR_3[VAR_13] ) {


      if (VAR_9)
      {

        FUNC_3( VAR_7, VAR_8, "@");
        FUNC_3( VAR_7, VAR_8, VAR_3[VAR_13] );
        FUNC_3( VAR_7, VAR_8, ".pk3" );


        FUNC_3( VAR_7, VAR_8, "@");

        if ( FUNC_1( FUNC_4( "%s.pk3", VAR_3[VAR_13] ) ) )
        {
          char VAR_14[VAR_0];


          FUNC_0( VAR_14, sizeof( VAR_14 ), "%s.%08x.pk3", VAR_3[VAR_13], VAR_4[VAR_13] );
          FUNC_3( VAR_7, VAR_8, VAR_14 );
        } else
        {
          FUNC_3( VAR_7, VAR_8, VAR_3[VAR_13] );
          FUNC_3( VAR_7, VAR_8, ".pk3" );
        }
      }
      else
      {
        FUNC_3( VAR_7, VAR_8, VAR_3[VAR_13] );
     FUNC_3( VAR_7, VAR_8, ".pk3" );

        if ( FUNC_1( FUNC_4( "%s.pk3", VAR_3[VAR_13] ) ) )
        {
          FUNC_3( VAR_7, VAR_8, " (local file exists with wrong checksum)");
        }
        FUNC_3( VAR_7, VAR_8, "\n");
      }
  }
 }

 if ( *VAR_7 ) {
  return VAR_6;
 }

 return VAR_5;
}
