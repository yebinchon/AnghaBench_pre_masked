
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * buffer; } ;
struct TYPE_5__ {TYPE_1__ field; } ;
struct TYPE_6__ {TYPE_2__ savename; } ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4( void *VAR_4, int VAR_5 ) {
 char VAR_6[VAR_1];

 if( VAR_5 != VAR_2 ) {
  return;
 }

 if( !VAR_3.savename.field.buffer[0] ) {
  return;
 }

 FUNC_0(VAR_3.savename.field.buffer, VAR_6 );
 FUNC_2( VAR_0, FUNC_3( "writeconfig %s.cfg\n", VAR_6 ) );
 FUNC_1();
}
