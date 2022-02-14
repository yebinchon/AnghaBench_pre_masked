
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,int*,int ,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,int *) ;
 char** VAR_2 ;
 size_t* VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int,char*) ;
 int FUNC_3 () ;

int FUNC_4(void)
{
  char VAR_4[4][80];
  int VAR_5,VAR_6,VAR_7;

  VAR_6=0;
  do{
    for (VAR_5=0;VAR_5<4;VAR_5++)
      FUNC_2(VAR_4[VAR_5],"Joystick %i: %s",VAR_5,VAR_2[VAR_3[VAR_5]]);

    VAR_7=FUNC_0("Select function",&VAR_6,VAR_0,VAR_4[0],VAR_4[1],
               VAR_4[2],VAR_4[3],"-",
               "Configure keyset 0","Configure keyset 1",
               "Configure keyset 2","Configure keyset 3","-","Test keyboard collisions",
                "-","Save and exit","Exit without saving",((void*)0));
    switch(VAR_7)
    {
      case 0x14d:
        if (VAR_6<4)
        {
          VAR_3[VAR_6]++;
          if (VAR_3[VAR_6]==VAR_1) VAR_3[VAR_6]=0;
        }
        break;
      case 0x14b:
        if (VAR_6<4)
        {
          VAR_3[VAR_6]--;
          if (VAR_3[VAR_6]==-1) VAR_3[VAR_6]=VAR_1-1;
        }
        break;
      case 13:
        if (VAR_6<4)
        {
          VAR_3[VAR_6]++;
          if (VAR_3[VAR_6]==VAR_1) VAR_3[VAR_6]=0;
        }else
        if (VAR_6<9)
        {
          FUNC_1(VAR_6-5);
        }else
        if (VAR_6==10)
        {
          FUNC_3();
        }
        break;
    }
  }while(VAR_7!=27 && !(VAR_7==13 && VAR_6>=12));
  return (VAR_7==13 && VAR_6==12);
}
