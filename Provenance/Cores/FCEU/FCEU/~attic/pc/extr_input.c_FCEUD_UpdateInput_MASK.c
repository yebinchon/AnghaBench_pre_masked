
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int* VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_2 ;
 int * VAR_3 ;

void FUNC_11(void)
{
  int VAR_4;
  int VAR_5=0;

  FUNC_8();
  FUNC_1();

  for(VAR_4=0;VAR_4<2;VAR_4++)
   switch(VAR_0[VAR_4])
   {
    case 131:VAR_5|=1;break;
    case 132:VAR_5|=2;break;
    case 128:VAR_5|=2;break;
    case 130:
    case 129:VAR_3[VAR_4]=FUNC_7(VAR_4);break;
   }

  switch(VAR_0[2])
  {
   case 142:VAR_5|=2;break;
   case 134:VAR_5|=2;break;
   case 141:if(VAR_2) FUNC_2();break;
   case 138: FUNC_5();break;
   case 137: FUNC_6();break;
   case 135: FUNC_9();break;
   case 139:
   case 140: FUNC_3();break;
   case 133: FUNC_10();break;
   case 136:VAR_5|=2;break;

  }

  if(VAR_5&1)
   FUNC_4();

  if(VAR_5&2)
   FUNC_0(VAR_1);
}
