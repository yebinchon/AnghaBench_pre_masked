
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int*,TYPE_1__ const*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int,int,int,int,TYPE_1__ const*) ;

int FUNC_4(enum AVPixelFormat VAR_2, int VAR_3, int VAR_4)
{
    const AVPixFmtDescriptor *VAR_5 = FUNC_2(VAR_2);
    int VAR_6 [4];
    int VAR_7[4];

    if (!VAR_5 || VAR_5->flags & VAR_0)
        return FUNC_0(VAR_1);

    FUNC_1(VAR_6, VAR_7, VAR_5);
    return FUNC_3(VAR_3, VAR_4, VAR_6[VAR_4], VAR_7[VAR_4], VAR_5);
}
