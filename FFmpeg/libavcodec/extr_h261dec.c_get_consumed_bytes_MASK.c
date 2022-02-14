
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gb; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(MpegEncContext *VAR_0, int VAR_1)
{
    int VAR_2 = FUNC_0(&VAR_0->gb) >> 3;
    if (VAR_2 == 0)
        VAR_2 = 1;
    if (VAR_2 + 10 > VAR_1)
        VAR_2 = VAR_1;

    return VAR_2;
}
