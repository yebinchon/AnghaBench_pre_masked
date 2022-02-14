
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int UCHAR ;


 int FUNC_0 (char*,int ,char*,int ,int ,int ,int ,int ,int ) ;

void FUNC_1(char *VAR_0, UINT VAR_1, UCHAR *VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, VAR_1, "%02X-%02X-%02X-%02X-%02X-%02X",
  VAR_2[0],
  VAR_2[1],
  VAR_2[2],
  VAR_2[3],
  VAR_2[4],
  VAR_2[5]);
}
