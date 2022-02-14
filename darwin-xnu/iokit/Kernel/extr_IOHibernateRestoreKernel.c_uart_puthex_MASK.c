
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (char) ;

__attribute__((used)) static void FUNC_1(uint64_t VAR_0)
{
    int VAR_1;
    char VAR_2;
    bool VAR_3 = 1;

    for (VAR_1 = 60; VAR_1 >= 0; VAR_1 -= 4)
    {
 VAR_2 = 0xf & (VAR_0 >> VAR_1);
 if (VAR_2)
     VAR_3 = 0;
 else if (VAR_3 && VAR_1)
     continue;
 if (VAR_2 <= 9)
     VAR_2 += '0';
 else
     VAR_2+= 'a' - 10;
 FUNC_0(VAR_2);
    }
}
