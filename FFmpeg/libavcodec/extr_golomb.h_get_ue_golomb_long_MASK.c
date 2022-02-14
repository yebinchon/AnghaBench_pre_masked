
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned int) ;
 unsigned int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static inline unsigned FUNC_4(GetBitContext *VAR_0)
{
    unsigned VAR_1, VAR_2;

    VAR_1 = FUNC_2(VAR_0, 32);
    VAR_2 = 31 - FUNC_0(VAR_1);
    FUNC_3(VAR_0, VAR_2);

    return FUNC_1(VAR_0, VAR_2 + 1) - 1;
}
