
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * guid; } ;
typedef TYPE_1__ dxva_mode ;
struct TYPE_7__ {scalar_t__ pix_fmt; int workaround; } ;
typedef int GUID ;
typedef TYPE_2__ FFDXVASharedContext ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (void*,int ,void*) ;
 int FUNC_5 (void*,int ,void*) ;
 int FUNC_6 (int *,TYPE_1__ const*) ;
 int FUNC_7 (int *,void*,unsigned int,int const*) ;
 TYPE_1__* VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_8, void *VAR_9, void *VAR_10,
                                 unsigned VAR_11, const GUID *VAR_12, GUID *VAR_13)
{
    FFDXVASharedContext *VAR_14 = FUNC_1(VAR_8);
    unsigned VAR_15, VAR_16;

    FUNC_7(VAR_8, VAR_9, VAR_11, VAR_12);

    *VAR_13 = VAR_7;
    for (VAR_15 = 0; VAR_5[VAR_15].guid; VAR_15++) {
        const dxva_mode *VAR_17 = &VAR_5[VAR_15];
        int VAR_18;
        if (!FUNC_6(VAR_8, VAR_17))
            continue;

        for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
            if (FUNC_2(VAR_17->guid, &VAR_12[VAR_16]))
                break;
        }
        if (VAR_16 == VAR_11)
            continue;
        if (VAR_18) {
            *VAR_13 = *VAR_17->guid;
            break;
        }
    }

    if (FUNC_2(VAR_13, &VAR_7)) {
        FUNC_3(VAR_8, VAR_0, "No decoder device for codec found\n");
        return FUNC_0(VAR_3);
    }

    if (FUNC_2(VAR_13, &VAR_6))
        VAR_14->workaround |= VAR_4;

    return 0;
}
