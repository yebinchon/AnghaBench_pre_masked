
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 unsigned int FUNC_0 (int *,int) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static inline unsigned int FUNC_4(GetBitContext *VAR_0, int VAR_1, int VAR_2)
{
    unsigned int VAR_3 = FUNC_1(VAR_0);

    if (VAR_3 > 8) {

        VAR_3 = FUNC_0(VAR_0, VAR_2);
    } else if (VAR_1 != 1) {
        int VAR_4 = FUNC_2(VAR_0, VAR_1);


        VAR_3 = (VAR_3 << VAR_1) - VAR_3;

        if (VAR_4 > 1) {
            VAR_3 += VAR_4 - 1;
            FUNC_3(VAR_0, VAR_1);
        } else
            FUNC_3(VAR_0, VAR_1 - 1);
    }
    return VAR_3;
}
