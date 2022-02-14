
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

void FUNC_2(int VAR_1)
{
    if (VAR_1 < 0 || VAR_1 > 127)
    {
 FUNC_0("Attempt to set music volume at %d",
  VAR_1);
    }

    FUNC_1(127);
    FUNC_1(VAR_1);
    VAR_0 = VAR_1;
}
