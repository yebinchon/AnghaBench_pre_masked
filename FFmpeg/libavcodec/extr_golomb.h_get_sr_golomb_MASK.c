
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 unsigned int FUNC_0 (int *,int,int,int) ;

__attribute__((used)) static inline int FUNC_1(GetBitContext *VAR_0, int VAR_1, int VAR_2,
                                int VAR_3)
{
    unsigned VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
    return (VAR_4 >> 1) ^ -(VAR_4 & 1);
}
