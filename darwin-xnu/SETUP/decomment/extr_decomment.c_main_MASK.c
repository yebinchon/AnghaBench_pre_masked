
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int input_state_t ;
typedef int FILE ;


 char VAR_0 ;





 int FUNC_0 (int) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 char FUNC_3 (int *) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char) ;
 int VAR_1 ;
 int FUNC_7 (char**) ;

int FUNC_8(int VAR_2, char **VAR_3)
{
 FILE *VAR_4;
 char VAR_5;
 input_state_t VAR_6 = 130;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9;

 if(VAR_2 < 2)
  FUNC_7(VAR_3);
 for(VAR_9=2; VAR_9<VAR_2; VAR_9++) {
  switch(VAR_3[VAR_9][0]) {
      case 'r':
       VAR_8++;
   break;
      default:
       FUNC_7(VAR_3);
  }
 }

 VAR_4 = FUNC_1(VAR_3[1], "r");
 if(!VAR_4) {
  FUNC_2(VAR_1, "Error opening %s\n", VAR_3[1]);
  FUNC_5("fopen");
  FUNC_0(1);
 }
 for(;;) {
  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5 == VAR_0)
   break;

  switch(VAR_6) {

      case 130:
       if(VAR_5 == '/') {



    VAR_6 = 129;
   }
   else {
    if(!(VAR_8 && FUNC_4(VAR_5))) {
     FUNC_6(VAR_5);
    }
   }
   break;

      case 129:
       switch(VAR_5) {
       case '*':



    VAR_6 = 132;
    break;

       case '/':



    VAR_6 = 131;
    break;

       default:






    FUNC_6('/');
    if(!(VAR_8 && FUNC_4(VAR_5))) {
     FUNC_6(VAR_5);
    }
    VAR_6 = 130;
    break;
   }
   break;

      case 132:
       if(VAR_5 == '*') {



        VAR_6 = 128;
   }
       break;


      case 128:
       switch(VAR_5) {
       case '/':



    VAR_6 = 130;
    break;

       case '*':




    break;

       default:



    VAR_6 = 132;
    break;
   }
   break;

      case 131:
       if(VAR_5 == '\n') {




    if(!VAR_8) {
     FUNC_6(VAR_5);
    }
    VAR_6 = 130;
   }
   break;

  }
 }




 return(VAR_7);
}
