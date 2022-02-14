
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,char*) ;

UINT FUNC_2(char *VAR_4)
{
 UINT VAR_5 = VAR_0;
 if (VAR_4 == ((void*)0))
 {
  return VAR_0;
 }

 if (FUNC_1("none", VAR_4) || FUNC_0(VAR_4))
 {
  VAR_5 = VAR_3;
 }
 else if (FUNC_1("header", VAR_4))
 {
  VAR_5 = VAR_2;
 }
 else if (FUNC_1("full", VAR_4) || FUNC_1("all", VAR_4))
 {
  VAR_5 = VAR_1;
 }

 return VAR_5;
}
