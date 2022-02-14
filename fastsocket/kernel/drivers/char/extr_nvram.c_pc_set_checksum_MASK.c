
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned short,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_3;
 unsigned short VAR_4 = 0;

 for (VAR_3 = VAR_2; VAR_3 <= VAR_1; ++VAR_3)
  VAR_4 += FUNC_0(VAR_3);
 FUNC_1(VAR_4 >> 8, VAR_0);
 FUNC_1(VAR_4 & 0xff, VAR_0 + 1);
}
