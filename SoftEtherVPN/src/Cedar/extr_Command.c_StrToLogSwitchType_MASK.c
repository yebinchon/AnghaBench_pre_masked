
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (char*,char*) ;

UINT FUNC_2(char *VAR_7)
{
 UINT VAR_8 = VAR_0;

 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 if (FUNC_0(VAR_7) || FUNC_1("none", VAR_7))
 {
  VAR_8 = VAR_5;
 }
 else if (FUNC_1("second", VAR_7))
 {
  VAR_8 = VAR_6;
 }
 else if (FUNC_1("minute", VAR_7))
 {
  VAR_8 = VAR_3;
 }
 else if (FUNC_1("hour", VAR_7))
 {
  VAR_8 = VAR_2;
 }
 else if (FUNC_1("day", VAR_7))
 {
  VAR_8 = VAR_1;
 }
 else if (FUNC_1("month", VAR_7))
 {
  VAR_8 = VAR_4;
 }

 return VAR_8;
}
