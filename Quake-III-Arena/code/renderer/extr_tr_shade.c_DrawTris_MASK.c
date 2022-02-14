
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int indexes; int numIndexes; int numVertexes; int xyz; } ;
typedef TYPE_1__ shaderCommands_t ;
struct TYPE_5__ {int whiteImage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int,int ,int,int ) ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static void FUNC_10 (shaderCommands_t *VAR_6) {
 FUNC_0( VAR_5.whiteImage );
 FUNC_4 (1,1,1);

 FUNC_1( VAR_1 | VAR_0 );
 FUNC_5( 0, 0 );

 FUNC_6 (VAR_2);
 FUNC_6 (VAR_4);

 FUNC_9 (3, VAR_3, 16, VAR_6->xyz);

 if (&FUNC_7) {
  FUNC_7(0, VAR_6->numVertexes);
  FUNC_2( "glLockArraysEXT\n" );
 }

 FUNC_3( VAR_6->numIndexes, VAR_6->indexes );

 if (&FUNC_8) {
  FUNC_8();
  FUNC_2( "glUnlockArraysEXT\n" );
 }
 FUNC_5( 0, 1 );
}
