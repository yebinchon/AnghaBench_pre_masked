
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int ,int *) ;
 unsigned int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *) ;
 unsigned int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 (int *,int) ;
 int VAR_0 ;
 unsigned int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static inline int FUNC_10(GetBitContext *VAR_1, int VAR_2, int VAR_3,
                                int VAR_4)
{
    unsigned int VAR_5;
    int VAR_6;
    FUNC_3(VAR_0, VAR_1);
    FUNC_5(VAR_0, VAR_1);
    VAR_5 = FUNC_1(VAR_0, VAR_1);

    VAR_6 = FUNC_6(VAR_5);

    if (VAR_6 > 31 - VAR_3) {
        VAR_5 >>= VAR_6 - VAR_2;
        VAR_5 += (30U - VAR_6) << VAR_2;
        FUNC_2(VAR_0, VAR_1, 32 + VAR_2 - VAR_6);
        FUNC_0(VAR_0, VAR_1);

        return VAR_5;
    } else {
        FUNC_2(VAR_0, VAR_1, VAR_3);
        FUNC_5(VAR_0, VAR_1);

        VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_4);

        FUNC_2(VAR_0, VAR_1, VAR_4);
        FUNC_0(VAR_0, VAR_1);

        return VAR_5 + VAR_3 - 1;
    }

}
