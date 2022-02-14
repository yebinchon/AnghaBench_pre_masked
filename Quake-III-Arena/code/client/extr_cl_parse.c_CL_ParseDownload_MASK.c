
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int msg_t ;
struct TYPE_2__ {scalar_t__ downloadSize; int downloadBlock; scalar_t__ downloadCount; scalar_t__* downloadName; scalar_t__* downloadTempName; scalar_t__ download; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__*) ;
 int FUNC_10 (scalar_t__*,scalar_t__*) ;
 int FUNC_11 (unsigned char*,int,scalar_t__) ;
 int VAR_1 ;
 int FUNC_12 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 TYPE_1__ VAR_2 ;
 char* FUNC_16 (char*,int) ;

void FUNC_17 ( msg_t *VAR_3 ) {
 int VAR_4;
 unsigned char VAR_5[VAR_1];
 int VAR_6;


 VAR_6 = FUNC_14 ( VAR_3 );

 if ( !VAR_6 )
 {

  VAR_2.downloadSize = FUNC_13 ( VAR_3 );

  FUNC_7( "cl_downloadSize", VAR_2.downloadSize );

  if (VAR_2.downloadSize < 0)
  {
   FUNC_4(VAR_0, FUNC_15( VAR_3 ) );
   return;
  }
 }

 VAR_4 = FUNC_14 ( VAR_3 );
 if (VAR_4 > 0)
  FUNC_12( VAR_3, VAR_5, VAR_4 );

 if (VAR_2.downloadBlock != VAR_6) {
  FUNC_3( "CL_ParseDownload: Expected block %d, got %d\n", VAR_2.downloadBlock, VAR_6);
  return;
 }


 if (!VAR_2.download)
 {
  if (!*VAR_2.downloadTempName) {
   FUNC_5("Server sending download, but no download was requested\n");
   FUNC_0( "stopdl" );
   return;
  }

  VAR_2.download = FUNC_9( VAR_2.downloadTempName );

  if (!VAR_2.download) {
   FUNC_5( "Could not create %s\n", VAR_2.downloadTempName );
   FUNC_0( "stopdl" );
   FUNC_1();
   return;
  }
 }

 if (VAR_4)
  FUNC_11( VAR_5, VAR_4, VAR_2.download );

 FUNC_0( FUNC_16("nextdl %d", VAR_2.downloadBlock) );
 VAR_2.downloadBlock++;

 VAR_2.downloadCount += VAR_4;


 FUNC_7( "cl_downloadCount", VAR_2.downloadCount );

 if (!VAR_4) {
  if (VAR_2.download) {
   FUNC_8( VAR_2.download );
   VAR_2.download = 0;


   FUNC_10 ( VAR_2.downloadTempName, VAR_2.downloadName );
  }
  *VAR_2.downloadTempName = *VAR_2.downloadName = 0;
  FUNC_6( "cl_downloadName", "" );






  FUNC_2();
  FUNC_2();


  FUNC_1 ();
 }
}
