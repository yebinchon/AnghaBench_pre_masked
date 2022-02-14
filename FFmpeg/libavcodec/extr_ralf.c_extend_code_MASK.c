
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 unsigned int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(GetBitContext *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    if (VAR_1 == 0) {
        VAR_1 = -VAR_2 - FUNC_1(VAR_0);
    } else if (VAR_1 == VAR_2 * 2) {
        VAR_1 = VAR_2 + FUNC_1(VAR_0);
    } else {
        VAR_1 -= VAR_2;
    }
    if (VAR_3)
        VAR_1 = ((unsigned)VAR_1 << VAR_3) | FUNC_0(VAR_0, VAR_3);
    return VAR_1;
}
