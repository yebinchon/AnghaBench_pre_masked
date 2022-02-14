
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int filepositions_count; TYPE_1__* filepositions; TYPE_1__* head_filepositions; } ;
struct TYPE_5__ {double keyframe_timestamp; struct TYPE_5__* next; int keyframe_position; } ;
typedef TYPE_1__ FLVFileposition ;
typedef TYPE_2__ FLVContext ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, FLVContext *VAR_3, double VAR_4, int64_t VAR_5)
{
    FLVFileposition *VAR_6 = FUNC_2(sizeof(FLVFileposition));

    if (!VAR_6) {
        FUNC_1(VAR_2, VAR_0, "no mem for add keyframe index!\n");
        return FUNC_0(VAR_1);
    }

    VAR_6->keyframe_timestamp = VAR_4;
    VAR_6->keyframe_position = VAR_5;

    if (!VAR_3->filepositions_count) {
        VAR_3->filepositions = VAR_6;
        VAR_3->head_filepositions = VAR_3->filepositions;
        VAR_6->next = ((void*)0);
    } else {
        VAR_3->filepositions->next = VAR_6;
        VAR_6->next = ((void*)0);
        VAR_3->filepositions = VAR_3->filepositions->next;
    }

    VAR_3->filepositions_count++;

    return 0;
}
