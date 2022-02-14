
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char UBYTE ;


 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 char FUNC_2 (char*,int ) ;
 int VAR_8 ;
 char FUNC_3 () ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(int VAR_9)
{
 FUNC_0(FUNC_4("TransferStatus:%d\n",VAR_8));
 switch (VAR_8) {
 case 129:
  FUNC_0(FUNC_4("CommandIndex:%d ExpectedBytes:%d\n",VAR_1,VAR_4));
  if (VAR_1 < VAR_4) {
   VAR_0[VAR_1++] = VAR_9;
   if (VAR_1 >= VAR_4) {
    if (VAR_0[0] >= 0x31 && VAR_0[0] <= 0x38) {
     VAR_8 = VAR_7;

     FUNC_0(FUNC_4("TransferStatus = PIO_StatusRead\n"));
    }
    else{
     VAR_8 = VAR_6;
     FUNC_0(FUNC_4("TransferStatus = PIO_NoFrame\n"));
    }
   }
  }
  else {
   FUNC_1("Invalid command frame!");
   VAR_8 = VAR_6;
  }
  break;
 case 128:
  if (VAR_3 < VAR_4) {
   VAR_2[VAR_3++] = VAR_9;
   if (VAR_3 >= VAR_4) {
    UBYTE VAR_10 = FUNC_2(VAR_2, VAR_4 - 1);
    if (VAR_10 == VAR_2[VAR_4 - 1]) {
     UBYTE VAR_11 = FUNC_3();
     if (VAR_11 != 0) {
      VAR_2[0] = 'A';
      VAR_2[1] = VAR_11;
      VAR_3 = 0;
      VAR_4 = 2;

      VAR_8 = VAR_5;
     }
     else
      VAR_8 = VAR_6;
    }
    else {
     VAR_2[0] = 'E';
     VAR_3 = 0;
     VAR_4 = 1;

     VAR_8 = VAR_5;
    }
   }
  }
  else {
   FUNC_1("Invalid data frame!");
  }
  break;
 }

}
