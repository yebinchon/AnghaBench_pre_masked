
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_2)
{
    unsigned int VAR_3, VAR_4;
    unsigned int VAR_5, VAR_6;
    int VAR_7;
    if (VAR_2->buf_size < 20 + VAR_1 + 12)
        return 0;


    VAR_5 = FUNC_0(&VAR_2->buf[0]);
    if ((VAR_5 == 0) || (VAR_5 > 1024))
       return 0;


    VAR_6 = FUNC_0(&VAR_2->buf[4]);
    if ((VAR_6 == 0) || (VAR_6 > 1024))
       return 0;


    VAR_4 = FUNC_0(&VAR_2->buf[8]);
    if (VAR_4 && (VAR_4 < 8000 || VAR_4 > 48000))
        return 0;


    VAR_3 = FUNC_0(&VAR_2->buf[12]);
    if (VAR_3 > 2 || VAR_4 && !VAR_3)
        return 0;


    VAR_3 = FUNC_0(&VAR_2->buf[16]);
    if (VAR_3 > 2 || VAR_4 && !VAR_3)
        return 0;

    VAR_7 = 20 + VAR_1;
    if (FUNC_0(&VAR_2->buf[VAR_7]) == 1)
        VAR_7 += 768;

    if (VAR_7+12 > VAR_2->buf_size || FUNC_0(&VAR_2->buf[VAR_7+8]) != VAR_5*VAR_6)
        return 1;


    return VAR_0;
}
