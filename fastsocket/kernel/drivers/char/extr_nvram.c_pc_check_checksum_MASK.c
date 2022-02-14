
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_3;
 unsigned short VAR_4 = 0;
 unsigned short VAR_5;

 for (VAR_3 = VAR_2; VAR_3 <= VAR_1; ++VAR_3)
  VAR_4 += FUNC_0(VAR_3);
 VAR_5 = FUNC_0(VAR_0)<<8 |
     FUNC_0(VAR_0+1);
 return (VAR_4 & 0xffff) == VAR_5;
}
