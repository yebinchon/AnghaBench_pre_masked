
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4;
  FUNC_0(VAR_3);
  for(VAR_4=(VAR_2-1)*4; VAR_4>=0; VAR_4-=4) {
    FUNC_0(VAR_0[(VAR_1>>VAR_4)&15] );
  }
}
