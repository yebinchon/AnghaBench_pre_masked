
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int demoExt ;
struct TYPE_2__ {int demoCount; int * demoList; } ;


 int FUNC_0 (char*,int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char*,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_7() {
 char VAR_2[4096];
 char VAR_3[32];
 char *VAR_4;
 int VAR_5, VAR_6;

 FUNC_0(VAR_3, sizeof(VAR_3), "dm_%d", (int)FUNC_5("protocol"));

 VAR_1.demoCount = FUNC_6( "demos", VAR_3, VAR_2, 4096 );

 FUNC_0(VAR_3, sizeof(VAR_3), ".dm_%d", (int)FUNC_5("protocol"));

 if (VAR_1.demoCount) {
  if (VAR_1.demoCount > VAR_0) {
   VAR_1.demoCount = VAR_0;
  }
  VAR_4 = VAR_2;
  for ( VAR_5 = 0; VAR_5 < VAR_1.demoCount; VAR_5++ ) {
   VAR_6 = FUNC_4( VAR_4 );
   if (!FUNC_1(VAR_4 + VAR_6 - FUNC_4(VAR_3), VAR_3)) {
    VAR_4[VAR_6-FUNC_4(VAR_3)] = '\0';
   }
   FUNC_2(VAR_4);
   VAR_1.demoList[VAR_5] = FUNC_3(VAR_4);
   VAR_4 += VAR_6 + 1;
  }
 }

}
