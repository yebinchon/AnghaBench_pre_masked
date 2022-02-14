
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int ff_asf_guid ;
struct TYPE_12__ {scalar_t__ offset; } ;
struct TYPE_11__ {int * pb; TYPE_3__* priv_data; } ;
struct TYPE_10__ {int (* read_object ) (TYPE_2__*,TYPE_1__ const*) ;char* name; int is_subobject; } ;
typedef TYPE_1__ GUIDParseTable ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ASFContext ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_0, int64_t VAR_1, int64_t VAR_2)
{
    ASFContext *VAR_3 = VAR_0->priv_data;
    AVIOContext *VAR_4 = VAR_0->pb;
    const GUIDParseTable *VAR_5 = ((void*)0);
    ff_asf_guid VAR_6;
    int VAR_7;

    while (FUNC_1(VAR_4) <= VAR_1 + VAR_2) {
        if (FUNC_1(VAR_4) == VAR_3->offset)
            break;
        VAR_3->offset = FUNC_1(VAR_4);
        if ((VAR_7 = FUNC_2(VAR_4, &VAR_6)) < 0)
            return VAR_7;
        VAR_5 = FUNC_3(VAR_6);
        if (VAR_5) {
            if ((VAR_7 = VAR_5->read_object(VAR_0, VAR_5)) < 0)
                return VAR_7;
        } else {
            GUIDParseTable VAR_8;

            VAR_8 = "Unknown";
            VAR_8 = 1;
            FUNC_0(VAR_0, &VAR_8);
        }
    }

    return 0;
}
