
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ duration; } ;
struct TYPE_5__ {scalar_t__ user_duration; scalar_t__ outpoint; scalar_t__ file_inpoint; scalar_t__ file_start_time; scalar_t__ next_dts; } ;
typedef TYPE_1__ ConcatFile ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int64_t FUNC_0(ConcatFile *VAR_1, AVFormatContext *VAR_2)
{
    if (VAR_1->user_duration != VAR_0)
        return VAR_1->user_duration;
    if (VAR_1->outpoint != VAR_0)
        return VAR_1->outpoint - VAR_1->file_inpoint;
    if (VAR_2->duration > 0)
        return VAR_2->duration - (VAR_1->file_inpoint - VAR_1->file_start_time);
    if (VAR_1->next_dts != VAR_0)
        return VAR_1->next_dts - VAR_1->file_inpoint;
    return VAR_0;
}
