
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_5 ;
 int FUNC_2 (int ,int,int,int) ;

int FUNC_3(int VAR_6, char **VAR_7) {
 int VAR_8;
 uint64_t VAR_9, VAR_10, VAR_11, VAR_12;

 int VAR_13;

 FUNC_1("; m0 r s; m0 r b; m0 w s; m0 w b; m1 r s; m1 r b; m1 w s; m1 w b; m2 r s; m2 r b; m2 w s; m2 w b\n");
 for (VAR_8=VAR_2; VAR_8<VAR_1; VAR_8+=VAR_3) {
  FUNC_1("%d", VAR_8);
  for (VAR_13=0; VAR_13<=2; VAR_13++) {
   VAR_9=VAR_10=VAR_11=VAR_12=-1;
   VAR_9 = FUNC_2(VAR_4, VAR_13, 0, VAR_8);
   VAR_10 = FUNC_2(VAR_0, VAR_13, 0, VAR_8);
   VAR_11 = FUNC_2(VAR_4, VAR_13, 1, VAR_8);
   VAR_12 = FUNC_2(VAR_0, VAR_13, 1, VAR_8);
   FUNC_1("; %lld; %lld; %lld; %lld", VAR_9, VAR_10, VAR_11, VAR_12);
   FUNC_0(VAR_5);
  }
  FUNC_1("\n");
 }

 return 0;
}
