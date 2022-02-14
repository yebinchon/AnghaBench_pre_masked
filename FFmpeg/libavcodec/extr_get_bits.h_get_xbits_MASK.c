
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;
typedef int GetBitContext ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int) ;
 int VAR_0 ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static inline int FUNC_9(GetBitContext *VAR_1, int VAR_2)
{







    register int VAR_3;
    register int32_t VAR_4;
    FUNC_4(VAR_0, VAR_1);
    FUNC_6(VAR_2>0 && VAR_2<=25);
    FUNC_5(VAR_0, VAR_1);
    VAR_4 = FUNC_1(VAR_0, VAR_1);
    VAR_3 = ~VAR_4 >> 31;
    FUNC_2(VAR_0, VAR_1, VAR_2);
    FUNC_0(VAR_0, VAR_1);
    return (FUNC_3(VAR_3 ^ VAR_4, VAR_2) ^ VAR_3) - VAR_3;

}
