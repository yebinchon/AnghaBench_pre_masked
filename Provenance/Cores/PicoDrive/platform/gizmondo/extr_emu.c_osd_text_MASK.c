
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(int VAR_1, int VAR_2, const char *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_3) * 8 / 2;
 int *VAR_5, VAR_6;
 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  VAR_5 = (int *) ((unsigned short *) VAR_0+VAR_1+321*(VAR_2+VAR_6));
  VAR_5 = (int *) ((int)VAR_5 & ~3);
  FUNC_1(VAR_5, 0, VAR_4);
 }
 FUNC_0(VAR_1, VAR_2, VAR_3);
}
