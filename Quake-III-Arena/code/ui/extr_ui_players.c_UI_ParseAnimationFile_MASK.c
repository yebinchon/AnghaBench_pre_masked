
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int text ;
typedef int qboolean ;
typedef int fileHandle_t ;
struct TYPE_4__ {int firstFrame; int frameLerp; int initialLerp; void* loopFrames; void* numFrames; } ;
typedef TYPE_1__ animation_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char**) ;
 int FUNC_2 (char*,char const*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,char*) ;
 size_t VAR_3 ;
 float FUNC_4 (char*) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char const*,int *,int ) ;
 int FUNC_9 (char*,int,int ) ;

__attribute__((used)) static qboolean FUNC_10( const char *VAR_6, animation_t *VAR_7 ) {
 char *VAR_8, *VAR_9;
 int VAR_10;
 int VAR_11;
 char *VAR_12;
 float VAR_13;
 int VAR_14;
 char VAR_15[20000];
 fileHandle_t VAR_16;

 FUNC_6( VAR_7, 0, sizeof( animation_t ) * VAR_2 );


 VAR_10 = FUNC_8( VAR_6, &VAR_16, VAR_0 );
 if ( VAR_10 <= 0 ) {
  return VAR_4;
 }
 if ( VAR_10 >= ( sizeof( VAR_15 ) - 1 ) ) {
  FUNC_2( "File %s too long\n", VAR_6 );
  return VAR_4;
 }
 FUNC_9( VAR_15, VAR_10, VAR_16 );
 VAR_15[VAR_10] = 0;
 FUNC_7( VAR_16 );

 FUNC_0(VAR_15);


 VAR_8 = VAR_15;
 VAR_14 = 0;


 while ( 1 ) {
  VAR_9 = VAR_8;
  VAR_12 = FUNC_1( &VAR_8 );
  if ( !VAR_12 ) {
   break;
  }
  if ( !FUNC_3( VAR_12, "footsteps" ) ) {
   VAR_12 = FUNC_1( &VAR_8 );
   if ( !VAR_12 ) {
    break;
   }
   continue;
  } else if ( !FUNC_3( VAR_12, "headoffset" ) ) {
   for ( VAR_11 = 0 ; VAR_11 < 3 ; VAR_11++ ) {
    VAR_12 = FUNC_1( &VAR_8 );
    if ( !VAR_12 ) {
     break;
    }
   }
   continue;
  } else if ( !FUNC_3( VAR_12, "sex" ) ) {
   VAR_12 = FUNC_1( &VAR_8 );
   if ( !VAR_12 ) {
    break;
   }
   continue;
  }


  if ( VAR_12[0] >= '0' && VAR_12[0] <= '9' ) {
   VAR_8 = VAR_9;
   break;
  }

  FUNC_2( "unknown token '%s' is %s\n", VAR_12, VAR_6 );
 }


 for ( VAR_11 = 0 ; VAR_11 < VAR_2 ; VAR_11++ ) {

  VAR_12 = FUNC_1( &VAR_8 );
  if ( !VAR_12 ) {
   break;
  }
  VAR_7[VAR_11].firstFrame = FUNC_5( VAR_12 );

  if ( VAR_11 == VAR_1 ) {
   VAR_14 = VAR_7[VAR_1].firstFrame - VAR_7[VAR_3].firstFrame;
  }
  if ( VAR_11 >= VAR_1 ) {
   VAR_7[VAR_11].firstFrame -= VAR_14;
  }

  VAR_12 = FUNC_1( &VAR_8 );
  if ( !VAR_12 ) {
   break;
  }
  VAR_7[VAR_11].numFrames = FUNC_5( VAR_12 );

  VAR_12 = FUNC_1( &VAR_8 );
  if ( !VAR_12 ) {
   break;
  }
  VAR_7[VAR_11].loopFrames = FUNC_5( VAR_12 );

  VAR_12 = FUNC_1( &VAR_8 );
  if ( !VAR_12 ) {
   break;
  }
  VAR_13 = FUNC_4( VAR_12 );
  if ( VAR_13 == 0 ) {
   VAR_13 = 1;
  }
  VAR_7[VAR_11].frameLerp = 1000 / VAR_13;
  VAR_7[VAR_11].initialLerp = 1000 / VAR_13;
 }

 if ( VAR_11 != VAR_2 ) {
  FUNC_2( "Error parsing animation file: %s", VAR_6 );
  return VAR_4;
 }

 return VAR_5;
}
