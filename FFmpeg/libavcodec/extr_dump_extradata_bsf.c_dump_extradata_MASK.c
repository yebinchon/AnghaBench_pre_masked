
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {TYPE_1__* par_in; TYPE_2__* priv_data; } ;
struct TYPE_17__ {int flags; scalar_t__ size; scalar_t__ data; } ;
struct TYPE_16__ {scalar_t__ freq; TYPE_3__ pkt; } ;
struct TYPE_15__ {scalar_t__ extradata; scalar_t__ extradata_size; } ;
typedef TYPE_2__ DumpExtradataContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(AVBSFContext *VAR_5, AVPacket *VAR_6)
{
    DumpExtradataContext *VAR_7 = VAR_5->priv_data;
    AVPacket *VAR_8 = &VAR_7->pkt;
    int VAR_9 = 0;

    VAR_9 = FUNC_5(VAR_5, VAR_8);
    if (VAR_9 < 0)
        return VAR_9;

    if (VAR_5->par_in->extradata &&
        (VAR_7->freq == VAR_1 ||
         (VAR_7->freq == VAR_2 && VAR_8->flags & VAR_0)) &&
         VAR_8->size >= VAR_5->par_in->extradata_size &&
         FUNC_6(VAR_8->data, VAR_5->par_in->extradata, VAR_5->par_in->extradata_size)) {
        if (VAR_8->size >= VAR_4 - VAR_5->par_in->extradata_size) {
            VAR_9 = FUNC_0(VAR_3);
            goto fail;
        }

        VAR_9 = FUNC_1(VAR_6, VAR_8->size + VAR_5->par_in->extradata_size);
        if (VAR_9 < 0)
            goto fail;

        VAR_9 = FUNC_2(VAR_6, VAR_8);
        if (VAR_9 < 0) {
            FUNC_4(VAR_6);
            goto fail;
        }

        FUNC_7(VAR_6->data, VAR_5->par_in->extradata, VAR_5->par_in->extradata_size);
        FUNC_7(VAR_6->data + VAR_5->par_in->extradata_size, VAR_8->data, VAR_8->size);
    } else {
        FUNC_3(VAR_6, VAR_8);
    }

fail:
    FUNC_4(VAR_8);

    return VAR_9;
}
