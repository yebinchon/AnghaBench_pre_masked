
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 () ;

void FUNC_4(int VAR_5)
{
  int VAR_6;

  FUNC_3();

  FUNC_2(0x3C8,0x00);
  for(VAR_6=0;VAR_6<768;VAR_6++) FUNC_2(0x3C9,0x00);

  FUNC_2(0x3D4,0x11);
  VAR_6=FUNC_1(0x3D5)&0x7F;
  FUNC_2(0x3D4,0x11);
  FUNC_2(0x3D5,VAR_6);

  switch(VAR_5)
  {
    case 1: for(VAR_6=0;VAR_6<25;VAR_6++) FUNC_0(VAR_2[VAR_6]);break;
    case 2: for(VAR_6=0;VAR_6<25;VAR_6++) FUNC_0(VAR_3[VAR_6]);break;
    case 3: for(VAR_6=0;VAR_6<25;VAR_6++) FUNC_0(VAR_4[VAR_6]);break;
    case 6: for(VAR_6=0;VAR_6<25;VAR_6++) FUNC_0(VAR_0[VAR_6]);break;
    case 8: for(VAR_6=0;VAR_6<25;VAR_6++) FUNC_0(VAR_1[VAR_6]);break;
    default: break;
  }

  FUNC_2(0x3da,0);
}
