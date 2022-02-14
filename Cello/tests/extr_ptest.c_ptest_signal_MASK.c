
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;



 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_5 ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_7(int VAR_7) {

  VAR_6 = 0;

  switch( VAR_7 ) {
    case 130: FUNC_5(VAR_3,
      "        %i. Division by Zero\n", VAR_4+1);
    break;
    case 129: FUNC_5(VAR_3,
      "        %i. Illegal Instruction\n", VAR_4+1);
    break;
    case 128: FUNC_5(VAR_3,
      "        %i. Segmentation Fault\n", VAR_4+1);
    break;
  }

  VAR_4++;
  FUNC_6(VAR_2, VAR_3);

  FUNC_3(VAR_1);
  FUNC_2("Failed! \n\n%s\n", VAR_2);
  FUNC_3(VAR_0);

  FUNC_4("    | Stopping Execution.");
  FUNC_1(VAR_5);
  FUNC_0(0);

}
