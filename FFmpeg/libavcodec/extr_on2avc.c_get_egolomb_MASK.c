
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int FUNC_3(GetBitContext *VAR_1)
{
    int VAR_2 = 4;

    while (FUNC_1(VAR_1)) {
        VAR_2++;
        if (VAR_2 > 30) {
            FUNC_0(((void*)0), VAR_0, "Too large golomb code in get_egolomb.\n");
            VAR_2 = 30;
            break;
        }
    }

    return (1 << VAR_2) + FUNC_2(VAR_1, VAR_2);
}
