
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ name; int (* func ) (TYPE_2__*) ;} ;
typedef TYPE_1__ ucmd_t ;
typedef scalar_t__ qboolean ;
struct TYPE_10__ {int name; } ;
typedef TYPE_2__ client_t ;
struct TYPE_12__ {scalar_t__ state; } ;
struct TYPE_11__ {int clients; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_1__* VAR_7 ;

void FUNC_6( client_t *VAR_8, const char *VAR_9, qboolean VAR_10 ) {
 ucmd_t *VAR_11;
 qboolean VAR_12 = VAR_3;

 FUNC_1( VAR_9 );


 for (VAR_11=VAR_7 ; VAR_11->name ; VAR_11++) {
  if (!FUNC_4 (FUNC_0(0), VAR_11->name) ) {
   VAR_11->func( VAR_8 );
   VAR_12 = VAR_4;
   break;
  }
 }

 if (VAR_10) {

  if (!VAR_11->name && VAR_5.state == VAR_1) {
   FUNC_3( VAR_2, VAR_0, VAR_8 - VAR_6.clients );
  }
 }
 else if (!VAR_12)
  FUNC_2( "client text ignored for %s: %s\n", VAR_8->name, FUNC_0(0) );
}
