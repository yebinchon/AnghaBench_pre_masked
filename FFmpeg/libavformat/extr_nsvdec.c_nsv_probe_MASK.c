
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; int buf_size; int filename; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(const AVProbeData *VAR_2)
{
    int VAR_3, VAR_4 = 0;



    if (VAR_2->buf[0] == 'N' && VAR_2->buf[1] == 'S' &&
        VAR_2->buf[2] == 'V' && (VAR_2->buf[3] == 'f' || VAR_2->buf[3] == 's'))
        return VAR_1;




    for (VAR_3 = 1; VAR_3 < VAR_2->buf_size - 3; VAR_3++) {
        if (FUNC_2(VAR_2->buf + VAR_3) == FUNC_2("NSVs")) {

            int VAR_5 = FUNC_1(VAR_2->buf+VAR_3+19) >> 4;
            int VAR_6 = FUNC_0(VAR_2->buf+VAR_3+22);
            int VAR_7 = VAR_3 + 23 + VAR_6 + VAR_5 + 1;
            if (VAR_7 <= VAR_2->buf_size - 2 && FUNC_0(VAR_2->buf + VAR_7) == 0xBEEF)
                return 4*VAR_1/5;
            VAR_4 = VAR_1/5;
        }
    }

    if (FUNC_3(VAR_2->filename, "nsv"))
        return VAR_0;

    return VAR_4;
}
