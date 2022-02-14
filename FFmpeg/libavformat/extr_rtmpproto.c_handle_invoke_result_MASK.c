
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_25__ {int live; double stream_id; double duration; scalar_t__ is_input; scalar_t__ playpath; scalar_t__ subscribe; } ;
typedef int RTMPPacket ;
typedef TYPE_2__ RTMPContext ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int *,int,char**) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_12 (int *,double*) ;
 int FUNC_13 (char*,char*) ;

__attribute__((used)) static int FUNC_14(URLContext *VAR_1, RTMPPacket *VAR_2)
{
    RTMPContext *VAR_3 = VAR_1->priv_data;
    char *VAR_4 = ((void*)0);
    int VAR_5 = 0;

    if ((VAR_5 = FUNC_2(VAR_1, VAR_2, 10, &VAR_4)) < 0)
        return VAR_5;

    if (!VAR_4) {

        return VAR_5;
    }

    if (!FUNC_13(VAR_4, "connect")) {
        if (!VAR_3->is_input) {
            if ((VAR_5 = FUNC_10(VAR_1, VAR_3)) < 0)
                goto fail;

            if ((VAR_5 = FUNC_5(VAR_1, VAR_3)) < 0)
                goto fail;
        } else {
            if ((VAR_5 = FUNC_11(VAR_1, VAR_3)) < 0)
                goto fail;
        }

        if ((VAR_5 = FUNC_4(VAR_1, VAR_3)) < 0)
            goto fail;

        if (VAR_3->is_input) {


            if (VAR_3->subscribe) {
                if ((VAR_5 = FUNC_6(VAR_1, VAR_3, VAR_3->subscribe)) < 0)
                    goto fail;
            } else if (VAR_3->live == -1) {
                if ((VAR_5 = FUNC_6(VAR_1, VAR_3, VAR_3->playpath)) < 0)
                    goto fail;
            }
        }
    } else if (!FUNC_13(VAR_4, "createStream")) {
        double VAR_6;
        if (FUNC_12(VAR_2, &VAR_6)) {
            FUNC_1(VAR_1, VAR_0, "Unexpected reply on connect()\n");
        } else {
            VAR_3->stream_id = VAR_6;
        }

        if (!VAR_3->is_input) {
            if ((VAR_5 = FUNC_9(VAR_1, VAR_3)) < 0)
                goto fail;
        } else {
            if (VAR_3->live != -1) {
                if ((VAR_5 = FUNC_7(VAR_1, VAR_3)) < 0)
                    goto fail;
            }
            if ((VAR_5 = FUNC_8(VAR_1, VAR_3)) < 0)
                goto fail;
            if ((VAR_5 = FUNC_3(VAR_1, VAR_3)) < 0)
                goto fail;
        }
    } else if (!FUNC_13(VAR_4, "getStreamLength")) {
        if (FUNC_12(VAR_2, &VAR_3->duration)) {
            FUNC_1(VAR_1, VAR_0, "Unexpected reply on getStreamLength()\n");
        }
    }

fail:
    FUNC_0(VAR_4);
    return VAR_5;
}
