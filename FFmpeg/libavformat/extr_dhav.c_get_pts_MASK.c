
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
struct TYPE_7__ {scalar_t__ timestamp; } ;
struct TYPE_6__ {scalar_t__ last_timestamp; int pts; } ;
typedef TYPE_1__ DHAVStream ;
typedef TYPE_2__ DHAVContext ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int64_t FUNC_0(AVFormatContext *VAR_1, DHAVStream *VAR_2)
{
    DHAVContext *VAR_3 = VAR_1->priv_data;
    if (VAR_2->last_timestamp == VAR_0) {
        VAR_2->last_timestamp = VAR_3->timestamp;
    }

    if (VAR_2->last_timestamp <= VAR_3->timestamp) {
        VAR_2->pts += VAR_3->timestamp - VAR_2->last_timestamp;
    } else {
        VAR_2->pts += 65535 + VAR_3->timestamp - VAR_2->last_timestamp;
    }

    VAR_2->last_timestamp = VAR_3->timestamp;

    return VAR_2->pts;
}
