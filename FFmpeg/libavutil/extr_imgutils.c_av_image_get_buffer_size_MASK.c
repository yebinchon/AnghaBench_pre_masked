
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int,int,int ,int *) ;
 int FUNC_3 (int **,int*,int *,int,int,int,int) ;
 TYPE_1__* FUNC_4 (int) ;

int FUNC_5(enum AVPixelFormat VAR_2,
                             int VAR_3, int VAR_4, int VAR_5)
{
    uint8_t *VAR_6[4];
    int VAR_7[4];
    int VAR_8;
    const AVPixFmtDescriptor *VAR_9 = FUNC_4(VAR_2);
    if (!VAR_9)
        return FUNC_0(VAR_0);

    VAR_8 = FUNC_2(VAR_3, VAR_4, 0, ((void*)0));
    if (VAR_8 < 0)
        return VAR_8;


    if (VAR_9->flags & VAR_1)
        return FUNC_1(VAR_3, VAR_5) * VAR_4;

    return FUNC_3(VAR_6, VAR_7, ((void*)0), VAR_2,
                                VAR_3, VAR_4, VAR_5);
}
