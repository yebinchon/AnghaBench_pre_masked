
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    if ( FUNC_1(VAR_1->buf) != FUNC_1("MJPG")
        || VAR_1->buf_size < 50
        || FUNC_0(VAR_1->buf + 48) != 0xffd8)
        return 0;
    return VAR_0 * 3 / 4;
}
