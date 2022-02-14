
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int IP ;
typedef int DDNS_CLIENT ;


 scalar_t__ FUNC_0 (int *,int,char*,scalar_t__,int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,char*) ;

UINT FUNC_5(DDNS_CLIENT *VAR_2, bool VAR_3, char *VAR_4, UINT VAR_5, char *VAR_6)
{
 UINT VAR_7 = VAR_0;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, 0, VAR_6);


 if (VAR_7 == VAR_1)
 {
  IP VAR_8;

  if (FUNC_4(&VAR_8, VAR_4))
  {
   if (VAR_3 == 0 && FUNC_1(&VAR_8))
   {
    FUNC_3(&VAR_8, 0);
   }
   else if (VAR_3 && FUNC_2(&VAR_8))
   {
    FUNC_3(&VAR_8, 1);
   }
  }
 }

 return VAR_7;
}
