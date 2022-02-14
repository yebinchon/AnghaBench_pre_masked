
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
typedef TYPE_3__ menucommon_s ;
struct TYPE_5__ {int * buffer; } ;
struct TYPE_6__ {TYPE_1__ field; } ;
struct TYPE_8__ {TYPE_2__ cdkey; } ;




 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( void *VAR_2, int VAR_3 ) {
 if( VAR_3 != VAR_0 ) {
  return;
 }

 switch( ((menucommon_s*)VAR_2)->id ) {
 case 129:
  if( VAR_1.cdkey.field.buffer[0] ) {
   FUNC_1( VAR_1.cdkey.field.buffer );
  }
  FUNC_0();
  break;

 case 128:
  FUNC_0();
  break;
 }
}
