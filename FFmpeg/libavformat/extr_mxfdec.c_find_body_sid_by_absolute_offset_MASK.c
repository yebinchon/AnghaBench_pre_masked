
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {int partitions_count; TYPE_1__* partitions; } ;
struct TYPE_4__ {scalar_t__ pack_ofs; int body_sid; } ;
typedef TYPE_2__ MXFContext ;



__attribute__((used)) static int FUNC_0(MXFContext *VAR_0, int64_t VAR_1)
{

    int VAR_2, VAR_3, VAR_4;
    int64_t VAR_5;

    VAR_2 = -1;
    VAR_3 = VAR_0->partitions_count;

    while (VAR_3 - VAR_2 > 1) {
        VAR_4 = (VAR_2 + VAR_3) >> 1;
        VAR_5 = VAR_0->partitions[VAR_4].pack_ofs;
        if (VAR_5 <= VAR_1)
            VAR_2 = VAR_4;
        else
            VAR_3 = VAR_4;
    }

    if (VAR_2 == -1)
        return 0;
    return VAR_0->partitions[VAR_2].body_sid;
}
