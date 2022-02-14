
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int realTime; } ;
struct TYPE_4__ {TYPE_1__ uiDC; } ;


 int FUNC_0 (int,float,float,int ,char const*,int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 TYPE_2__ VAR_1 ;
 char* FUNC_5 (char*,char const*,...) ;

__attribute__((used)) static void FUNC_6( const char *VAR_2, float VAR_3, float VAR_4, float VAR_5 ) {
 static char VAR_6[] = "Downloading:";
 static char VAR_7[] = "Estimated time left:";
 static char VAR_8[] = "Transfer rate:";

 int VAR_9, VAR_10, VAR_11;
 char VAR_12[64], VAR_13[64], VAR_14[64], VAR_15[64];
 int VAR_16;
 int VAR_17;
 const char *VAR_18;

 VAR_9 = FUNC_4( "cl_downloadSize" );
 VAR_10 = FUNC_4( "cl_downloadCount" );
 VAR_11 = FUNC_4( "cl_downloadTime" );

 VAR_17 = 320;

 FUNC_3(VAR_0);
 FUNC_0(VAR_3, VAR_4 + 112, VAR_5, VAR_0, VAR_6, 0);
 FUNC_0(VAR_3, VAR_4 + 192, VAR_5, VAR_0, VAR_7, 0);
 FUNC_0(VAR_3, VAR_4 + 248, VAR_5, VAR_0, VAR_8, 0);

 if (VAR_9 > 0) {
  VAR_18 = FUNC_5( "%s (%d%%)", VAR_2, VAR_10 * 100 / VAR_9 );
 } else {
  VAR_18 = VAR_2;
 }

 FUNC_0(VAR_3, VAR_4+136, VAR_5, VAR_0, VAR_18, 0);

 FUNC_2( VAR_12, sizeof VAR_12, VAR_10 );
 FUNC_2( VAR_13, sizeof VAR_13, VAR_9 );

 if (VAR_10 < 4096 || !VAR_11) {
  FUNC_0(VAR_17, VAR_4+216, VAR_5, VAR_0, "estimating", 0);
  FUNC_0(VAR_17, VAR_4+160, VAR_5, VAR_0, FUNC_5("(%s of %s copied)", VAR_12, VAR_13), 0);
 } else {
  if ((VAR_1.uiDC.realTime - VAR_11) / 1000) {
   VAR_16 = VAR_10 / ((VAR_1.uiDC.realTime - VAR_11) / 1000);
  } else {
   VAR_16 = 0;
  }
  FUNC_2( VAR_14, sizeof VAR_14, VAR_16 );


  if (VAR_9 && VAR_16) {
   int VAR_19 = VAR_9 / VAR_16;


   FUNC_1 ( VAR_15, sizeof VAR_15,
    (VAR_19 - (((VAR_10/1024) * VAR_19) / (VAR_9/1024))) * 1000);

   FUNC_0(VAR_17, VAR_4+216, VAR_5, VAR_0, VAR_15, 0);
   FUNC_0(VAR_17, VAR_4+160, VAR_5, VAR_0, FUNC_5("(%s of %s copied)", VAR_12, VAR_13), 0);
  } else {
   FUNC_0(VAR_17, VAR_4+216, VAR_5, VAR_0, "estimating", 0);
   if (VAR_9) {
    FUNC_0(VAR_17, VAR_4+160, VAR_5, VAR_0, FUNC_5("(%s of %s copied)", VAR_12, VAR_13), 0);
   } else {
    FUNC_0(VAR_17, VAR_4+160, VAR_5, VAR_0, FUNC_5("(%s copied)", VAR_12), 0);
   }
  }

  if (VAR_16) {
   FUNC_0(VAR_17, VAR_4+272, VAR_5, VAR_0, FUNC_5("%s/Sec", VAR_14), 0);
  }
 }
}
