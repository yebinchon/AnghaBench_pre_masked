
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    if (VAR_2->buf_size < 806)
        return 0;


    if (FUNC_0(&VAR_2->buf[0]) != VAR_1 - 2)
        return 0;
    VAR_3 = FUNC_0(&VAR_2->buf[12]);
    VAR_4 = FUNC_0(&VAR_2->buf[14]);
    VAR_5 = FUNC_0(&VAR_2->buf[804]);
    if ((!VAR_3 || VAR_3 > 2048 || !VAR_4 || VAR_4 > 2048) &&
        VAR_5 != 22050)
        return 0;


    return VAR_0;
}
