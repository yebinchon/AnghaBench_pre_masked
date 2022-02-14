
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0( void )
{
 int VAR_2;

 for (VAR_2=0; VAR_2<20; VAR_2++) {
  VAR_0[VAR_2] = VAR_0[VAR_2+20];
  VAR_0[VAR_2+20] = ' ';
 }
 VAR_1 = 20;
}
