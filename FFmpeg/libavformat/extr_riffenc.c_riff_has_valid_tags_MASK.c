
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int metadata; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,int *,int ) ;
 scalar_t__** VAR_1 ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; *VAR_1[VAR_3]; VAR_3++)
        if (FUNC_0(VAR_2->metadata, VAR_1[VAR_3], ((void*)0), VAR_0))
            return 1;

    return 0;
}
