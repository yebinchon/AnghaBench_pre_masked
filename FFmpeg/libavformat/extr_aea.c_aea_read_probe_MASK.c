
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int*) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{
    if (VAR_1->buf_size <= 2048+212)
        return 0;


    if (FUNC_0(VAR_1->buf)==0x800) {
        int VAR_2, VAR_3;
        VAR_2 = VAR_1->buf[264];

        if (VAR_2 != 1 && VAR_2 != 2)
            return 0;





        for (VAR_3 = 2048; VAR_3 + 211 < VAR_1->buf_size; VAR_3+= 212) {
            int VAR_4, VAR_5, VAR_6, VAR_7;
            VAR_4 = VAR_1->buf[0];
            VAR_6 = VAR_1->buf[1];
            VAR_7 = VAR_1->buf[210];
            VAR_5 = VAR_1->buf[211];

            if (VAR_4 != VAR_5 || VAR_6 != VAR_7)
                return 0;
        }
        return VAR_0 / 4 + 1;
    }
    return 0;
}
