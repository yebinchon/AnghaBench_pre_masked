
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int*,int ,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,int *) ;
 int FUNC_1 (char*,int) ;
 char** VAR_1 ;
 int** VAR_2 ;
 int FUNC_2 (char*,char*,char*) ;

void FUNC_3(int VAR_3)
{
  int VAR_4,VAR_5,VAR_6;
  int VAR_7[9];
  char VAR_8[80],VAR_9[80],VAR_10[80],VAR_11[80],VAR_12[80],VAR_13[80],VAR_14[80],VAR_15[80],VAR_16[80];

  for (VAR_6=0;VAR_6<9;VAR_6++) VAR_7[VAR_6]=VAR_2[VAR_3][VAR_6];
  VAR_4=0;
  do{
    FUNC_2(VAR_16,"Fire: %s",VAR_1[VAR_7[0]]);
    FUNC_2(VAR_13,"Down+left: %s",VAR_1[VAR_7[1]]);
    FUNC_2(VAR_15,"Down: %s",VAR_1[VAR_7[2]]);
    FUNC_2(VAR_14,"Down+right: %s",VAR_1[VAR_7[3]]);
    FUNC_2(VAR_11,"Left: %s",VAR_1[VAR_7[4]]);
    FUNC_2(VAR_12,"Right: %s",VAR_1[VAR_7[5]]);
    FUNC_2(VAR_8,"Up+left: %s",VAR_1[VAR_7[6]]);
    FUNC_2(VAR_9,"Up: %s",VAR_1[VAR_7[7]]);
    FUNC_2(VAR_10,"Up+right: %s",VAR_1[VAR_7[8]]);

    VAR_5=FUNC_0("Change settings:",&VAR_4,VAR_0,
        VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_15,VAR_14,VAR_16,"-","Clear all","-",
        "Accept changes",
        "Discard changes",((void*)0));
    if (VAR_5==13)
      switch(VAR_4)
      {
        case 0:VAR_7[6]=FUNC_1("up+left",VAR_7[6]);VAR_4++;break;
        case 1:VAR_7[7]=FUNC_1("up",VAR_7[7]);VAR_4++;break;
        case 2:VAR_7[8]=FUNC_1("up+right",VAR_7[8]);VAR_4++;break;
        case 3:VAR_7[4]=FUNC_1("left",VAR_7[4]);VAR_4++;break;
        case 4:VAR_7[5]=FUNC_1("right",VAR_7[5]);VAR_4++;break;
        case 5:VAR_7[1]=FUNC_1("down+left",VAR_7[1]);VAR_4++;break;
        case 6:VAR_7[2]=FUNC_1("down",VAR_7[2]);VAR_4++;break;
        case 7:VAR_7[3]=FUNC_1("down+right",VAR_7[3]);VAR_4++;break;
        case 8:VAR_7[0]=FUNC_1("fire",VAR_7[0]);break;
        case 10:for (VAR_6=0;VAR_6<9;VAR_6++) VAR_7[VAR_6]=255;break;
      }
  }while (VAR_5!=27 && !(VAR_5==13 && VAR_4>11));
  if (VAR_5==13 && VAR_4==12)
    for (VAR_6=0;VAR_6<9;VAR_6++) VAR_2[VAR_3][VAR_6]=VAR_7[VAR_6];
}
