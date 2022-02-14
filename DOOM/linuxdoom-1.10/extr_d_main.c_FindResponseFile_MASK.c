
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (char**,int ,int) ;
 int VAR_3 ;
 char** VAR_4 ;
 int FUNC_8 (char*,...) ;

void FUNC_9 (void)
{
    int VAR_5;


    for (VAR_5 = 1;VAR_5 < VAR_3;VAR_5++)
 if (VAR_4[VAR_5][0] == '@')
 {
     FILE * VAR_6;
     int VAR_7;
     int VAR_8;
     int VAR_9;
     int VAR_10;
     char *VAR_11;
     char *VAR_12;
     char *VAR_13[20];
     char *VAR_14;


     VAR_6 = FUNC_2 (&VAR_4[VAR_5][1],"rb");
     if (!VAR_6)
     {
  FUNC_8 ("\nNo such response file!");
  FUNC_0(1);
     }
     FUNC_8("Found response file %s!\n",&VAR_4[VAR_5][1]);
     FUNC_4 (VAR_6,0,VAR_1);
     VAR_7 = FUNC_5(VAR_6);
     FUNC_4 (VAR_6,0,VAR_2);
     VAR_12 = FUNC_6 (VAR_7);
     FUNC_3 (VAR_12,VAR_7,1,VAR_6);
     FUNC_1 (VAR_6);


     for (VAR_9 = 0,VAR_8 = VAR_5+1; VAR_8 < VAR_3; VAR_8++)
  VAR_13[VAR_9++] = VAR_4[VAR_8];

     VAR_14 = VAR_4[0];
     VAR_4 = FUNC_6(sizeof(char *)*100);
     FUNC_7(VAR_4,0,sizeof(char *)*100);
     VAR_4[0] = VAR_14;

     VAR_11 = VAR_12;
     VAR_10 = VAR_8 = 0;
     VAR_10++;
     do
     {
  VAR_4[VAR_10++] = VAR_11+VAR_8;
  while(VAR_8 < VAR_7 &&
        ((*(VAR_11+VAR_8)>= ' '+1) && (*(VAR_11+VAR_8)<='z')))
      VAR_8++;
  *(VAR_11+VAR_8) = 0;
  while(VAR_8 < VAR_7 &&
        ((*(VAR_11+VAR_8)<= ' ') || (*(VAR_11+VAR_8)>'z')))
      VAR_8++;
     } while(VAR_8 < VAR_7);

     for (VAR_8 = 0;VAR_8 < VAR_9;VAR_8++)
  VAR_4[VAR_10++] = VAR_13[VAR_8];
     VAR_3 = VAR_10;


     FUNC_8("%d command-line args:\n",VAR_3);
     for (VAR_8=1;VAR_8<VAR_3;VAR_8++)
  FUNC_8("%s\n",VAR_4[VAR_8]);

     break;
 }
}
