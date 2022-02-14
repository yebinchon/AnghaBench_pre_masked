
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (short*,int ,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(int VAR_1, int VAR_2, const char *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_3) * 8;
 short *VAR_5 = (short *)VAR_0 + 240*(320-VAR_1) + VAR_2;

 while (VAR_4--) {
  FUNC_1(VAR_5, 0, 8*2);
  VAR_5 -= 240;
 }

 FUNC_0(VAR_1, VAR_2, VAR_3);
}
