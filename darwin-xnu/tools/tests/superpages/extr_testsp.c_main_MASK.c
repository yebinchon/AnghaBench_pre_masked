
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sigaction {scalar_t__ sa_mask; int sa_flags; int sa_handler; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 char* VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,struct sigaction*,int *) ;
 int VAR_6 ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 (int) ;

int FUNC_8(int VAR_8, char **VAR_9) {
 int VAR_10;
 uint64_t VAR_11, VAR_12;

 int VAR_13 = 0;
 if (VAR_8>1) {
  if (!FUNC_5(VAR_9[1], "-h")) {
   FUNC_3("Usage: %s <mode>\n", VAR_9[0]);
   FUNC_3("\tmode = 0:  test all cases\n");
   FUNC_3("\tmode = -1: allocate/deallocate until failure\n");
   FUNC_3("\tmode > 0:  run test <tmode>\n");
   FUNC_1(0);
  }
  VAR_13=FUNC_0(VAR_9[1]);
 }


 struct sigaction VAR_14;
 VAR_14.sa_handler = VAR_7;
 VAR_14.sa_flags = VAR_0;
 VAR_14.sa_mask = 0;
 FUNC_4( VAR_1, &VAR_14, ((void*)0) );
 FUNC_4( VAR_2, &VAR_14, ((void*)0) );

 if (VAR_13>0)
  FUNC_7(VAR_13-1);

 if (VAR_13==0) {
  FUNC_3("Running %d tests:\n", VAR_3);
  for (VAR_10=0; VAR_10<VAR_3; VAR_10++) {
   FUNC_7(VAR_10);
  }
 }
 if (VAR_13==-1) {
   boolean_t VAR_15;
  do {
   VAR_15 = FUNC_6(VAR_4);
   FUNC_3(".");
   FUNC_2(VAR_6);
  } while (VAR_15);
  if (VAR_5[0])
   FUNC_3 (" (%s)\n", VAR_5);
 }
 return 0;
}
