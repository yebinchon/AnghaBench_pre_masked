
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {char* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{

    uint16_t VAR_2 = FUNC_0(VAR_1->buf);
    if ((VAR_2 == 0x0B8D || VAR_2 == 0x0C0D || VAR_2 == 0x0C8D) &&
        VAR_1->buf[2] == 'S' && VAR_1->buf[3] == 'O' &&
        VAR_1->buf[4] == 'L' && VAR_1->buf[5] == 0)
        return VAR_0;
    else
        return 0;
}
