
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(int VAR_0, unsigned int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 for (; --VAR_0 >= 0;) {
  VAR_4 = (VAR_1 >> VAR_0) & 1;
  FUNC_0(VAR_4, VAR_3);
  FUNC_1(VAR_2, VAR_3);
  FUNC_0(VAR_4 | 2, VAR_3);
  FUNC_1(VAR_2, VAR_3);
  FUNC_0(VAR_4, VAR_3);
  FUNC_1(VAR_2, VAR_3);
 }
}
