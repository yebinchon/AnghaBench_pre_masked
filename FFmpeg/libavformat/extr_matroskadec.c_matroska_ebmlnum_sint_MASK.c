
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ int64_t ;
typedef int MatroskaDemuxContext ;


 int FUNC_0 (int *,int *,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(MatroskaDemuxContext *VAR_0,
                                 uint8_t *VAR_1, uint32_t VAR_2, int64_t *VAR_3)
{
    uint64_t VAR_4;
    int VAR_5;


    if ((VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4)) < 0)
        return VAR_5;


    *VAR_3 = VAR_4 - ((1LL << (7 * VAR_5 - 1)) - 1);

    return VAR_5;
}
