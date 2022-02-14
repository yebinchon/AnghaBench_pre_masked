
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ context; } ;
typedef TYPE_1__ ranked_player_t ;
typedef scalar_t__ GR_STATUS ;
typedef scalar_t__ GR_CONTEXT ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,void*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_6( GR_STATUS* VAR_5, void* VAR_6 )
{
 ranked_player_t* VAR_7;
 GR_CONTEXT VAR_8;
 GR_STATUS VAR_9;

 FUNC_5( VAR_5 != ((void*)0) );


 FUNC_0( "SV_RankSendReportsCBF( %08X, %08X );\n", VAR_5, VAR_6 );

 VAR_7 = (ranked_player_t*)VAR_6;
 if( VAR_7 == ((void*)0) )
 {
  FUNC_0( "SV_RankSendReportsCBF: server\n" );
  VAR_8 = VAR_4;
 }
 else
 {
  FUNC_0( "SV_RankSendReportsCBF: player\n" );
  VAR_8 = VAR_7->context;
 }


 if( *VAR_5 != VAR_1 )
 {
  FUNC_3( "SV_RankSendReportsCBF: Unexpected status %s",
   FUNC_4( *VAR_5 ) );
 }

 if( VAR_8 == 0 )
 {
  FUNC_0( "SV_RankSendReportsCBF: WARNING: context == 0" );
  FUNC_2( VAR_7 );
 }
 else
 {
  VAR_9 = FUNC_1
   (
    VAR_8,
    0,
    VAR_3,
    VAR_6,
    VAR_0
   );

  if( VAR_9 != VAR_2 )
  {
   FUNC_3( "SV_RankSendReportsCBF: Expected "
    "GR_STATUS_PENDING from GRankCleanupAsync, got %s",
    FUNC_4( VAR_9 ) );
   FUNC_2( VAR_7 );
  }
 }
}
