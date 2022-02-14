
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list_ty ;
typedef int * Symbol ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int **,int **) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(Symbol VAR_2, Symbol VAR_3[], Symbol VAR_4[], int VAR_5) {
 list_ty VAR_6 = FUNC_1(0), VAR_7, VAR_8 = FUNC_1(0), VAR_9 = FUNC_1(0);
 int VAR_10;

 FUNC_4(VAR_2);
 for (VAR_10 = 0; VAR_3[VAR_10] != ((void*)0); VAR_10++) {
  FUNC_2(VAR_3[VAR_10]);
  FUNC_0(VAR_9, FUNC_10(FUNC_9(VAR_3[VAR_10])));
 }
 for (VAR_10 = 0; VAR_4[VAR_10] != ((void*)0); VAR_10++) {
  FUNC_2(VAR_4[VAR_10]);
  FUNC_0(VAR_8, FUNC_10(FUNC_9(VAR_4[VAR_10])));
 }
 VAR_7 = VAR_1;
 VAR_1 = VAR_6;
 FUNC_6(VAR_3, VAR_4);
 FUNC_3(VAR_0);
 FUNC_5();
 VAR_1 = VAR_7;
 FUNC_7(FUNC_8(FUNC_9(VAR_2), VAR_9, VAR_8, VAR_5, VAR_6));
}
