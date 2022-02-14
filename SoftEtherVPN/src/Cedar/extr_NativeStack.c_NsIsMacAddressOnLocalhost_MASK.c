
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UCHAR ;


 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;

bool FUNC_2(UCHAR *VAR_1)
{
 UCHAR VAR_2[2];

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_1[0] != VAR_0)
 {
  return 0;
 }

 FUNC_1(VAR_2, VAR_1);

 if (FUNC_0(VAR_1 + 4, VAR_2, 2) == 0)
 {
  return 1;
 }

 return 0;
}
