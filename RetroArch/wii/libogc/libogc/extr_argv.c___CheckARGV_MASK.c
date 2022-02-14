
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ argvMagic; char* commandLine; scalar_t__ endARGV; int length; int * argv; scalar_t__ argc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,int ) ;

void FUNC_2() {

 if ( VAR_3->argvMagic != VAR_0 ) {
  VAR_3->argc = 0;
  VAR_3->argv = ((void*)0);
  return;
 }

 u8 *VAR_4 = (u8 *)( ((int)VAR_1 + 3) & ~3);

 FUNC_1(VAR_4, VAR_3->commandLine, VAR_3->length);
 VAR_3->commandLine = (char *)VAR_4;
 FUNC_0(VAR_3);

 VAR_2 = (char *)VAR_3->endARGV;

}
