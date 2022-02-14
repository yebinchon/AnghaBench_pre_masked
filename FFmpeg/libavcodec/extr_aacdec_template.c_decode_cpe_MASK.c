
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_24__ {void* present; } ;
struct TYPE_25__ {int* use_kb_window; int max_sfb; TYPE_6__ ltp; scalar_t__ predictor_present; } ;
struct TYPE_23__ {TYPE_2__* oc; int avctx; } ;
struct TYPE_22__ {TYPE_10__* ch; } ;
struct TYPE_20__ {scalar_t__ object_type; } ;
struct TYPE_21__ {TYPE_1__ m4ac; } ;
struct TYPE_19__ {TYPE_8__ ics; } ;
typedef int GetBitContext ;
typedef TYPE_3__ ChannelElement ;
typedef TYPE_4__ AACContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_10__*) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (TYPE_4__*,TYPE_10__*,int *,int,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_8__*,int *) ;
 int FUNC_6 (TYPE_6__*,int *,int ) ;
 int FUNC_7 (TYPE_3__*,int *,int) ;
 void* FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(AACContext *VAR_4, GetBitContext *VAR_5, ChannelElement *VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10 = 0;
    int VAR_11 = VAR_4->oc[1].m4ac.object_type == VAR_1;

    VAR_9 = VAR_11 || FUNC_9(VAR_5);
    if (VAR_9) {
        if (FUNC_5(VAR_4, &VAR_6->ch[0].ics, VAR_5))
            return VAR_2;
        VAR_7 = VAR_6->ch[1].ics.use_kb_window[0];
        VAR_6->ch[1].ics = VAR_6->ch[0].ics;
        VAR_6->ch[1].ics.use_kb_window[1] = VAR_7;
        if (VAR_6->ch[1].ics.predictor_present &&
            (VAR_4->oc[1].m4ac.object_type != VAR_0))
            if ((VAR_6->ch[1].ics.ltp.present = FUNC_8(VAR_5, 1)))
                FUNC_6(&VAR_6->ch[1].ics.ltp, VAR_5, VAR_6->ch[1].ics.max_sfb);
        VAR_10 = FUNC_8(VAR_5, 2);
        if (VAR_10 == 3) {
            FUNC_3(VAR_4->avctx, VAR_3, "ms_present = 3 is reserved.\n");
            return VAR_2;
        } else if (VAR_10)
            FUNC_7(VAR_6, VAR_5, VAR_10);
    }
    if ((VAR_8 = FUNC_4(VAR_4, &VAR_6->ch[0], VAR_5, VAR_9, 0)))
        return VAR_8;
    if ((VAR_8 = FUNC_4(VAR_4, &VAR_6->ch[1], VAR_5, VAR_9, 0)))
        return VAR_8;

    if (VAR_9) {
        if (VAR_10)
            FUNC_1(VAR_4, VAR_6);
        if (VAR_4->oc[1].m4ac.object_type == VAR_0) {
            FUNC_2(VAR_4, &VAR_6->ch[0]);
            FUNC_2(VAR_4, &VAR_6->ch[1]);
        }
    }

    FUNC_0(VAR_4, VAR_6, VAR_10);
    return 0;
}
