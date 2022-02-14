
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* data; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 char* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(void) {

 int VAR_7;

 FUNC_1(VAR_6, "");

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {

  if(VAR_3[2] & (1 << VAR_7)) {
   FUNC_0(VAR_6, VAR_4[VAR_7]);
  }
  else
   FUNC_0(VAR_6, VAR_0[VAR_7]);

 }

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {

  if(VAR_3[3] & (1 << VAR_7)) {
   FUNC_0(VAR_6, VAR_5[VAR_7]);
  }
  else
   FUNC_0(VAR_6, VAR_1[VAR_7]);

 }

 FUNC_1(VAR_2, VAR_6);
}
