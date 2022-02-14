
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int realtime; int frametime; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,char const*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_6 (char*) ;
 TYPE_1__ VAR_5 ;
 char* FUNC_7 (char*,char const*,...) ;

__attribute__((used)) static void FUNC_8( const char *VAR_6 ) {
 static char VAR_7[] = "Downloading:";
 static char VAR_8[] = "Estimated time left:";
 static char VAR_9[] = "Transfer rate:";

 int VAR_10, VAR_11, VAR_12;
 char VAR_13[64], VAR_14[64], VAR_15[64], VAR_16[64];
 int VAR_17;
 int VAR_18, VAR_19;
 int VAR_20 = VAR_1|VAR_2|VAR_0;
 const char *VAR_21;

 VAR_10 = FUNC_6( "cl_downloadSize" );
 VAR_11 = FUNC_6( "cl_downloadCount" );
 VAR_12 = FUNC_6( "cl_downloadTime" );
 VAR_19 = VAR_18 = FUNC_3( VAR_7 ) * FUNC_2( VAR_20 );
 VAR_18 = FUNC_3( VAR_8 ) * FUNC_2( VAR_20 );
 if (VAR_18 > VAR_19) VAR_19 = VAR_18;
 VAR_18 = FUNC_3( VAR_9 ) * FUNC_2( VAR_20 );
 if (VAR_18 > VAR_19) VAR_19 = VAR_18;
 VAR_19 += 16;

 FUNC_0( 8, 128, VAR_7, VAR_20, VAR_3 );
 FUNC_0( 8, 160, VAR_8, VAR_20, VAR_3 );
 FUNC_0( 8, 224, VAR_9, VAR_20, VAR_3 );

 if (VAR_10 > 0) {
  VAR_21 = FUNC_7( "%s (%d%%)", VAR_6, VAR_11 * 100 / VAR_10 );
 } else {
  VAR_21 = VAR_6;
 }

 FUNC_0( VAR_19, 128, VAR_21, VAR_20, VAR_3 );

 FUNC_4( VAR_13, sizeof VAR_13, VAR_11 );
 FUNC_4( VAR_14, sizeof VAR_14, VAR_10 );

 if (VAR_11 < 4096 || !VAR_12) {
  FUNC_0( VAR_19, 160, "estimating", VAR_20, VAR_3 );
  FUNC_0( VAR_19, 192,
   FUNC_7("(%s of %s copied)", VAR_13, VAR_14), VAR_20, VAR_3 );
 } else {




   if ( (VAR_5.realtime - VAR_12) / 1000) {
   VAR_17 = VAR_11 / ((VAR_5.realtime - VAR_12) / 1000);

  } else {
   VAR_17 = 0;
  }




  FUNC_4( VAR_15, sizeof VAR_15, VAR_17 );


  if (VAR_10 && VAR_17) {
   int VAR_22 = VAR_10 / VAR_17;


   VAR_22 = (VAR_22 - (((VAR_11/1024) * VAR_22) / (VAR_10/1024))) * 1000;

   FUNC_1 ( VAR_16, sizeof VAR_16, VAR_22 );


   FUNC_0( VAR_19, 160,
    VAR_16, VAR_20, VAR_3 );
   FUNC_0( VAR_19, 192,
    FUNC_7("(%s of %s copied)", VAR_13, VAR_14), VAR_20, VAR_3 );
  } else {
   FUNC_0( VAR_19, 160,
    "estimating", VAR_20, VAR_3 );
   if (VAR_10) {
    FUNC_0( VAR_19, 192,
     FUNC_7("(%s of %s copied)", VAR_13, VAR_14), VAR_20, VAR_3 );
   } else {
    FUNC_0( VAR_19, 192,
     FUNC_7("(%s copied)", VAR_13), VAR_20, VAR_3 );
   }
  }

  if (VAR_17) {
   FUNC_0( VAR_19, 224,
    FUNC_7("%s/Sec", VAR_15), VAR_20, VAR_3 );
  }
 }
}
