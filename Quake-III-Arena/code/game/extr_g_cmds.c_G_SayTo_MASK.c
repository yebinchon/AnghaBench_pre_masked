
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* client; int inuse; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_13__ {scalar_t__ connected; } ;
struct TYPE_11__ {scalar_t__ sessionTeam; } ;
struct TYPE_12__ {TYPE_1__ sess; TYPE_3__ pers; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_6__ VAR_6 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (char*,char*,char const*,int ,int,char const*) ;

__attribute__((used)) static void FUNC_3( gentity_t *VAR_7, gentity_t *VAR_8, int VAR_9, int VAR_10, const char *VAR_11, const char *VAR_12 ) {
 if (!VAR_8) {
  return;
 }
 if (!VAR_8->inuse) {
  return;
 }
 if (!VAR_8->client) {
  return;
 }
 if ( VAR_8->client->pers.connected != VAR_0 ) {
  return;
 }
 if ( VAR_9 == VAR_3 && !FUNC_0(VAR_7, VAR_8) ) {
  return;
 }

 if ( (VAR_6.integer == VAR_1 )
  && VAR_8->client->sess.sessionTeam == VAR_4
  && VAR_7->client->sess.sessionTeam != VAR_4 ) {
  return;
 }

 FUNC_1( VAR_8-VAR_5, FUNC_2("%s \"%s%c%c%s\"",
  VAR_9 == VAR_3 ? "tchat" : "chat",
  VAR_11, VAR_2, VAR_10, VAR_12));
}
