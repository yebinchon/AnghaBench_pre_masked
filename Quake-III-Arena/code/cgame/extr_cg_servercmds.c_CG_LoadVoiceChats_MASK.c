
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int *,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int * VAR_1 ;

void FUNC_3( void ) {
 int VAR_2;

 VAR_2 = FUNC_2();
 FUNC_0( "scripts/female1.voice", &VAR_1[0], VAR_0 );
 FUNC_0( "scripts/female2.voice", &VAR_1[1], VAR_0 );
 FUNC_0( "scripts/female3.voice", &VAR_1[2], VAR_0 );
 FUNC_0( "scripts/male1.voice", &VAR_1[3], VAR_0 );
 FUNC_0( "scripts/male2.voice", &VAR_1[4], VAR_0 );
 FUNC_0( "scripts/male3.voice", &VAR_1[5], VAR_0 );
 FUNC_0( "scripts/male4.voice", &VAR_1[6], VAR_0 );
 FUNC_0( "scripts/male5.voice", &VAR_1[7], VAR_0 );
 FUNC_1("voice chat memory size = %d\n", VAR_2 - FUNC_2());
}
