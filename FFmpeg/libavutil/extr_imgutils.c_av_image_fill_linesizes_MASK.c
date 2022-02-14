
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int linesizes ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int*,TYPE_1__ const*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int,int,int,int,TYPE_1__ const*) ;
 int FUNC_4 (int*,int ,int) ;

int FUNC_5(int VAR_2[4], enum AVPixelFormat VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    const AVPixFmtDescriptor *VAR_7 = FUNC_2(VAR_3);
    int VAR_8 [4];
    int VAR_9[4];

    FUNC_4(VAR_2, 0, 4*sizeof(VAR_2[0]));

    if (!VAR_7 || VAR_7->flags & VAR_0)
        return FUNC_0(VAR_1);

    FUNC_1(VAR_8, VAR_9, VAR_7);
    for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
        if ((VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_8[VAR_5], VAR_9[VAR_5], VAR_7)) < 0)
            return VAR_6;
        VAR_2[VAR_5] = VAR_6;
    }

    return 0;
}
