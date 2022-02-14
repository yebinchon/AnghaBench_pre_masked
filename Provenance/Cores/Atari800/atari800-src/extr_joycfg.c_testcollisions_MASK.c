
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int) ;
 size_t VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 size_t VAR_4 ;
 int* VAR_5 ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7()
{
  int VAR_6;

  FUNC_0();
  FUNC_6(VAR_0+VAR_1);
  FUNC_2((78-24)/2,3);
  FUNC_1("Test keyboard collisions");
  FUNC_2((78-61)/2,5);
  FUNC_1("Here you can test, if the keys you've choosen do not collide.");
  FUNC_2((78-43)/2,6);
  FUNC_1("(only few keyboards allow all combinations)");
  FUNC_2((78-18)/2,8);
  FUNC_1("Press ESC to exit.");
  for (VAR_6=0;VAR_6<256;VAR_6++) VAR_5[VAR_6]=0;
  FUNC_4();
  do{
    FUNC_5(17,12,0);
    FUNC_5(29,12,1);
    FUNC_5(41,12,2);
    FUNC_5(53,12,3);
    while (VAR_3==VAR_4);
    VAR_5[VAR_2[VAR_4]&0xff]=VAR_2[VAR_4]<0x100;
    VAR_4++;
    if (VAR_4==100) VAR_4=0;
  }while(!VAR_5[1]);

  do{
    while (VAR_3==VAR_4);
    VAR_5[VAR_2[VAR_4]&0xff]=VAR_2[VAR_4]<0x100;
    VAR_4++;
    if (VAR_4==100) VAR_4=0;
  }while(VAR_5[1]);
  FUNC_3();
}
