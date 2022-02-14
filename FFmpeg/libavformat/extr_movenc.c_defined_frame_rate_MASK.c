
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ den; } ;
typedef int AVStream ;
typedef TYPE_1__ AVRational ;
typedef int AVFormatContext ;


 int FUNC_0 (TYPE_1__) ;
 TYPE_1__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0, AVStream *VAR_1)
{
    AVRational VAR_2 = FUNC_1(VAR_0, VAR_1);
    int VAR_3 = 0;
    if (VAR_2.den != 0)
        VAR_3 = FUNC_0(VAR_2);
    return VAR_3;
}
