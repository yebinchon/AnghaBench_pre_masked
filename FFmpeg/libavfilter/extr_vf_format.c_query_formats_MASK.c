
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int formats; } ;
typedef TYPE_1__ FormatContext ;
typedef int AVFilterFormats ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_1)
{
    FormatContext *VAR_2 = VAR_1->priv;
    AVFilterFormats *VAR_3 = FUNC_1(VAR_2->formats);

    if (!VAR_3)
        return FUNC_0(VAR_0);

    return FUNC_2(VAR_1, VAR_3);
}
