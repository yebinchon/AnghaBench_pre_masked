
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int grank_status_t ;
struct TYPE_20__ {int svFlags; } ;
struct TYPE_18__ {int clientNum; } ;
struct TYPE_24__ {TYPE_6__* client; TYPE_3__ r; int inuse; TYPE_1__ s; } ;
typedef TYPE_7__ gentity_t ;
struct TYPE_26__ {int integer; } ;
struct TYPE_25__ {int maxclients; scalar_t__ intermissiontime; int time; } ;
struct TYPE_22__ {int* persistant; } ;
struct TYPE_21__ {int netname; int enterTime; } ;
struct TYPE_19__ {int sessionTeam; int spectatorState; } ;
struct TYPE_23__ {int client_status; TYPE_5__ ps; TYPE_4__ pers; TYPE_2__ sess; } ;
struct TYPE_17__ {int integer; } ;
struct TYPE_16__ {int integer; } ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_7__*,char*) ;
 int VAR_7 ;
 TYPE_7__* VAR_8 ;
 TYPE_11__ VAR_9 ;
 TYPE_10__ VAR_10 ;
 TYPE_9__ VAR_11 ;
 TYPE_8__ VAR_12 ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int,int,int ,int,int ) ;
 int FUNC_9 (int ) ;
 int const FUNC_10 (int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int,char*) ;
 char* FUNC_13 (char*,int) ;

void FUNC_14()
{
 gentity_t* VAR_13;
 gentity_t* VAR_14;
 grank_status_t VAR_15;
 grank_status_t VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;

 if( !FUNC_6() )
 {
  FUNC_5( VAR_1 );
 }

 FUNC_7();

 if( FUNC_4() )
 {
  for( VAR_18 = 0; VAR_18 < VAR_12.maxclients; VAR_18++ )
  {
   VAR_13 = &(VAR_8[VAR_18]);
   if ( !VAR_13->inuse )
    continue;
   if ( VAR_13->client == ((void*)0) )
    continue;
   if ( VAR_13->r.svFlags & VAR_6)
   {

    FUNC_11( VAR_0, FUNC_13("kick %s\n",
     VAR_13->client->pers.netname) );
    continue;
   }

   VAR_15 = VAR_13->client->client_status;
   VAR_16 = FUNC_10( VAR_18 );

   if( VAR_13->client->client_status != VAR_16 )
   {


    FUNC_12( VAR_18, FUNC_13("rank_status %i\n",VAR_16) );
    if ( VAR_18 == 0 )
    {
     int VAR_20 = 0;
    }
    VAR_13->client->client_status = VAR_16;
   }

   switch( VAR_16 )
   {
   case 132:
   case 129:
    if( VAR_13->client->sess.sessionTeam != VAR_7 )
    {
     VAR_13->client->sess.sessionTeam = VAR_7;
     VAR_13->client->sess.spectatorState = VAR_5;
     FUNC_0( VAR_13 );

     FUNC_12( VAR_18, FUNC_13("rank_status %i\n",VAR_16) );
     FUNC_12( VAR_18, "rank_menu\n" );
    }
    break;
   case 130:
   case 135:
   case 128:
   case 131:
   case 133:
   case 134:
    if( (VAR_13->r.svFlags & VAR_6) == 0 )
    {
     FUNC_9( VAR_13->s.clientNum );
    }
    break;
   case 136:
    if( (VAR_13->client->sess.sessionTeam == VAR_7) &&
     (VAR_10.integer < VAR_2) )
    {
     FUNC_2( VAR_13, "free" );
    }

    if( VAR_15 != 136 )
    {

     for( VAR_19 = 0; VAR_19 < VAR_12.maxclients; VAR_19++ )
     {
      VAR_14 = &(VAR_8[VAR_19]);
      if ( !VAR_14->inuse )
       continue;
      if ( VAR_14->client == ((void*)0) )
       continue;
      if ( VAR_14->r.svFlags & VAR_6)
       continue;

      if( (VAR_18 != VAR_19) && (FUNC_10( VAR_19 ) == 136) )
      {
       FUNC_8( VAR_18, VAR_19, VAR_4, 1, 0 );
      }



      FUNC_1( VAR_14 );
     }
    }
    break;
   default:
    break;
   }
  }


  if( ((VAR_9.integer == 0) || (VAR_9.integer > 100)) &&
   ((VAR_11.integer == 0) || (VAR_11.integer > 1000)) )
  {
   FUNC_3( "timelimit", "1000" );
  }
 }


 if( VAR_12.intermissiontime == 0 )
 {
  for( VAR_18 = 0; VAR_18 < VAR_12.maxclients; VAR_18++ )
  {
   VAR_13 = &(VAR_8[VAR_18]);
   if( VAR_13->client == ((void*)0) )
   {
    continue;
   }

   VAR_17 = (VAR_12.time - VAR_13->client->pers.enterTime) / 1000;
   VAR_13->client->ps.persistant[VAR_3] = VAR_17;
  }
 }
}
