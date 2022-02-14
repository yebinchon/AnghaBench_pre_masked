
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* downloadName; } ;
typedef TYPE_1__ client_t ;
struct TYPE_7__ {int clients; } ;


 int FUNC_0 (char*,TYPE_1__*,scalar_t__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__ VAR_0 ;

void FUNC_2( client_t *VAR_1 ) {
 if (*VAR_1->downloadName)
  FUNC_0( "clientDownload: %d : file \"%s\" aborted\n", VAR_1 - VAR_0.clients, VAR_1->downloadName );

 FUNC_1( VAR_1 );
}
