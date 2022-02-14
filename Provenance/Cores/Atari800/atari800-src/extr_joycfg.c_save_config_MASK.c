
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int string ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (char*,int *) ;
 char** VAR_0 ;
 size_t* VAR_1 ;
 int** VAR_2 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

void FUNC_9()
{
  FILE *VAR_3;
  FILE *VAR_4;
  char VAR_5[256];
  int VAR_6;

  if ((VAR_3=FUNC_2("atari800.cfg","r"))==((void*)0))
  {
    FUNC_5("Error opening atari800.cfg!\n");
    return;
  }
  if ((VAR_4=FUNC_2("atari800.tmp","w"))==((void*)0))
  {
    FUNC_5("Error creating temporary file atari800.tmp!\n");
    FUNC_0(VAR_3);
    return;
  }
  while (FUNC_1(VAR_5,sizeof(VAR_5),VAR_3))
  {
    if (FUNC_8(VAR_5,"JOYSTICK_",9)!=0 && FUNC_8(VAR_5,"KEYSET_",7)!=0)
      FUNC_4(VAR_5,VAR_4);
  }
  FUNC_0(VAR_3);
  VAR_6=FUNC_7(VAR_5)-1;
  if (VAR_6>=0 && VAR_5[VAR_6]!='\n') FUNC_3(VAR_4,"\n");
  for (VAR_6=0;VAR_6<4;VAR_6++)
    FUNC_3(VAR_4,"KEYSET_%i=%i %i %i %i %i %i %i %i %i\n",VAR_6,
      VAR_2[VAR_6][0],VAR_2[VAR_6][1],VAR_2[VAR_6][2],VAR_2[VAR_6][3],
      VAR_2[VAR_6][4],VAR_2[VAR_6][5],VAR_2[VAR_6][6],VAR_2[VAR_6][7],
      VAR_2[VAR_6][8]);
  for (VAR_6=0;VAR_6<4;VAR_6++)
    FUNC_3(VAR_4,"JOYSTICK_%i=%s\n",VAR_6,VAR_0[VAR_1[VAR_6]]);
  FUNC_0(VAR_4);
  if (FUNC_6("atari800.tmp","atari800.cfg")==0)
    FUNC_5("Configuration successfully saved.\n");
  else
    FUNC_5("Error when renaming atari800.tmp to atari800.cfg!\n");
}
