
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int
FUNC_1(void)
{
    unsigned VAR_0, VAR_1, VAR_2, VAR_3;
    int VAR_4;
    int VAR_5;
    FUNC_0(1 , &VAR_0, &VAR_1, &VAR_2, &VAR_3);

    VAR_4 = VAR_2 & 0x2;
    VAR_5 = VAR_2 & 0x80000;

    return VAR_4 && VAR_5;
}
