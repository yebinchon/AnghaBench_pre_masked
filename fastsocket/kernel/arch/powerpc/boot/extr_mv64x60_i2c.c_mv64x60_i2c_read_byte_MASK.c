
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(int VAR_3, int VAR_4)
{
 FUNC_2((u32 *)(VAR_2 + VAR_0), VAR_3 & 0xff);
 if (FUNC_1(VAR_4) < 0)
  return -1;
 return FUNC_0((u32 *)(VAR_2 + VAR_1)) & 0xff;
}
