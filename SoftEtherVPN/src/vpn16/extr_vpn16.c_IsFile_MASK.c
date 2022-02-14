
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HFILE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ) ;

BOOL FUNC_2(char *VAR_4)
{
 HFILE VAR_5;
 if (VAR_4 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_5 = FUNC_1(VAR_4, VAR_2);
 if (VAR_5 == VAR_1)
 {
  return VAR_0;
 }
 FUNC_0(VAR_5);

 return VAR_3;
}
