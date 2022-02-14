
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static inline int FUNC_2(GetBitContext *VAR_0) {
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < 32 && !FUNC_0(VAR_0); VAR_1++)
        ;
    return FUNC_1(VAR_0, VAR_1) + (1 << VAR_1) - 1;
}
