
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int programStack; int dataMask; int instructionPointersLength; int currentlyInterpreting; scalar_t__ instructionPointers; scalar_t__ codeBase; int * dataBase; } ;
typedef TYPE_1__ vm_t ;
typedef int byte ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void FUNC_0 (int,int,int,int,int,int,int,int) ;
 void FUNC_1 (int,int,int,int,int,int,int,int) ;

int FUNC_2( vm_t *VAR_4, int *VAR_5 ) {
 int VAR_6[1024];
 int VAR_7;
 int VAR_8;
 byte *VAR_9;

 VAR_1 = VAR_4;





 VAR_4->currentlyInterpreting = VAR_3;


 VAR_7 = VAR_4->programStack;
 VAR_8 = VAR_7;
 VAR_9 = VAR_4->dataBase;


 VAR_7 -= 48;

 *(int *)&VAR_9[ VAR_7 + 44] = VAR_5[9];
 *(int *)&VAR_9[ VAR_7 + 40] = VAR_5[8];
 *(int *)&VAR_9[ VAR_7 + 36] = VAR_5[7];
 *(int *)&VAR_9[ VAR_7 + 32] = VAR_5[6];
 *(int *)&VAR_9[ VAR_7 + 28] = VAR_5[5];
 *(int *)&VAR_9[ VAR_7 + 24] = VAR_5[4];
 *(int *)&VAR_9[ VAR_7 + 20] = VAR_5[3];
 *(int *)&VAR_9[ VAR_7 + 16] = VAR_5[2];
 *(int *)&VAR_9[ VAR_7 + 12] = VAR_5[1];
 *(int *)&VAR_9[ VAR_7 + 8 ] = VAR_5[0];
 *(int *)&VAR_9[ VAR_7 + 4 ] = 0;
 *(int *)&VAR_9[ VAR_7 ] = -1;






 ((void(*)(int, int, int, int, int, int, int, int))(VAR_4->codeBase))(
  VAR_7, (int)&VAR_6,
  (int)VAR_9, VAR_4->dataMask, (int)&VAR_0,
  (int)VAR_4->instructionPointers, VAR_4->instructionPointersLength,
        (int)VAR_4 );







 VAR_4->programStack = VAR_8;

    VAR_4->currentlyInterpreting = VAR_2;

 return VAR_6[1];
}
