
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_9__ {int number; } ;
struct TYPE_10__ {TYPE_1__ s; int client; int inuse; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_11__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__ VAR_7 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (char*,char*,int ,int ,int,char const*) ;

__attribute__((used)) static void FUNC_3( gentity_t *VAR_8, gentity_t *VAR_9, int VAR_10, const char *VAR_11, qboolean VAR_12 ) {
 int VAR_13;
 char *VAR_14;

 if (!VAR_9) {
  return;
 }
 if (!VAR_9->inuse) {
  return;
 }
 if (!VAR_9->client) {
  return;
 }
 if ( VAR_10 == VAR_4 && !FUNC_0(VAR_8, VAR_9) ) {
  return;
 }

 if ( VAR_7.integer == VAR_3 ) {
  return;
 }

 if (VAR_10 == VAR_4) {
  VAR_13 = VAR_0;
  VAR_14 = "vtchat";
 }
 else if (VAR_10 == VAR_5) {
  VAR_13 = VAR_2;
  VAR_14 = "vtell";
 }
 else {
  VAR_13 = VAR_1;
  VAR_14 = "vchat";
 }

 FUNC_1( VAR_9-VAR_6, FUNC_2("%s %d %d %d %s", VAR_14, VAR_12, VAR_8->s.number, VAR_13, VAR_11));
}
