
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tnode_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int) ;
 int * VAR_1 ;
 int * VAR_2 ;

void FUNC_3( void ) {

 VAR_2 = FUNC_2( (VAR_0+1) * sizeof(tnode_t));
 VAR_2 = (tnode_t *)(((int)VAR_2 + 31)&~31);
 VAR_1 = VAR_2;

 FUNC_1 (0);

 FUNC_0();
}
