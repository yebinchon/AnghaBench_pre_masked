
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {int partitions_count; TYPE_1__* partitions; } ;
struct TYPE_4__ {int body_sid; scalar_t__ essence_length; scalar_t__ essence_offset; } ;
typedef TYPE_1__ MXFPartition ;
typedef TYPE_2__ MXFContext ;



__attribute__((used)) static int64_t FUNC_0(MXFContext *VAR_0, int VAR_1)
{
    for (int VAR_2 = VAR_0->partitions_count - 1; VAR_2 >= 0; VAR_2--) {
        MXFPartition *VAR_3 = &VAR_0->partitions[VAR_2];

        if (VAR_3->body_sid != VAR_1)
            continue;

        if (!VAR_3->essence_length)
            return 0;

        return VAR_3->essence_offset + VAR_3->essence_length;
    }

    return 0;
}
