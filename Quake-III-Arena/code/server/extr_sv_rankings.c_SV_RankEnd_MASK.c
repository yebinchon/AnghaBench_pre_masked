
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ context; scalar_t__ grank_status; } ;
struct TYPE_4__ {int value; } ;
typedef scalar_t__ GR_STATUS ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,int *,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int ) ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;

void FUNC_8( void )
{
 GR_STATUS VAR_9;
 int VAR_10;

 FUNC_0( "SV_RankEnd();\n" );

 if( !VAR_6 )
 {

  if( VAR_5 != ((void*)0) )
  {
   for( VAR_10 = 0; VAR_10 < VAR_8->value; VAR_10++ )
   {
    if( VAR_5[VAR_10].context != 0 )
    {
     FUNC_3( &(VAR_5[VAR_10]) );
    }
   }
  }
  if( VAR_7 != 0 )
  {
   FUNC_3( ((void*)0) );
  }

  return;
 }

 for( VAR_10 = 0; VAR_10 < VAR_8->value; VAR_10++ )
 {
  if( VAR_5[VAR_10].grank_status == VAR_2 )
  {
   FUNC_6( VAR_10 );
   FUNC_0( "SV_RankEnd: SV_RankUserLogout %d\n",VAR_10 );
  }
 }

 FUNC_7( VAR_7 != 0 );


 VAR_9 = FUNC_2
  (
   VAR_7,
   0,
   VAR_3,
   ((void*)0),
   VAR_0
  );

 if( VAR_9 != VAR_1 )
 {
  FUNC_4( "SV_RankEnd: Expected GR_STATUS_PENDING, got %s",
   FUNC_5( VAR_9 ) );
 }

 VAR_6 = VAR_4;
 FUNC_1( "sv_rankingsActive", "0" );
}
