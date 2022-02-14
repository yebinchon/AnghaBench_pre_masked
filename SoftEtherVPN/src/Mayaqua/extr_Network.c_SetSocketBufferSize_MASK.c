
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef scalar_t__ SOCKET ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,char*,int) ;

bool FUNC_1(SOCKET VAR_4, bool VAR_5, UINT VAR_6)
{
 int VAR_7 = (int)VAR_6;

 if (VAR_4 == VAR_0)
 {
  return 0;
 }

 if (FUNC_0(VAR_4, VAR_1, (VAR_5 ? VAR_3 : VAR_2), (char *)&VAR_7, sizeof(int)) != 0)
 {
  return 0;
 }

 return 1;
}
