
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char,float,char,char) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    if (VAR_1->buf_size < 4 || FUNC_0(VAR_1->buf) != FUNC_1('D', 'F', 'I', 'A'))
        return 0;

    if (FUNC_0(VAR_1->buf + 16) != 0x80)
        return VAR_0 / 4;

    return VAR_0;
}
