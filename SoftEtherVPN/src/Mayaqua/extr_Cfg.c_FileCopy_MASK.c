
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BUF ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int ) ;

bool FUNC_4(char *VAR_0, char *VAR_1)
{
 BUF *VAR_2;
 bool VAR_3 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_3(VAR_2, 0, 0);

 VAR_3 = FUNC_0(VAR_2, VAR_1);

 FUNC_1(VAR_2);

 return VAR_3;
}
