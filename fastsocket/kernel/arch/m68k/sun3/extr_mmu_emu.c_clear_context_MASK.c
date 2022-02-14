
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int context; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct mm_struct** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int* VAR_4 ;
 unsigned long* VAR_5 ;
 scalar_t__* VAR_6 ;
 unsigned char FUNC_1 () ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (scalar_t__,unsigned long) ;

void FUNC_4(unsigned long VAR_7)
{
     unsigned char VAR_8;
     unsigned long VAR_9;

     if(VAR_7) {
      if(!VAR_2[VAR_7])
       FUNC_0("clear_context: context not allocated\n");

      VAR_2[VAR_7]->context = VAR_0;
      VAR_2[VAR_7] = (struct mm_struct *)0;
      VAR_3++;
     }

     VAR_8 = FUNC_1();

     FUNC_2(VAR_7);

     for(VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
      if((VAR_5[VAR_9] == VAR_7) && (VAR_4[VAR_9] == 1)) {
       FUNC_3(VAR_6[VAR_9], VAR_1);
       VAR_5[VAR_9] = 0;
       VAR_4[VAR_9] = 0;
       VAR_6[VAR_9] = 0;
      }
     }

     FUNC_2(VAR_8);
}
