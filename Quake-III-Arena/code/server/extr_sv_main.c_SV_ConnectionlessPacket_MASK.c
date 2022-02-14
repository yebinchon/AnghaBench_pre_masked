
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int netadr_t ;
struct TYPE_8__ {int * data; } ;
typedef TYPE_1__ msg_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int *,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

void FUNC_16( netadr_t VAR_0, msg_t *VAR_1 ) {
 char *VAR_2;
 char *VAR_3;

 FUNC_4( VAR_1 );
 FUNC_5( VAR_1 );

 if (!FUNC_9("connect", &VAR_1->data[4], 7)) {
  FUNC_3(VAR_1, 12);
 }

 VAR_2 = FUNC_6( VAR_1 );
 FUNC_1( VAR_2 );

 VAR_3 = FUNC_0(0);
 FUNC_2 ("SV packet %s : %s\n", FUNC_7(VAR_0), VAR_3);

 if (!FUNC_8(VAR_3, "getstatus")) {
  FUNC_12( VAR_0 );
  } else if (!FUNC_8(VAR_3, "getinfo")) {
  FUNC_10( VAR_0 );
 } else if (!FUNC_8(VAR_3, "getchallenge")) {
  FUNC_15( VAR_0 );
 } else if (!FUNC_8(VAR_3, "connect")) {
  FUNC_14( VAR_0 );
 } else if (!FUNC_8(VAR_3, "ipAuthorize")) {
  FUNC_13( VAR_0 );
 } else if (!FUNC_8(VAR_3, "rcon")) {
  FUNC_11( VAR_0, VAR_1 );
 } else if (!FUNC_8(VAR_3, "disconnect")) {



 } else {
  FUNC_2 ("bad connectionless packet from %s:\n%s\n"
  , FUNC_7 (VAR_0), VAR_2);
 }
}
