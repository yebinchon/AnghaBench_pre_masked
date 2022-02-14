
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cMsg ;
struct TYPE_2__ {int serverId; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*) ;
 char* FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (char*,int,char const*) ;
 TYPE_1__ VAR_1 ;
 char const* FUNC_4 (char*,int ) ;

void FUNC_5( void ) {
 const char *VAR_2;
 char VAR_3[VAR_0];
 int VAR_4;


 VAR_2 = FUNC_2();



 FUNC_1(VAR_3, sizeof(VAR_3), "Yf ");
 FUNC_3(VAR_3, sizeof(VAR_3), FUNC_4("%d ", VAR_1.serverId) );
 FUNC_3(VAR_3, sizeof(VAR_3), VAR_2);
 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  VAR_3[VAR_4] += 10;
 }
 FUNC_0( VAR_3 );
}
