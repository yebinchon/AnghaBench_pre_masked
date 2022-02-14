
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int retrieved; scalar_t__ print; int pending; int address; int time; int * string; } ;
typedef TYPE_1__ serverStatus_t ;
typedef int netadr_t ;
typedef int msg_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,char*,int*,int*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (int *) ;

void FUNC_8( netadr_t VAR_5, msg_t *VAR_6 ) {
 char *VAR_7;
 char VAR_8[VAR_0];
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;
 serverStatus_t *VAR_14;

 VAR_14 = ((void*)0);
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if ( FUNC_4( VAR_5, VAR_2[VAR_9].address ) ) {
   VAR_14 = &VAR_2[VAR_9];
   break;
  }
 }

 if (!VAR_14) {
  return;
 }

 VAR_7 = FUNC_3( VAR_6 );

 VAR_13 = 0;
 FUNC_2(&VAR_14->string[VAR_13], sizeof(VAR_14->string)-VAR_13, "%s", VAR_7);

 if (VAR_14->print) {
  FUNC_1("Server settings:\n");

  while (*VAR_7) {
   for (VAR_9 = 0; VAR_9 < 2 && *VAR_7; VAR_9++) {
    if (*VAR_7 == '\\')
     VAR_7++;
    VAR_10 = 0;
    while (*VAR_7) {
     VAR_8[VAR_10++] = *VAR_7;
     if (VAR_10 >= VAR_0-1)
      break;
     VAR_7++;
     if (*VAR_7 == '\\') {
      break;
     }
    }
    VAR_8[VAR_10] = '\0';
    if (VAR_9) {
     FUNC_1("%s\n", VAR_8);
    }
    else {
     FUNC_1("%-24s", VAR_8);
    }
   }
  }
 }

 VAR_13 = FUNC_7(VAR_14->string);
 FUNC_2(&VAR_14->string[VAR_13], sizeof(VAR_14->string)-VAR_13, "\\");

 if (VAR_14->print) {
  FUNC_1("\nPlayers:\n");
  FUNC_1("num: score: ping: name:\n");
 }
 for (VAR_9 = 0, VAR_7 = FUNC_3( VAR_6 ); *VAR_7; VAR_7 = FUNC_3( VAR_6 ), VAR_9++) {

  VAR_13 = FUNC_7(VAR_14->string);
  FUNC_2(&VAR_14->string[VAR_13], sizeof(VAR_14->string)-VAR_13, "\\%s", VAR_7);

  if (VAR_14->print) {
   VAR_11 = VAR_12 = 0;
   FUNC_5(VAR_7, "%d %d", &VAR_11, &VAR_12);
   VAR_7 = FUNC_6(VAR_7, ' ');
   if (VAR_7)
    VAR_7 = FUNC_6(VAR_7+1, ' ');
   if (VAR_7)
    VAR_7++;
   else
    VAR_7 = "unknown";
   FUNC_1("%-2d   %-3d    %-3d   %s\n", VAR_9, VAR_11, VAR_12, VAR_7 );
  }
 }
 VAR_13 = FUNC_7(VAR_14->string);
 FUNC_2(&VAR_14->string[VAR_13], sizeof(VAR_14->string)-VAR_13, "\\");

 VAR_14->time = FUNC_0();
 VAR_14->address = VAR_5;
 VAR_14->pending = VAR_3;
 if (VAR_14->print) {
  VAR_14->retrieved = VAR_4;
 }
}
