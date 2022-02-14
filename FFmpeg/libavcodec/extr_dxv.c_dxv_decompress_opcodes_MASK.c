
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int GetByteContext ;


 int FUNC_0 (int *,void*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int*) ;
 int FUNC_6 (int *,int *,void*,size_t,int) ;
 int FUNC_7 (void*,int ,size_t) ;

__attribute__((used)) static int FUNC_8(GetByteContext *VAR_0, void *VAR_1, size_t VAR_2)
{
    int VAR_3 = FUNC_4(VAR_0);
    int VAR_4 = FUNC_2(VAR_0);

    if ((VAR_4 & 3) == 0) {
        FUNC_3(VAR_0, 1);
        FUNC_0(VAR_0, VAR_1, VAR_2);
    } else if ((VAR_4 & 3) == 1) {
        FUNC_3(VAR_0, 1);
        FUNC_7(VAR_1, FUNC_1(VAR_0), VAR_2);
    } else {
        uint32_t VAR_5[256];
        int VAR_6, VAR_7 = 0;

        VAR_6 = FUNC_5(VAR_0, VAR_5, &VAR_7);
        if (VAR_6 < 0)
            return VAR_6;
        VAR_6 = FUNC_6(VAR_0, VAR_5, VAR_1, VAR_2, VAR_7);
        if (VAR_6 < 0)
            return VAR_6;
    }
    return FUNC_4(VAR_0) - VAR_3;
}
