
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(int VAR_3)
{
 if (VAR_3 < 0)
  return -VAR_0;
 else if (VAR_3 < 60)
  VAR_1 = VAR_3|(1 << 6);
 else if (VAR_3 < 3600)
  VAR_1 = (VAR_3 / 60)|(1 << 7);
 else if (VAR_3 < 18000)
  VAR_1 = (VAR_3 / 300)|(1 << 6)|(1 << 7);
 else
  return -VAR_0;

 VAR_2 = VAR_3;
 return 0;
}
