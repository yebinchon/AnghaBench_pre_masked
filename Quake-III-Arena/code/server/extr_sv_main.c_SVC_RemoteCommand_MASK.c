
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int remaining ;
typedef int qboolean ;
typedef int netadr_t ;
typedef int msg_t ;
struct TYPE_4__ {int string; } ;
struct TYPE_3__ {int redirectAddress; } ;


 int FUNC_0 (int) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 () ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__ VAR_5 ;

void FUNC_11( netadr_t VAR_6, msg_t *VAR_7 ) {
 qboolean VAR_8;
 unsigned int VAR_9;
 char VAR_10[1024];



 char VAR_11[(1024 - 16)];
 static unsigned int VAR_12 = 0;
 char *VAR_13;


 VAR_9 = FUNC_5();
 if (VAR_9<(VAR_12+500)) {
  return;
 }
 VAR_12 = VAR_9;

 if ( !FUNC_10( VAR_4->string ) ||
  FUNC_9 (FUNC_0(1), VAR_4->string) ) {
  VAR_8 = VAR_2;
  FUNC_6 ("Bad rcon from %s:\n%s\n", FUNC_7 (VAR_6), FUNC_0(2) );
 } else {
  VAR_8 = VAR_3;
  FUNC_6 ("Rcon from %s:\n%s\n", FUNC_7 (VAR_6), FUNC_0(2) );
 }


 VAR_5.redirectAddress = VAR_6;
 FUNC_3 (VAR_11, (1024 - 16), VAR_0);

 if ( !FUNC_10( VAR_4->string ) ) {
  FUNC_6 ("No rconpassword set on the server.\n");
 } else if ( !VAR_8 ) {
  FUNC_6 ("Bad rconpassword.\n");
 } else {
  VAR_10[0] = 0;





  VAR_13 = FUNC_1();
  VAR_13+=4;
  while(VAR_13[0]==' ')
   VAR_13++;
  while(VAR_13[0] && VAR_13[0]!=' ')
   VAR_13++;
  while(VAR_13[0]==' ')
   VAR_13++;

  FUNC_8( VAR_10, sizeof(VAR_10), VAR_13);

  FUNC_2 (VAR_10);

 }

 FUNC_4 ();
}
