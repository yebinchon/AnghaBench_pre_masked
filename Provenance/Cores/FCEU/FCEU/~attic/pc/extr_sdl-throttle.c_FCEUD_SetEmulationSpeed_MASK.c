
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;





 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;

void FUNC_4(int VAR_3)
{
 switch(VAR_3)
 {
 case 128: VAR_0=VAR_1[0]; break;
 case 129: FUNC_0(); break;
 case 130: VAR_0=256; break;
 case 132: FUNC_2(); break;
 case 131: VAR_0=VAR_1[VAR_2-1]; break;
 default:
  return;
 }

 FUNC_3();

 FUNC_1("emulation speed %d%%",(VAR_0*100)>>8);
}
