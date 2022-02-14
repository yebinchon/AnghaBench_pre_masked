
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(GetBitContext *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = 0;

    if(VAR_2 && VAR_2 != VAR_1)
         VAR_3 = FUNC_1(VAR_0, FUNC_0(VAR_2, VAR_1 - VAR_2), VAR_1);
    if((VAR_2 << 1) > VAR_1) VAR_3 = ~VAR_3;

    return VAR_3;
}
