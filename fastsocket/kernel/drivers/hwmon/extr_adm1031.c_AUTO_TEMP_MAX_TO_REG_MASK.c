
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_0 - FUNC_0(VAR_1);

 VAR_4 = ((VAR_0 - FUNC_0(VAR_1))*10)/(16 - VAR_2);
 VAR_3 = ((VAR_1 & 0xf8) |
        (VAR_4 < 10000 ? 0 :
  VAR_4 < 20000 ? 1 :
  VAR_4 < 40000 ? 2 : VAR_4 < 80000 ? 3 : 4));
 return VAR_3;
}
