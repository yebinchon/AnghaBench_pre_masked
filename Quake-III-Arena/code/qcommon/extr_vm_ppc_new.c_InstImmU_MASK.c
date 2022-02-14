
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 unsigned int* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,unsigned int*,char*,int,int,int) ;

__attribute__((used)) static void FUNC_2( char *VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8 ) {
 unsigned VAR_9;

 if ( VAR_8 > 0xffff || VAR_8 < 0 ) {
  FUNC_0( VAR_0, "VM_Compile: immediate value %i out of range", VAR_8 );
 }




    VAR_9 = VAR_5 | ( VAR_6 << 21 ) | ( VAR_7 << 16 ) | ( VAR_8 & 0xffff );
 VAR_1[ VAR_2 ] = VAR_9;
 VAR_2++;
}
