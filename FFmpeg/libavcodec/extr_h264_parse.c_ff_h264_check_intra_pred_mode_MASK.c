
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (void*,int ,char*) ;

int FUNC_1(void *VAR_3, int VAR_4,
                                  int VAR_5,
                                  int VAR_6, int VAR_7)
{
    static const int8_t VAR_8[4] = { 129, 1, -1, -1 };
    static const int8_t VAR_9[5] = { 128, -1, 2, -1, 130 };

    if (VAR_6 > 3U) {
        FUNC_0(VAR_3, VAR_2,
               "out of range intra chroma pred mode\n");
        return VAR_1;
    }

    if (!(VAR_4 & 0x8000)) {
        VAR_6 = VAR_8[VAR_6];
        if (VAR_6 < 0) {
            FUNC_0(VAR_3, VAR_2,
                   "top block unavailable for requested intra mode\n");
            return VAR_1;
        }
    }

    if ((VAR_5 & 0x8080) != 0x8080) {
        VAR_6 = VAR_9[VAR_6];
        if (VAR_6 < 0) {
            FUNC_0(VAR_3, VAR_2,
                   "left block unavailable for requested intra mode\n");
            return VAR_1;
        }
        if (VAR_7 && (VAR_5 & 0x8080)) {

            VAR_6 = VAR_0 +
                   (!(VAR_5 & 0x8000)) +
                   2 * (VAR_6 == 130);
        }
    }

    return VAR_6;
}
