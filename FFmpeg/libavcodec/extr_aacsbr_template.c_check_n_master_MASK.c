
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1, int VAR_2, int VAR_3)
{

    if (VAR_2 <= 0) {
        FUNC_0(VAR_1, VAR_0, "Invalid n_master: %d\n", VAR_2);
        return -1;
    }
    if (VAR_3 >= VAR_2) {
        FUNC_0(VAR_1, VAR_0,
               "Invalid bitstream, crossover band index beyond array bounds: %d\n",
               VAR_3);
        return -1;
    }
    return 0;
}
