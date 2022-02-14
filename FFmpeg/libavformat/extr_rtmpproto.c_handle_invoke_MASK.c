
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int * priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_15__ {int size; int data; } ;
typedef TYPE_2__ RTMPPacket ;
typedef int RTMPContext ;


 scalar_t__ FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_0, RTMPPacket *VAR_1)
{
    RTMPContext *VAR_2 = VAR_0->priv_data;
    int VAR_3 = 0;


    if (FUNC_0(VAR_1->data, VAR_1->size, "_error")) {
        if ((VAR_3 = FUNC_2(VAR_0, VAR_1)) < 0)
            return VAR_3;
    } else if (FUNC_0(VAR_1->data, VAR_1->size, "_result")) {
        if ((VAR_3 = FUNC_3(VAR_0, VAR_1)) < 0)
            return VAR_3;
    } else if (FUNC_0(VAR_1->data, VAR_1->size, "onStatus")) {
        if ((VAR_3 = FUNC_4(VAR_0, VAR_1)) < 0)
            return VAR_3;
    } else if (FUNC_0(VAR_1->data, VAR_1->size, "onBWDone")) {
        if ((VAR_3 = FUNC_1(VAR_0, VAR_2)) < 0)
            return VAR_3;
    } else if (FUNC_0(VAR_1->data, VAR_1->size, "releaseStream") ||
               FUNC_0(VAR_1->data, VAR_1->size, "FCPublish") ||
               FUNC_0(VAR_1->data, VAR_1->size, "publish") ||
               FUNC_0(VAR_1->data, VAR_1->size, "play") ||
               FUNC_0(VAR_1->data, VAR_1->size, "_checkbw") ||
               FUNC_0(VAR_1->data, VAR_1->size, "createStream")) {
        if ((VAR_3 = FUNC_5(VAR_0, VAR_1)) < 0)
            return VAR_3;
    }

    return VAR_3;
}
