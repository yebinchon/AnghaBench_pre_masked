
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(GetBitContext *VAR_2, int VAR_3)
{
    unsigned int VAR_4 = FUNC_1(VAR_2, &VAR_1, 2) + VAR_3;

    if (VAR_4 & 1)
        VAR_4 = 16 + (VAR_4 >> 1);
    else
        VAR_4 = 16 - (VAR_4 >> 1);

    if (VAR_4 >= FUNC_0(VAR_0))
        VAR_4 = 16;
    return VAR_4;
}
