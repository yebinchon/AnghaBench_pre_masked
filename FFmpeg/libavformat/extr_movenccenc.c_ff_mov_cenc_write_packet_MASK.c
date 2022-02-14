
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int MOVMuxCencContext ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int const*,int) ;

int FUNC_4(MOVMuxCencContext* VAR_0, AVIOContext *VAR_1,
                          const uint8_t *VAR_2, int VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_2(VAR_0);
    if (VAR_4) {
        return VAR_4;
    }

    VAR_4 = FUNC_0(VAR_0, 0, VAR_3);
    if (VAR_4) {
        return VAR_4;
    }

    FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);

    VAR_4 = FUNC_1(VAR_0);
    if (VAR_4) {
        return VAR_4;
    }

    return 0;
}
