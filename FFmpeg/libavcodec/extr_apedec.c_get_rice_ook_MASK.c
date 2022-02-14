
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 unsigned int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static inline int FUNC_3(GetBitContext *VAR_0, int VAR_1)
{
    unsigned int VAR_2;

    VAR_2 = FUNC_2(VAR_0, 1, FUNC_1(VAR_0));

    if (VAR_1)
        VAR_2 = (VAR_2 << VAR_1) | FUNC_0(VAR_0, VAR_1);

    return VAR_2;
}
