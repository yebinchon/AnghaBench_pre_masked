
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tmpstr ;
struct TYPE_10__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_12__ {int do_reconnect; scalar_t__ live; } ;
struct TYPE_11__ {int size; int * data; } ;
typedef TYPE_2__ RTMPPacket ;
typedef TYPE_3__ RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int,char*,int *) ;
 int FUNC_2 (int *,int const*,char*,int *,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int,char**) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_5, RTMPPacket *VAR_6)
{
    RTMPContext *VAR_7 = VAR_5->priv_data;
    const uint8_t *VAR_8 = VAR_6->data + VAR_6->size;
    char *VAR_9 = ((void*)0);
    int VAR_10 = VAR_2;
    uint8_t VAR_11[256];
    int VAR_12;

    if ((VAR_12 = FUNC_3(VAR_5, VAR_6, 9, &VAR_9)) < 0)
        return VAR_12;

    if (!FUNC_2(VAR_6->data + 9, VAR_8,
                                "description", VAR_11, sizeof(VAR_11))) {
        if (VAR_9 && (!FUNC_5(VAR_9, "_checkbw") ||
                               !FUNC_5(VAR_9, "releaseStream") ||
                               !FUNC_5(VAR_9, "FCSubscribe") ||
                               !FUNC_5(VAR_9, "FCPublish"))) {

            VAR_10 = VAR_4;
            VAR_12 = 0;
        } else if (VAR_9 && !FUNC_5(VAR_9, "getStreamLength")) {
            VAR_10 = VAR_7->live ? VAR_1 : VAR_4;
            VAR_12 = 0;
        } else if (VAR_9 && !FUNC_5(VAR_9, "connect")) {
            VAR_12 = FUNC_4(VAR_5, VAR_11);
            if (!VAR_12) {
                VAR_7->do_reconnect = 1;
                VAR_10 = VAR_3;
            }
        } else
            VAR_12 = VAR_0;
        FUNC_1(VAR_5, VAR_10, "Server error: %s\n", VAR_11);
    }

    FUNC_0(VAR_9);
    return VAR_12;
}
