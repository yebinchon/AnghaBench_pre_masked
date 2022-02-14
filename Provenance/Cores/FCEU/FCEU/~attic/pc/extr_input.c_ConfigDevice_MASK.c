
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int FUNC_0 () ;
 int FUNC_1 () ;




 int ** VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int ** VAR_3 ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(int VAR_4, int VAR_5)
{
 uint8 VAR_6[256];
 int VAR_7;

 FUNC_0();
 switch(VAR_4)
 {
  case 128:
   for(VAR_7=0;VAR_7<6;VAR_7++)
   {
    FUNC_2(VAR_6,"Quiz King Buzzer #%d", VAR_7+1);
    FUNC_3(VAR_6,&VAR_2[VAR_7]);
   }
   break;
  case 130:
   for(VAR_7=0;VAR_7<4;VAR_7++)
   {
    FUNC_2(VAR_6,"Hyper Shot %d: %s",((VAR_7&2)>>1)+1,(VAR_7&1)?"JUMP":"RUN");
    FUNC_3(VAR_6,&VAR_1[VAR_7]);
   }
   break;
  case 129:
   for(VAR_7=0;VAR_7<12;VAR_7++)
   {
    FUNC_2(VAR_6,"PowerPad %d: %d", (VAR_5&1)+1,VAR_7+11);
    FUNC_3(VAR_6,&VAR_3[VAR_5&1][VAR_7]);
   }
   break;

  case 131:
  {
   char *VAR_8[10]={"A","B","SELECT","START","UP","DOWN","LEFT","RIGHT","Rapid A","Rapid B"};
   for(VAR_7=0;VAR_7<10;VAR_7++)
   {
    FUNC_2(VAR_6,"GamePad #%d: %s",VAR_5+1,VAR_8[VAR_7]);
    FUNC_3(VAR_6,&VAR_0[VAR_5][VAR_7]);
   }
  }
  break;
 }

 FUNC_1();
}
