
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {int inuse; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,char*,int) ;

void FUNC_4(void) {
 int VAR_5;
 char VAR_6[VAR_2];

 for (VAR_5 = 0; VAR_5 < VAR_4 && VAR_5 < VAR_1; VAR_5++) {

  if ( !VAR_3[VAR_5] || !VAR_3[VAR_5]->inuse )
   continue;

  FUNC_3(VAR_0+VAR_5, VAR_6, sizeof(VAR_6));

  if (!FUNC_2(VAR_6) || !FUNC_2(FUNC_1(VAR_6, "n")))
   continue;
  FUNC_0(VAR_3[VAR_5]);
 }
}
