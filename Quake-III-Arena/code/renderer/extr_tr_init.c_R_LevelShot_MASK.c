
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int byte ;
struct TYPE_8__ {int vidWidth; int vidHeight; scalar_t__ deviceSupportsGamma; } ;
struct TYPE_7__ {int* (* Hunk_AllocateTempMemory ) (int) ;int (* Printf ) (int ,char*,char*) ;int (* Hunk_FreeTempMemory ) (int*) ;int (* FS_WriteFile ) (char*,int*,int) ;} ;
struct TYPE_6__ {scalar_t__ overbrightBits; TYPE_1__* world; } ;
struct TYPE_5__ {char* baseName; } ;


 int FUNC_0 (int*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*,int) ;
 TYPE_4__ VAR_4 ;
 int FUNC_2 (int ,int ,int,int,int ,int ,int*) ;
 TYPE_3__ VAR_5 ;
 int FUNC_3 (char*,char*,char*) ;
 int* FUNC_4 (int) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (char*,int*,int) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int ,char*,char*) ;
 TYPE_2__ VAR_6 ;

void FUNC_10( void ) {
 char VAR_7[VAR_2];
 byte *VAR_8;
 byte *VAR_9;
 byte *VAR_10, *VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;
 float VAR_17, VAR_18;
 int VAR_19, VAR_20;

 FUNC_3( VAR_7, "levelshots/%s.tga", VAR_6.world->baseName );

 VAR_9 = VAR_5.Hunk_AllocateTempMemory( VAR_4.vidWidth * VAR_4.vidHeight * 3 );

 VAR_8 = VAR_5.Hunk_AllocateTempMemory( 128 * 128*3 + 18);
 FUNC_0 (VAR_8, 0, 18);
 VAR_8[2] = 2;
 VAR_8[12] = 128;
 VAR_8[14] = 128;
 VAR_8[16] = 24;

 FUNC_2( 0, 0, VAR_4.vidWidth, VAR_4.vidHeight, VAR_0, VAR_1, VAR_9 );


 VAR_17 = VAR_4.vidWidth / 512.0f;
 VAR_18 = VAR_4.vidHeight / 384.0f;
 for ( VAR_13 = 0 ; VAR_13 < 128 ; VAR_13++ ) {
  for ( VAR_12 = 0 ; VAR_12 < 128 ; VAR_12++ ) {
   VAR_14 = VAR_15 = VAR_16 = 0;
   for ( VAR_20 = 0 ; VAR_20 < 3 ; VAR_20++ ) {
    for ( VAR_19 = 0 ; VAR_19 < 4 ; VAR_19++ ) {
     VAR_10 = VAR_9 + 3 * ( VAR_4.vidWidth * (int)( (VAR_13*3+VAR_20)*VAR_18 ) + (int)( (VAR_12*4+VAR_19)*VAR_17 ) );
     VAR_14 += VAR_10[0];
     VAR_15 += VAR_10[1];
     VAR_16 += VAR_10[2];
    }
   }
   VAR_11 = VAR_8 + 18 + 3 * ( VAR_13 * 128 + VAR_12 );
   VAR_11[0] = VAR_16 / 12;
   VAR_11[1] = VAR_15 / 12;
   VAR_11[2] = VAR_14 / 12;
  }
 }


 if ( ( VAR_6.overbrightBits > 0 ) && VAR_4.deviceSupportsGamma ) {
  FUNC_1( VAR_8 + 18, 128 * 128 * 3 );
 }

 VAR_5.FS_WriteFile( VAR_7, VAR_8, 128 * 128*3 + 18 );

 VAR_5.Hunk_FreeTempMemory( VAR_8 );
 VAR_5.Hunk_FreeTempMemory( VAR_9 );

 VAR_5.Printf( VAR_3, "Wrote %s\n", VAR_7 );
}
