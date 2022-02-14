
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int*,char*,int) ;
 int FUNC_3 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_4(const AVProbeData *VAR_4)
{
    if ((FUNC_0(VAR_4->buf) & 0xFFFE) == 0xFFF8)
        return FUNC_3(VAR_4);


    if (VAR_4->buf_size >= 4 + 4 + 13) {
        int VAR_5 = VAR_4->buf[4] & 0x7f;
        int VAR_6 = FUNC_1(VAR_4->buf + 5);
        int VAR_7 = FUNC_0(VAR_4->buf + 8);
        int VAR_8 = FUNC_0(VAR_4->buf + 10);
        int VAR_9 = FUNC_1(VAR_4->buf + 18) >> 4;

        if (FUNC_2(VAR_4->buf, "fLaC", 4))
            return 0;
        if (VAR_5 == VAR_2 &&
            VAR_6 == VAR_3 &&
            VAR_7 >= 16 &&
            VAR_8 >= VAR_7 &&
            VAR_9 && VAR_9 <= 655350)
            return VAR_1;
        return VAR_0;
    }

    return 0;
}
