
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,int,int,int *) ;
 int FUNC_4 (int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

int
FUNC_9(int VAR_4, char *VAR_5[])
{
 int VAR_6, VAR_7, VAR_8, VAR_9;
 FILE *VAR_10;


 FUNC_7(FUNC_8(((void*)0)));

 VAR_3 = VAR_4 - 1;





 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
 {
  VAR_2[VAR_6] = FUNC_4(0x800);
  VAR_10 = FUNC_2(VAR_5[VAR_6 + 1], "rb");
  FUNC_3(VAR_2[VAR_6], 1, 0x800, VAR_10);
  FUNC_0(VAR_10);
  VAR_0[VAR_6] = VAR_6;
 }
 VAR_1 = VAR_3;

 while (VAR_1 > 0)
 {
  FUNC_1();
  FUNC_6();
  FUNC_5();
 }

 return 0;
}
