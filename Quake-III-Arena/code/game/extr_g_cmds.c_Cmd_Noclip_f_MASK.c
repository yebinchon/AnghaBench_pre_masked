
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* client; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_6__ {int noclip; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (char*,char*) ;

void FUNC_3( gentity_t *VAR_1 ) {
 char *VAR_2;

 if ( !FUNC_0( VAR_1 ) ) {
  return;
 }

 if ( VAR_1->client->noclip ) {
  VAR_2 = "noclip OFF\n";
 } else {
  VAR_2 = "noclip ON\n";
 }
 VAR_1->client->noclip = !VAR_1->client->noclip;

 FUNC_1( VAR_1-VAR_0, FUNC_2("print \"%s\"", VAR_2));
}
