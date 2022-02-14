
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int VAR_0 ;
 unsigned int* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_1( int VAR_3, int VAR_4, int VAR_5, int VAR_6 ) {
 unsigned VAR_7;

 if ( VAR_6 > 32767 || VAR_6 < -32768 ) {
     FUNC_0( VAR_0, "VM_Compile: immediate value %i out of range, opcode %x,%d,%d", VAR_6, VAR_3, VAR_4, VAR_5 );
 }
 VAR_7 = VAR_3 | ( VAR_4 << 21 ) | ( VAR_5 << 16 ) | ( VAR_6 & 0xffff );
 VAR_1[ VAR_2 ] = VAR_7;
 VAR_2++;
}
