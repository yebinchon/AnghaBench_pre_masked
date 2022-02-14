
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_21__ ;
typedef struct TYPE_23__ TYPE_20__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int format ;
typedef int dsbuf ;
typedef int dsbcaps ;
struct TYPE_26__ {int nChannels; int wBitsPerSample; int nSamplesPerSec; int nBlockAlign; int nAvgBytesPerSec; int dwSize; int dwBufferBytes; int dwFlags; struct TYPE_26__* lpwfxFormat; scalar_t__ cbSize; int wFormatTag; } ;
typedef TYPE_3__ WAVEFORMATEX ;
struct TYPE_28__ {TYPE_1__* lpVtbl; } ;
struct TYPE_27__ {TYPE_2__* lpVtbl; } ;
struct TYPE_25__ {scalar_t__ (* Play ) (TYPE_6__*,int ,int ,int ) ;scalar_t__ (* GetCaps ) (TYPE_6__*,TYPE_3__*) ;} ;
struct TYPE_24__ {int channels; int samplebits; int speed; int samples; int submission_chunk; TYPE_3__* buffer; } ;
struct TYPE_23__ {int hWnd; } ;
struct TYPE_22__ {scalar_t__ (* SetCooperativeLevel ) (TYPE_9__*,int ,int ) ;scalar_t__ (* CreateSoundBuffer ) (TYPE_9__*,TYPE_3__*,TYPE_6__**,int *) ;int (* Initialize ) (TYPE_9__*,int *) ;} ;
typedef int HRESULT ;
typedef TYPE_3__ DSBUFFERDESC ;
typedef TYPE_3__ DSBCAPS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_12 ;
 TYPE_21__ VAR_13 ;
 int VAR_14 ;
 TYPE_20__ VAR_15 ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 TYPE_9__* VAR_16 ;
 TYPE_6__* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (TYPE_9__*,int *) ;
 scalar_t__ FUNC_9 (TYPE_9__*,int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_9__*,TYPE_3__*,TYPE_6__**,int *) ;
 scalar_t__ FUNC_11 (TYPE_9__*,TYPE_3__*,TYPE_6__**,int *) ;
 scalar_t__ FUNC_12 (TYPE_6__*,int ,int ,int ) ;
 scalar_t__ FUNC_13 (TYPE_6__*,TYPE_3__*) ;

int FUNC_14 ()
{
 HRESULT VAR_20;
 DSBUFFERDESC VAR_21;
 DSBCAPS VAR_22;
 WAVEFORMATEX VAR_23;
 int VAR_24;

 FUNC_2( "Initializing DirectSound\n");

 VAR_24 = 1;

    if( FUNC_3( VAR_20 = FUNC_0(&VAR_2, ((void*)0), VAR_0, &VAR_10, (void **)&VAR_16))) {
  VAR_24 = 0;
     if( FUNC_3( VAR_20 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_9, (void **)&VAR_16))) {
   FUNC_2 ("failed\n");
   FUNC_5 ();
   return VAR_18;
  }
 }

 VAR_20 = VAR_16->lpVtbl->Initialize( VAR_16, ((void*)0));

 FUNC_1( "ok\n" );

 FUNC_1("...setting DSSCL_PRIORITY coop level: " );

 if ( VAR_8 != VAR_16->lpVtbl->SetCooperativeLevel( VAR_16, VAR_15.hWnd, VAR_7 ) ) {
  FUNC_2 ("failed\n");
  FUNC_5 ();
  return VAR_18;
 }
 FUNC_1("ok\n" );



 VAR_13.channels = 2;
 VAR_13.samplebits = 16;
 VAR_13.speed = 22050;
 FUNC_7 (&VAR_23, 0, sizeof(VAR_23));
 VAR_23.wFormatTag = VAR_12;
    VAR_23.nChannels = VAR_13.channels;
    VAR_23.wBitsPerSample = VAR_13.samplebits;
    VAR_23.nSamplesPerSec = VAR_13.speed;
    VAR_23.nBlockAlign = VAR_23.nChannels * VAR_23.wBitsPerSample / 8;
    VAR_23.cbSize = 0;
    VAR_23.nAvgBytesPerSec = VAR_23.nSamplesPerSec*VAR_23.nBlockAlign;

 FUNC_7 (&VAR_21, 0, sizeof(VAR_21));
 VAR_21.dwSize = sizeof(DSBUFFERDESC);


 VAR_21.dwFlags = VAR_4;
 if (VAR_24) {
  VAR_21.dwFlags |= VAR_3;
 }
 VAR_21.dwBufferBytes = VAR_11;
 VAR_21.lpwfxFormat = &VAR_23;

 FUNC_7(&VAR_22, 0, sizeof(VAR_22));
 VAR_22.dwSize = sizeof(VAR_22);

 FUNC_1( "...creating secondary buffer: " );
 if (VAR_8 == VAR_16->lpVtbl->CreateSoundBuffer(VAR_16, &VAR_21, &VAR_17, ((void*)0))) {
  FUNC_2( "locked hardware.  ok\n" );
 }
 else {

  VAR_21.dwFlags = VAR_5;
  if (VAR_24) {
   VAR_21.dwFlags |= VAR_3;
  }
  if (VAR_8 != VAR_16->lpVtbl->CreateSoundBuffer(VAR_16, &VAR_21, &VAR_17, ((void*)0))) {
   FUNC_2( "failed\n" );
   FUNC_5 ();
   return VAR_18;
  }
  FUNC_1( "forced to software.  ok\n" );
 }


 if ( VAR_8 != VAR_17->lpVtbl->Play(VAR_17, 0, 0, VAR_6) ) {
  FUNC_2 ("*** Looped sound play failed ***\n");
  FUNC_5 ();
  return VAR_18;
 }


 if ( VAR_8 != VAR_17->lpVtbl->GetCaps (VAR_17, &VAR_22) ) {
  FUNC_2 ("*** GetCaps failed ***\n");
  FUNC_5 ();
  return VAR_18;
 }

 VAR_14 = VAR_22.dwBufferBytes;

 VAR_13.channels = VAR_23.nChannels;
 VAR_13.samplebits = VAR_23.wBitsPerSample;
 VAR_13.speed = VAR_23.nSamplesPerSec;
 VAR_13.samples = VAR_14/(VAR_13.samplebits/8);
 VAR_13.submission_chunk = 1;
 VAR_13.buffer = ((void*)0);

 VAR_19 = (VAR_13.samplebits/8) - 1;

 FUNC_4 ();
 if (VAR_13.buffer)
  FUNC_7(VAR_13.buffer, 0, VAR_13.samples * VAR_13.samplebits/8);
 FUNC_6 ();
 return 1;
}
