
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int netsrc_t ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ netadr_t ;
struct TYPE_7__ {scalar_t__ integer; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int,void const*,TYPE_1__) ;
 int FUNC_2 (int,void const*,TYPE_1__) ;
 TYPE_2__* VAR_3 ;

void FUNC_3( netsrc_t VAR_4, int VAR_5, const void *VAR_6, netadr_t VAR_7 ) {


 if ( VAR_3->integer && *(int *)VAR_6 == -1 ) {
  FUNC_0 ("send packet %4i\n", VAR_5);
 }

 if ( VAR_7.type == VAR_2 ) {
  FUNC_1 (VAR_4, VAR_5, VAR_6, VAR_7);
  return;
 }
 if ( VAR_7.type == VAR_1 ) {
  return;
 }
 if ( VAR_7.type == VAR_0 ) {
  return;
 }

 FUNC_2( VAR_5, VAR_6, VAR_7 );
}
