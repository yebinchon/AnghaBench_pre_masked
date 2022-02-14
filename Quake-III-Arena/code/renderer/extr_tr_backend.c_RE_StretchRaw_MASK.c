
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int byte ;
struct TYPE_8__ {int width; int height; int uploadWidth; int uploadHeight; } ;
struct TYPE_7__ {scalar_t__ integer; } ;
struct TYPE_6__ {int (* Milliseconds ) () ;int (* Printf ) (int ,char*,int,int,int) ;int (* Error ) (int ,char*,int,int) ;} ;
struct TYPE_5__ {int identityLight; TYPE_4__** scratchImage; int registered; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (float,int) ;
 int FUNC_8 (int ,int ,int ,int,int,int ,int ,int ,int const*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ,int,int,int ,int ,int const*) ;
 int FUNC_11 (int,int) ;
 TYPE_3__* VAR_13 ;
 TYPE_2__ VAR_14 ;
 int FUNC_12 () ;
 int FUNC_13 (int ,char*,int,int) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,char*,int,int,int) ;
 TYPE_1__ VAR_15 ;

void FUNC_16 (int VAR_16, int VAR_17, int VAR_18, int VAR_19, int VAR_20, int VAR_21, const byte *VAR_22, int VAR_23, qboolean VAR_24) {
 int VAR_25, VAR_26;
 int VAR_27, VAR_28;

 if ( !VAR_15.registered ) {
  return;
 }
 FUNC_2();


 FUNC_6();

 VAR_27 = VAR_28 = 0;
 if ( VAR_13->integer ) {
  VAR_27 = VAR_14.Milliseconds();
 }


 for ( VAR_25 = 0 ; ( 1 << VAR_25 ) < VAR_20 ; VAR_25++ ) {
 }
 for ( VAR_26 = 0 ; ( 1 << VAR_26 ) < VAR_21 ; VAR_26++ ) {
 }
 if ( ( 1 << VAR_25 ) != VAR_20 || ( 1 << VAR_26 ) != VAR_21) {
  VAR_14.Error (VAR_0, "Draw_StretchRaw: size not a power of 2: %i by %i", VAR_20, VAR_21);
 }

 FUNC_0( VAR_15.scratchImage[VAR_23] );


 if ( VAR_20 != VAR_15.scratchImage[VAR_23]->width || VAR_21 != VAR_15.scratchImage[VAR_23]->height ) {
  VAR_15.scratchImage[VAR_23]->width = VAR_15.scratchImage[VAR_23]->uploadWidth = VAR_20;
  VAR_15.scratchImage[VAR_23]->height = VAR_15.scratchImage[VAR_23]->uploadHeight = VAR_21;
  FUNC_8( VAR_6, 0, VAR_4, VAR_20, VAR_21, 0, VAR_5, VAR_11, VAR_22 );
  FUNC_9( VAR_6, VAR_8, VAR_2 );
  FUNC_9( VAR_6, VAR_7, VAR_2 );
  FUNC_9( VAR_6, VAR_9, VAR_1 );
  FUNC_9( VAR_6, VAR_10, VAR_1 );
 } else {
  if (VAR_24) {


   FUNC_10( VAR_6, 0, 0, 0, VAR_20, VAR_21, VAR_5, VAR_11, VAR_22 );
  }
 }

 if ( VAR_13->integer ) {
  VAR_28 = VAR_14.Milliseconds();
  VAR_14.Printf( VAR_12, "qglTexSubImage2D %i, %i: %i msec\n", VAR_20, VAR_21, VAR_28 - VAR_27 );
 }

 FUNC_1();

 FUNC_4( VAR_15.identityLight, VAR_15.identityLight, VAR_15.identityLight );

 FUNC_3 (VAR_3);
 FUNC_7 ( 0.5f / VAR_20, 0.5f / VAR_21 );
 FUNC_11 (VAR_16, VAR_17);
 FUNC_7 ( ( VAR_20 - 0.5f ) / VAR_20 , 0.5f / VAR_21 );
 FUNC_11 (VAR_16+VAR_18, VAR_17);
 FUNC_7 ( ( VAR_20 - 0.5f ) / VAR_20, ( VAR_21 - 0.5f ) / VAR_21 );
 FUNC_11 (VAR_16+VAR_18, VAR_17+VAR_19);
 FUNC_7 ( 0.5f / VAR_20, ( VAR_21 - 0.5f ) / VAR_21 );
 FUNC_11 (VAR_16, VAR_17+VAR_19);
 FUNC_5 ();
}
