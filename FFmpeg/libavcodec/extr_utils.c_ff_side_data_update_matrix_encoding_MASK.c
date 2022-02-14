
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVMatrixEncoding { ____Placeholder_AVMatrixEncoding } AVMatrixEncoding ;
struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ AVFrameSideData ;
typedef int AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int *,int ,int) ;

int FUNC_3(AVFrame *VAR_2,
                                        enum AVMatrixEncoding VAR_3)
{
    AVFrameSideData *VAR_4;
    enum AVMatrixEncoding *VAR_5;

    VAR_4 = FUNC_1(VAR_2, VAR_0);
    if (!VAR_4)
        VAR_4 = FUNC_2(VAR_2, VAR_0,
                                           sizeof(enum AVMatrixEncoding));

    if (!VAR_4)
        return FUNC_0(VAR_1);

    VAR_5 = (enum AVMatrixEncoding*)VAR_4->data;
    *VAR_5 = VAR_3;

    return 0;
}
