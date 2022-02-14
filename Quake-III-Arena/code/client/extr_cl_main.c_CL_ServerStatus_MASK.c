
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int retrieved; int pending; scalar_t__ startTime; int print; scalar_t__ time; int address; int string; } ;
typedef TYPE_2__ serverStatus_t ;
typedef int netadr_t ;
struct TYPE_6__ {scalar_t__ port; } ;
struct TYPE_9__ {int retrieved; TYPE_1__ address; } ;
struct TYPE_8__ {scalar_t__ integer; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (char*,int *) ;
 int VAR_1 ;
 int FUNC_5 (char*,int ,int) ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_6( char *VAR_6, char *VAR_7, int VAR_8 ) {
 int VAR_9;
 netadr_t VAR_10;
 serverStatus_t *VAR_11;


 if ( !VAR_6 ) {
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_2[VAR_9].address.port = 0;
   VAR_2[VAR_9].retrieved = VAR_5;
  }
  return VAR_4;
 }

 if ( !FUNC_4( VAR_6, &VAR_10 ) ) {
  return VAR_4;
 }
 VAR_11 = FUNC_0( VAR_10 );

 if ( !VAR_7 ) {
  VAR_11->retrieved = VAR_5;
  return VAR_4;
 }


 if ( FUNC_2( VAR_10, VAR_11->address) ) {

  if (!VAR_11->pending) {
   FUNC_5(VAR_7, VAR_11->string, VAR_8);
   VAR_11->retrieved = VAR_5;
   VAR_11->startTime = 0;
   return VAR_5;
  }

  else if ( VAR_11->startTime < FUNC_1() - VAR_3->integer ) {
   VAR_11->print = VAR_4;
   VAR_11->pending = VAR_5;
   VAR_11->retrieved = VAR_4;
   VAR_11->time = 0;
   VAR_11->startTime = FUNC_1();
   FUNC_3( VAR_1, VAR_10, "getstatus" );
   return VAR_4;
  }
 }

 else if ( VAR_11->retrieved ) {
  VAR_11->address = VAR_10;
  VAR_11->print = VAR_4;
  VAR_11->pending = VAR_5;
  VAR_11->retrieved = VAR_4;
  VAR_11->startTime = FUNC_1();
  VAR_11->time = 0;
  FUNC_3( VAR_1, VAR_10, "getstatus" );
  return VAR_4;
 }
 return VAR_4;
}
