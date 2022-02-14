
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 unsigned int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (unsigned int) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static inline int FUNC_9(GetBitContext *VAR_5)
{
    unsigned int VAR_6;
    FUNC_3(VAR_4, VAR_5);
    FUNC_4(VAR_4, VAR_5);
    VAR_6 = FUNC_1(VAR_4, VAR_5);

    if (VAR_6 >= (1 << 27)) {
        VAR_6 >>= 32 - 9;
        FUNC_2(VAR_4, VAR_5, VAR_2[VAR_6]);
        FUNC_0(VAR_4, VAR_5);

        return VAR_3[VAR_6];
    } else {
        int VAR_7 = 2 * FUNC_6(VAR_6) - 31;
        FUNC_2(VAR_4, VAR_5, 32 - VAR_7);
        FUNC_0(VAR_4, VAR_5);
        if (VAR_7 < 7) {
            FUNC_5(((void*)0), VAR_1, "Invalid UE golomb code\n");
            return VAR_0;
        }
        VAR_6 >>= VAR_7;
        VAR_6--;

        return VAR_6;
    }

}
