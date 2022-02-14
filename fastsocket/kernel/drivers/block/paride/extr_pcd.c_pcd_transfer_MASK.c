
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(void)
{

 while (VAR_3 && (VAR_4 / 4 == VAR_1)) {
  int VAR_5 = (VAR_4 % 4) * 512;
  FUNC_0(VAR_0, VAR_2 + VAR_5, 512);
  VAR_3--;
  VAR_0 += 512;
  VAR_4++;
 }
}
