
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int MatroskaDemuxContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int,int*,int) ;

__attribute__((used)) static int FUNC_1(MatroskaDemuxContext *VAR_1, AVIOContext *VAR_2,
                            uint64_t *VAR_3)
{
    int VAR_4 = FUNC_0(VAR_1, VAR_2, 8, VAR_3, 1);
    if (VAR_4 > 0 && *VAR_3 + 1 == 1ULL << (7 * VAR_4))
        *VAR_3 = VAR_0;
    return VAR_4;
}
