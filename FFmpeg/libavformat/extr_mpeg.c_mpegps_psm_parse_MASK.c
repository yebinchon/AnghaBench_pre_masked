
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {unsigned char* psm_es_type; } ;
typedef TYPE_1__ MpegDemuxContext ;
typedef int AVIOContext ;


 unsigned char FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static long FUNC_4(MpegDemuxContext *VAR_0, AVIOContext *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;

    VAR_2 = FUNC_1(VAR_1);
    FUNC_0(VAR_1);
    FUNC_0(VAR_1);
    VAR_3 = FUNC_1(VAR_1);


    FUNC_3(VAR_1, VAR_3);
                        FUNC_1(VAR_1);

    VAR_4 = VAR_2 - VAR_3 - 10;


    while (VAR_4 >= 4) {
        unsigned char VAR_5 = FUNC_0(VAR_1);
        unsigned char VAR_6 = FUNC_0(VAR_1);
        uint16_t VAR_7 = FUNC_1(VAR_1);


        VAR_0->psm_es_type[VAR_6] = VAR_5;

        FUNC_3(VAR_1, VAR_7);
        VAR_4 -= 4 + VAR_7;
    }
    FUNC_2(VAR_1);
    return 2 + VAR_2;
}
