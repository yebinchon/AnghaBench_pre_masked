
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char,char,char,char) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_2)
{

    if (VAR_2->buf_size <= 32)
        return 0;
    if (FUNC_1(&VAR_2->buf[0]) == FUNC_2('w', 'v', 'p', 'k') &&
        FUNC_1(&VAR_2->buf[4]) >= 24 &&
        FUNC_1(&VAR_2->buf[4]) <= VAR_1 &&
        FUNC_0(&VAR_2->buf[8]) >= 0x402 &&
        FUNC_0(&VAR_2->buf[8]) <= 0x410)
        return VAR_0;
    else
        return 0;
}
