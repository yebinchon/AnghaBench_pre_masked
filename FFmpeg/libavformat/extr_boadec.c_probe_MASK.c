
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    if (VAR_1->buf_size < 2096)
        return 0;
    if ( FUNC_1(VAR_1->buf ) != 1
        || FUNC_1(VAR_1->buf + 8) > 100000
        || FUNC_1(VAR_1->buf + 12) > 8
        || FUNC_1(VAR_1->buf + 16) != 2096
        ||!FUNC_1(VAR_1->buf + 21)
        || FUNC_0(VAR_1->buf + 25) != 2096
        || FUNC_1(VAR_1->buf + 48) % FUNC_1(VAR_1->buf + 21)
        )
        return 0;
    return VAR_0;
}
