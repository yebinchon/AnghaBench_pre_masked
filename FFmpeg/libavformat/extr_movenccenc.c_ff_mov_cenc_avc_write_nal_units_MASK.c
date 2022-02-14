
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int MOVMuxCencContext ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int ,char*,int,int) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int const*,int) ;

int FUNC_6(AVFormatContext *VAR_1, MOVMuxCencContext* VAR_2,
    int VAR_3, AVIOContext *VAR_4, const uint8_t *VAR_5, int VAR_6)
{
    int VAR_7;
    int VAR_8;
    int VAR_9;

    VAR_8 = FUNC_4(VAR_2);
    if (VAR_8) {
        return VAR_8;
    }

    while (VAR_6 > 0) {

        if (VAR_6 < VAR_3 + 1) {
            FUNC_1(VAR_1, VAR_0, "CENC-AVC: remaining size %d smaller than nal length+type %d\n",
                VAR_6, VAR_3 + 1);
            return -1;
        }

        FUNC_2(VAR_4, VAR_5, VAR_3 + 1);

        VAR_7 = 0;
        for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
            VAR_7 = (VAR_7 << 8) | *VAR_5++;
        }
        VAR_6 -= VAR_3;


        if (VAR_7 <= 0 || VAR_7 > VAR_6) {
            FUNC_1(VAR_1, VAR_0, "CENC-AVC: nal size %d remaining %d\n", VAR_7, VAR_6);
            return -1;
        }

        FUNC_5(VAR_2, VAR_4, VAR_5 + 1, VAR_7 - 1);
        VAR_5 += VAR_7;
        VAR_6 -= VAR_7;

        FUNC_0(VAR_2, VAR_3 + 1, VAR_7 - 1);
    }

    VAR_8 = FUNC_3(VAR_2);
    if (VAR_8) {
        return VAR_8;
    }

    return 0;
}
