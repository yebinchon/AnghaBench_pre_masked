
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int extradata; } ;
struct TYPE_15__ {TYPE_1__* internal; TYPE_2__* priv_data; } ;
struct TYPE_14__ {TYPE_5__* codecpar; } ;
struct TYPE_13__ {scalar_t__ mode; } ;
struct TYPE_12__ {scalar_t__ data_offset; } ;
typedef TYPE_2__ Codec2Context ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_5__*,int ) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_4)
{
    Codec2Context *VAR_5 = VAR_4->priv_data;
    AVStream *VAR_6;
    int VAR_7;

    if (VAR_5->mode < 0) {

        FUNC_1(VAR_4, VAR_1, "-mode must be set in order to make sense of raw codec2 files\n");
        return FUNC_0(VAR_2);
    }

    VAR_6 = FUNC_2(VAR_4, ((void*)0));
    if (!VAR_6) {
        return FUNC_0(VAR_3);
    }

    VAR_7 = FUNC_5(VAR_6->codecpar, VAR_0);
    if (VAR_7) {
        return VAR_7;
    }

    VAR_4->internal->data_offset = 0;
    FUNC_3(VAR_6->codecpar->extradata, VAR_5->mode);

    return FUNC_4(VAR_4, VAR_6);
}
