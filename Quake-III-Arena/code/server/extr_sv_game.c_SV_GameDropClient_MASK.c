
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int integer; } ;
struct TYPE_3__ {scalar_t__ clients; } ;


 int FUNC_0 (scalar_t__,char const*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_1( int VAR_2, const char *VAR_3 ) {
 if ( VAR_2 < 0 || VAR_2 >= VAR_0->integer ) {
  return;
 }
 FUNC_0( VAR_1.clients + VAR_2, VAR_3 );
}
