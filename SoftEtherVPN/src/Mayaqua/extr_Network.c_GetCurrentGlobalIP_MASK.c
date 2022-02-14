
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

bool FUNC_4(IP *VAR_4, bool VAR_5)
{
 bool VAR_6 = 0;

 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 FUNC_3(VAR_4, sizeof(IP));

 FUNC_1(VAR_0);
 {
  if (VAR_5 == 0)
  {
   FUNC_0(VAR_4, &VAR_2, sizeof(IP));
  }
  else
  {
   FUNC_0(VAR_4, &VAR_3, sizeof(IP));
  }

  VAR_6 = VAR_1;
 }
 FUNC_2(VAR_0);

 return VAR_6;
}
