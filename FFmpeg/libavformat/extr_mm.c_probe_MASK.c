
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf_size; int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    if (VAR_5->buf_size < VAR_1 + VAR_3)
        return 0;

    if (FUNC_0(&VAR_5->buf[0]) != VAR_4)
        return 0;
    VAR_6 = FUNC_1(&VAR_5->buf[2]);
    if (VAR_6 != VAR_2 && VAR_6 != VAR_1)
        return 0;
    VAR_8 = FUNC_0(&VAR_5->buf[8]);
    VAR_9 = FUNC_0(&VAR_5->buf[12]);
    VAR_10 = FUNC_0(&VAR_5->buf[14]);
    if (!VAR_8 || VAR_8 > 60 || !VAR_9 || VAR_9 > 2048 || !VAR_10 || VAR_10 > 2048)
        return 0;
    VAR_7 = FUNC_0(&VAR_5->buf[VAR_6]);
    if (!VAR_7 || VAR_7 > 0x31)
        return 0;


    return VAR_0;
}
