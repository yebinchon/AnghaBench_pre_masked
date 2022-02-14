
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;
typedef int THREAD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int VAR_0 ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int ** FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int * VAR_1 ;

void FUNC_9()
{
 UINT VAR_2, VAR_3;
 THREAD **VAR_4;

 FUNC_3(VAR_1);
 {
  VAR_3 = FUNC_2(VAR_1);
  VAR_4 = FUNC_6(VAR_1);
  FUNC_0(VAR_1);
 }
 FUNC_7(VAR_1);

 for (VAR_2 = 0;VAR_2 < VAR_3;VAR_2++)
 {
  THREAD *VAR_5 = VAR_4[VAR_2];
  FUNC_8(VAR_5, VAR_0);
  FUNC_5(VAR_5);
 }

 FUNC_1(VAR_4);

 FUNC_4(VAR_1);
 VAR_1 = ((void*)0);
}
