
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ip ;
typedef int UINT ;
typedef int UCHAR ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char*,int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;

void FUNC_7(char *VAR_0, UINT VAR_1, UINT VAR_2, UCHAR *VAR_3)
{
 IP VAR_4;
 IP VAR_5;
 IP VAR_6;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_6(&VAR_6, sizeof(VAR_6));

 FUNC_5(&VAR_4, VAR_2);
 FUNC_4(&VAR_5, VAR_3);

 if (FUNC_2(&VAR_4) || (FUNC_3(&VAR_4) && (FUNC_3(&VAR_5) == 0)))
 {
  FUNC_0(&VAR_6, &VAR_5, sizeof(IP));
 }
 else
 {
  FUNC_0(&VAR_6, &VAR_4, sizeof(IP));
 }

 FUNC_1(VAR_0, VAR_1, &VAR_6);
}
