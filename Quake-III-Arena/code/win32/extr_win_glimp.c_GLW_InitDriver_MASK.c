
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_20__ {int hWnd; } ;
struct TYPE_19__ {int colorBits; int depthBits; int stencilBits; int stereoEnabled; } ;
struct TYPE_18__ {int desktopBitsPixel; int * hDC; int pixelFormatSet; } ;
struct TYPE_17__ {int integer; } ;
struct TYPE_16__ {int integer; } ;
struct TYPE_15__ {int integer; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_12__ {int dwFlags; scalar_t__ cStencilBits; scalar_t__ cDepthBits; scalar_t__ cColorBits; } ;
typedef TYPE_1__ PIXELFORMATDESCRIPTOR ;


 int FUNC_0 (TYPE_1__*,int,int,int,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_9__ VAR_5 ;
 TYPE_8__ VAR_6 ;
 TYPE_7__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_6__* VAR_10 ;
 TYPE_5__* VAR_11 ;
 TYPE_4__* VAR_12 ;
 TYPE_3__* VAR_13 ;
 TYPE_2__ VAR_14 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static qboolean FUNC_12( const char *VAR_15, int VAR_16 )
{
 int VAR_17;
 int VAR_18, VAR_19;
 static PIXELFORMATDESCRIPTOR VAR_20;

 VAR_14.Printf( VAR_1, "Initializing OpenGL driver\n" );




 if ( VAR_7.hDC == ((void*)0) )
 {
  VAR_14.Printf( VAR_1, "...getting DC: " );

  if ( ( VAR_7.hDC = FUNC_2( VAR_5.hWnd ) ) == ((void*)0) )
  {
   VAR_14.Printf( VAR_1, "failed\n" );
   return VAR_8;
  }
  VAR_14.Printf( VAR_1, "succeeded\n" );
 }

 if ( VAR_16 == 0 )
 {
  VAR_16 = VAR_7.desktopBitsPixel;
 }




 if ( VAR_11->integer == 0 ) {
  if ( VAR_16 > 16 ) {
   VAR_18 = 24;
  } else {
   VAR_18 = 16;
  }
 } else {
  VAR_18 = VAR_11->integer;
 }




 VAR_19 = VAR_12->integer;
 if ( VAR_18 < 24 )
 {
  VAR_19 = 0;
 }
 if ( !VAR_7.pixelFormatSet )
 {
  FUNC_0( &VAR_20, VAR_16, VAR_18, VAR_19, VAR_13->integer );
  if ( ( VAR_17 = FUNC_1( &VAR_20 ) ) != VAR_4 )
  {
   if ( VAR_17 == VAR_3 )
   {
    VAR_14.Printf( VAR_2, "...failed hard\n" );
    return VAR_8;
   }




   if ( ( VAR_10->integer == VAR_7.desktopBitsPixel ) &&
     ( VAR_19 == 0 ) )
   {
    FUNC_3( VAR_5.hWnd, VAR_7.hDC );
    VAR_7.hDC = ((void*)0);

    VAR_14.Printf( VAR_1, "...failed to find an appropriate PIXELFORMAT\n" );

    return VAR_8;
   }




   if ( VAR_16 > VAR_7.desktopBitsPixel )
   {
    VAR_16 = VAR_7.desktopBitsPixel;
   }
   FUNC_0( &VAR_20, VAR_16, VAR_18, 0, VAR_13->integer );
   if ( FUNC_1( &VAR_20 ) != VAR_4 )
   {
    if ( VAR_7.hDC )
    {
     FUNC_3( VAR_5.hWnd, VAR_7.hDC );
     VAR_7.hDC = ((void*)0);
    }

    VAR_14.Printf( VAR_1, "...failed to find an appropriate PIXELFORMAT\n" );

    return VAR_8;
   }
  }




  if ( !( VAR_20.dwFlags & VAR_0 ) && ( VAR_13->integer != 0 ) )
  {
   VAR_14.Printf( VAR_1, "...failed to select stereo pixel format\n" );
   VAR_6.stereoEnabled = VAR_8;
  }
 }




 VAR_6.colorBits = ( int ) VAR_20.cColorBits;
 VAR_6.depthBits = ( int ) VAR_20.cDepthBits;
 VAR_6.stencilBits = ( int ) VAR_20.cStencilBits;

 return VAR_9;
}
