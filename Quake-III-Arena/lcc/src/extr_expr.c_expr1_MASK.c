
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* Tree ;


 scalar_t__ VAR_0 ;


 void* FUNC_0 (scalar_t__,void*,int ) ;
 int FUNC_1 (char) ;
 void* FUNC_2 () ;
 char FUNC_3 () ;
 void* FUNC_4 (int,void*,void*) ;
 scalar_t__* VAR_1 ;
 int* VAR_2 ;
 char VAR_3 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (void*) ;

Tree FUNC_7(int VAR_4) {
 static char VAR_5[] = { 128, 129, 0 };
 Tree VAR_6 = FUNC_2();

 if (VAR_3 == '='
 || (VAR_2[VAR_3] >= 6 && VAR_2[VAR_3] <= 8)
 || (VAR_2[VAR_3] >= 11 && VAR_2[VAR_3] <= 13)) {
  int VAR_7 = VAR_3;
  VAR_3 = FUNC_3();
  if (VAR_1[VAR_7] == VAR_0)
   VAR_6 = FUNC_0(VAR_0, VAR_6, FUNC_6(FUNC_7(0)));
  else
   {
    FUNC_1('=');
    VAR_6 = FUNC_4(VAR_7, VAR_6, FUNC_7(0));
   }
 }
 if (VAR_4)
  FUNC_5(VAR_4, VAR_5);
 return VAR_6;
}
