
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int keyframe_filepositions; int keyframe_times; int * new_extradata; } ;
typedef TYPE_1__ FLVContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_1)
{
    int VAR_2;
    FLVContext *VAR_3 = VAR_1->priv_data;
    for (VAR_2=0; VAR_2<VAR_0; VAR_2++)
        FUNC_0(&VAR_3->new_extradata[VAR_2]);
    FUNC_0(&VAR_3->keyframe_times);
    FUNC_0(&VAR_3->keyframe_filepositions);
    return 0;
}
