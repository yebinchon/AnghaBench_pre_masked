
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*,char*,int) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    if (VAR_1->buf_size < 45 || FUNC_1(VAR_1->buf, "1bit", 4) ||
        !FUNC_0(VAR_1->buf + 36) || !VAR_1->buf[44] ||
        (VAR_1->buf[0] >= 0x10 && (FUNC_0(VAR_1->buf + 20) < 0x80 || FUNC_0(VAR_1->buf + 24) < 0x80)))
       return 0;
    return VAR_0;
}
