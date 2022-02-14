
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int * VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;
 int ** VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static void FUNC_2(int VAR_7)
{



 int VAR_8;

 for(VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
  FUNC_1(VAR_6[VAR_8] == 0);

  VAR_5[VAR_8] = &VAR_2[VAR_3];
  FUNC_0( "lwz", VAR_0, VAR_4[VAR_8], VAR_1, VAR_8*4+4);
  VAR_6[VAR_8] = 1;
 }
}
