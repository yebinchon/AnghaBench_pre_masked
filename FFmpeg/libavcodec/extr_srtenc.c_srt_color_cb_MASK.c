
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char*,unsigned int) ;
 int FUNC_1 (void*,float,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
    if (VAR_2 > 1)
        return;
    FUNC_1(VAR_0, 'f', VAR_1 == 0xFFFFFFFF);
    if (VAR_1 != 0xFFFFFFFF)
        FUNC_0(VAR_0, "<font color=\"#%06x\">",
              (VAR_1 & 0xFF0000) >> 16 | VAR_1 & 0xFF00 | (VAR_1 & 0xFF) << 16);
}
