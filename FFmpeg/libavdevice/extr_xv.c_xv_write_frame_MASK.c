
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int linesize; int data; } ;
typedef TYPE_1__ AVFrame ;
typedef int AVFormatContext ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_1, int VAR_2, AVFrame **VAR_3,
                          unsigned VAR_4)
{

    if ((VAR_4 & VAR_0))
        return 0;
    return FUNC_0(VAR_1, (*VAR_3)->data, (*VAR_3)->linesize);
}
