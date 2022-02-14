
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int msg_t ;
typedef int errorMessage ;
struct TYPE_9__ {int downloadSize; size_t downloadCurrentBlock; size_t downloadClientBlock; size_t downloadXmitBlock; int downloadCount; int* downloadBlockSize; int rate; int snapshotMsec; int downloadSendTime; scalar_t__* downloadBlocks; scalar_t__ downloadEOF; int download; scalar_t__* downloadName; } ;
typedef TYPE_1__ client_t ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {int clients; int time; } ;


 int FUNC_0 (char*,TYPE_1__*,int) ;
 int FUNC_1 (char*,TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (char*,int,char*,scalar_t__*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (scalar_t__,int,int ) ;
 int FUNC_5 (scalar_t__*,int *) ;
 int FUNC_6 (scalar_t__*,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,scalar_t__,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,char*) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;

void FUNC_13( client_t *VAR_9 , msg_t *VAR_10 )
{
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;
 char VAR_16[1024];

 if (!*VAR_9->downloadName)
  return;

 if (!VAR_9->download) {


  FUNC_1( "clientDownload: %d : begining \"%s\"\n", VAR_9 - VAR_8.clients, VAR_9->downloadName );

  VAR_15 = FUNC_6(VAR_9->downloadName, "missionpack");
  VAR_14 = VAR_15 || FUNC_6(VAR_9->downloadName, "baseq3");

  if ( !VAR_4->integer || VAR_14 ||
   ( VAR_9->downloadSize = FUNC_5( VAR_9->downloadName, &VAR_9->download ) ) <= 0 ) {

   if (VAR_14) {
    FUNC_1("clientDownload: %d : \"%s\" cannot download id pk3 files\n", VAR_9 - VAR_8.clients, VAR_9->downloadName);
    if (VAR_15) {
     FUNC_2(VAR_16, sizeof(VAR_16), "Cannot autodownload Team Arena file \"%s\"\n"
         "The Team Arena mission pack can be found in your local game store.", VAR_9->downloadName);
    }
    else {
     FUNC_2(VAR_16, sizeof(VAR_16), "Cannot autodownload id pk3 file \"%s\"", VAR_9->downloadName);
    }
   } else if ( !VAR_4->integer ) {
    FUNC_1("clientDownload: %d : \"%s\" download disabled", VAR_9 - VAR_8.clients, VAR_9->downloadName);
    if (VAR_6->integer) {
     FUNC_2(VAR_16, sizeof(VAR_16), "Could not download \"%s\" because autodownloading is disabled on the server.\n\n"
          "You will need to get this file elsewhere before you "
          "can connect to this pure server.\n", VAR_9->downloadName);
    } else {
     FUNC_2(VAR_16, sizeof(VAR_16), "Could not download \"%s\" because autodownloading is disabled on the server.\n\n"
                    "The server you are connecting to is not a pure server, "
                    "set autodownload to No in your settings and you might be "
                    "able to join the game anyway.\n", VAR_9->downloadName);
    }
   } else {


    FUNC_1("clientDownload: %d : \"%s\" file not found on server\n", VAR_9 - VAR_8.clients, VAR_9->downloadName);
    FUNC_2(VAR_16, sizeof(VAR_16), "File \"%s\" not found on server for autodownloading.\n", VAR_9->downloadName);
   }
   FUNC_7( VAR_10, VAR_7 );
   FUNC_10( VAR_10, 0 );
   FUNC_9( VAR_10, -1 );
   FUNC_11( VAR_10, VAR_16 );

   *VAR_9->downloadName = 0;
   return;
  }


  VAR_9->downloadCurrentBlock = VAR_9->downloadClientBlock = VAR_9->downloadXmitBlock = 0;
  VAR_9->downloadCount = 0;
  VAR_9->downloadEOF = VAR_2;
 }


 while (VAR_9->downloadCurrentBlock - VAR_9->downloadClientBlock < VAR_1 &&
  VAR_9->downloadSize != VAR_9->downloadCount) {

  VAR_11 = (VAR_9->downloadCurrentBlock % VAR_1);

  if (!VAR_9->downloadBlocks[VAR_11])
   VAR_9->downloadBlocks[VAR_11] = FUNC_12( VAR_0 );

  VAR_9->downloadBlockSize[VAR_11] = FUNC_4( VAR_9->downloadBlocks[VAR_11], VAR_0, VAR_9->download );

  if (VAR_9->downloadBlockSize[VAR_11] < 0) {

   VAR_9->downloadCount = VAR_9->downloadSize;
   break;
  }

  VAR_9->downloadCount += VAR_9->downloadBlockSize[VAR_11];


  VAR_9->downloadCurrentBlock++;
 }


 if (VAR_9->downloadCount == VAR_9->downloadSize &&
  !VAR_9->downloadEOF &&
  VAR_9->downloadCurrentBlock - VAR_9->downloadClientBlock < VAR_1) {

  VAR_9->downloadBlockSize[VAR_9->downloadCurrentBlock % VAR_1] = 0;
  VAR_9->downloadCurrentBlock++;

  VAR_9->downloadEOF = VAR_3;
 }






 VAR_12 = VAR_9->rate;
 if ( VAR_5->integer ) {
  if ( VAR_5->integer < 1000 ) {
   FUNC_3( "sv_MaxRate", "1000" );
  }
  if ( VAR_5->integer < VAR_12 ) {
   VAR_12 = VAR_5->integer;
  }
 }

 if (!VAR_12) {
  VAR_13 = 1;
 } else {
  VAR_13 = ( (VAR_12 * VAR_9->snapshotMsec) / 1000 + VAR_0 ) /
   VAR_0;
 }

 if (VAR_13 < 0)
  VAR_13 = 1;

 while (VAR_13--) {




  if (VAR_9->downloadClientBlock == VAR_9->downloadCurrentBlock)
   return;

  if (VAR_9->downloadXmitBlock == VAR_9->downloadCurrentBlock) {




   if (VAR_8.time - VAR_9->downloadSendTime > 1000)
    VAR_9->downloadXmitBlock = VAR_9->downloadClientBlock;
   else
    return;
  }


  VAR_11 = (VAR_9->downloadXmitBlock % VAR_1);

  FUNC_7( VAR_10, VAR_7 );
  FUNC_10( VAR_10, VAR_9->downloadXmitBlock );


  if ( VAR_9->downloadXmitBlock == 0 )
   FUNC_9( VAR_10, VAR_9->downloadSize );

  FUNC_10( VAR_10, VAR_9->downloadBlockSize[VAR_11] );


  if ( VAR_9->downloadBlockSize[VAR_11] ) {
   FUNC_8( VAR_10, VAR_9->downloadBlocks[VAR_11], VAR_9->downloadBlockSize[VAR_11] );
  }

  FUNC_0( "clientDownload: %d : writing block %d\n", VAR_9 - VAR_8.clients, VAR_9->downloadXmitBlock );



  VAR_9->downloadXmitBlock++;

  VAR_9->downloadSendTime = VAR_8.time;
 }
}
