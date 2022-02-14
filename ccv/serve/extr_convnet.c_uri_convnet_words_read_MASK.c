
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int ccv_array_t ;
typedef int FILE ;


 int * FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *,char**) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,size_t*,int *) ;
 scalar_t__ FUNC_5 (char) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static ccv_array_t* FUNC_8(char* VAR_0)
{
 FILE* VAR_1 = FUNC_2(VAR_0, "rt");
 if(VAR_1)
 {
  ccv_array_t* VAR_2 = FUNC_0(sizeof(char*), 32, 0);
  size_t VAR_3 = 1024;
  char* VAR_4 = (char*)FUNC_6(VAR_3);
  ssize_t VAR_5;
  while((VAR_5 = FUNC_4(&VAR_4, &VAR_3, VAR_1)) != -1)
  {
   while(VAR_5 > 1 && FUNC_5(VAR_4[VAR_5 - 1]))
    VAR_5--;
   VAR_4[VAR_5] = 0;
   char* VAR_6 = (char*)FUNC_6(sizeof(char) * (VAR_5 + 1));
   FUNC_7(VAR_6, VAR_4, sizeof(char) * (VAR_5 + 1));
   FUNC_1(VAR_2, &VAR_6);
  }
  FUNC_3(VAR_4);
  return VAR_2;
 }
 return 0;
}
