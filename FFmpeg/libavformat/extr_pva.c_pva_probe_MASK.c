
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const*) ;

__attribute__((used)) static int FUNC_1(const AVProbeData * VAR_2) {
    const unsigned char *VAR_3 = VAR_2->buf;
    int VAR_4 = FUNC_0(VAR_3);

    if (VAR_4 < 0)
        return 0;

    if (VAR_2->buf_size >= VAR_4 + 8 &&
        FUNC_0(VAR_3 + VAR_4) >= 0)
        return VAR_0;

    return VAR_1 / 4;
}
