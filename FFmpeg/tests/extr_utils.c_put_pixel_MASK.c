
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    unsigned char *VAR_9;

    if (VAR_4 < 0 || VAR_4 >= VAR_2 ||
        VAR_5 < 0 || VAR_5 >= VAR_0)
        return;

    VAR_9 = VAR_1 + VAR_5 * VAR_3 + VAR_4 * 3;
    VAR_9[0] = VAR_6;
    VAR_9[1] = VAR_7;
    VAR_9[2] = VAR_8;
}
