
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned char*,int,int,int,unsigned char*) ;
 size_t VAR_0 ;
 int FUNC_1 (char*) ;

int FUNC_2(char *VAR_1, unsigned char *VAR_2, int VAR_3, unsigned char *VAR_4)
{
    if ((FUNC_1(VAR_1) > 63) || (VAR_3 > 32))
        return 0;

    FUNC_0(VAR_1, VAR_2, VAR_3, 4096, 1, VAR_4);
    FUNC_0(VAR_1, VAR_2, VAR_3, 4096, 2, &VAR_4[VAR_0]);
    return 1;
}
