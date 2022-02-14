
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int* vec4_t ;
struct TYPE_5__ {float vidHeight; scalar_t__ vidWidth; } ;
struct TYPE_8__ {TYPE_1__ glconfig; int consoleShader; } ;
struct TYPE_7__ {int vislines; int display; int current; int linewidth; scalar_t__ x; int totallines; short* text; scalar_t__ xadjust; } ;
struct TYPE_6__ {int (* SetColor ) (int *) ;} ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 () ;
 short* VAR_1 ;
 float VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__*,int *,int *,int *) ;
 int FUNC_3 (int ,int ,int ,int,int ) ;
 int FUNC_4 (scalar_t__,int,short) ;
 int FUNC_5 (int ,int,int ,int,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 int ** VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_6 (short*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12( float VAR_10 ) {
 int VAR_11, VAR_12, VAR_13;
 int VAR_14;
 short *VAR_15;
 int VAR_16;
 int VAR_17;

 int VAR_18;
 vec4_t VAR_19;

 VAR_17 = VAR_6.glconfig.vidHeight * VAR_10;
 if (VAR_17 <= 0)
  return;

 if (VAR_17 > VAR_6.glconfig.vidHeight )
  VAR_17 = VAR_6.glconfig.vidHeight;


 VAR_7.xadjust = 0;
 FUNC_2( &VAR_7.xadjust, ((void*)0), ((void*)0), ((void*)0) );


 VAR_13 = VAR_10 * VAR_2 - 2;
 if ( VAR_13 < 1 ) {
  VAR_13 = 0;
 }
 else {
  FUNC_3( 0, 0, VAR_3, VAR_13, VAR_6.consoleShader );
 }

 VAR_19[0] = 1;
 VAR_19[1] = 0;
 VAR_19[2] = 0;
 VAR_19[3] = 1;
 FUNC_5( 0, VAR_13, VAR_3, 2, VAR_19 );




 VAR_9.SetColor( VAR_8[FUNC_0(VAR_0)] );

 VAR_11 = FUNC_6( VAR_1 );

 for (VAR_12=0 ; VAR_12<VAR_11 ; VAR_12++) {

  FUNC_4( VAR_6.glconfig.vidWidth - ( VAR_11 - VAR_12 ) * VAR_5,

   (VAR_17-(VAR_4+VAR_4/2)), VAR_1[VAR_12] );

 }



 VAR_7.vislines = VAR_17;
 VAR_14 = (VAR_17-VAR_5)/VAR_5;

 VAR_13 = VAR_17 - (VAR_4*3);


 if (VAR_7.display != VAR_7.current)
 {

  VAR_9.SetColor( VAR_8[FUNC_0(VAR_0)] );
  for (VAR_12=0 ; VAR_12<VAR_7.linewidth ; VAR_12+=4)
   FUNC_4( VAR_7.xadjust + (VAR_12+1)*VAR_5, VAR_13, '^' );
  VAR_13 -= VAR_4;
  VAR_14--;
 }

 VAR_16 = VAR_7.display;

 if ( VAR_7.x == 0 ) {
  VAR_16--;
 }

 VAR_18 = 7;
 VAR_9.SetColor( VAR_8[VAR_18] );

 for (VAR_11=0 ; VAR_11<VAR_14 ; VAR_11++, VAR_13 -= VAR_4, VAR_16--)
 {
  if (VAR_16 < 0)
   break;
  if (VAR_7.current - VAR_16 >= VAR_7.totallines) {

   continue;
  }

  VAR_15 = VAR_7.text + (VAR_16 % VAR_7.totallines)*VAR_7.linewidth;

  for (VAR_12=0 ; VAR_12<VAR_7.linewidth ; VAR_12++) {
   if ( ( VAR_15[VAR_12] & 0xff ) == ' ' ) {
    continue;
   }

   if ( ( (VAR_15[VAR_12]>>8)&7 ) != VAR_18 ) {
    VAR_18 = (VAR_15[VAR_12]>>8)&7;
    VAR_9.SetColor( VAR_8[VAR_18] );
   }
   FUNC_4( VAR_7.xadjust + (VAR_12+1)*VAR_5, VAR_13, VAR_15[VAR_12] & 0xff );
  }
 }


 FUNC_1 ();

 VAR_9.SetColor( ((void*)0) );
}
