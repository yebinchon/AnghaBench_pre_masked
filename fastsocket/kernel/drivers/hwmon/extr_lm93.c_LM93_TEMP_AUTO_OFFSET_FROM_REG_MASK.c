
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(u8 VAR_0, int VAR_1, int VAR_2)
{

 if (VAR_1 < 2)
  return FUNC_0(VAR_0 & 0x0f, VAR_2);


 else
  return FUNC_0(VAR_0 >> 4 & 0x0f, VAR_2);
}
