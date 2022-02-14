
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char*) ;

BOOL FUNC_1(char VAR_2)
{
 UINT VAR_3, VAR_4;
 char *VAR_5 =
  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
  "abcdefghijklmnopqrstuvwxyz"
  "0123456789"
  " ()-_#%&.";

 VAR_4 = FUNC_0(VAR_5);
 for (VAR_3 = 0;VAR_3 < VAR_4;VAR_3++)
 {
  if (VAR_2 == VAR_5[VAR_3])
  {
   return VAR_1;
  }
 }
 return VAR_0;
}
