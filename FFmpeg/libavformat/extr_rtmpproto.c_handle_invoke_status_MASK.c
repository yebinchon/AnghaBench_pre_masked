
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tmpstr ;
struct TYPE_7__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_9__ {void* state; } ;
struct TYPE_8__ {int size; int * data; } ;
typedef TYPE_2__ RTMPPacket ;
typedef TYPE_3__ RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int *) ;
 int FUNC_1 (int const*,int const*,char*,int *,int) ;
 int FUNC_2 (int const*,int const*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_5, RTMPPacket *VAR_6)
{
    RTMPContext *VAR_7 = VAR_5->priv_data;
    const uint8_t *VAR_8 = VAR_6->data + VAR_6->size;
    const uint8_t *VAR_9 = VAR_6->data + VAR_1;
    uint8_t VAR_10[256];
    int VAR_11, VAR_12;

    for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
        VAR_12 = FUNC_2(VAR_9, VAR_8);
        if (VAR_12 < 0)
            return 1;
        VAR_9 += VAR_12;
    }

    VAR_12 = FUNC_1(VAR_9, VAR_8, "level", VAR_10, sizeof(VAR_10));
    if (!VAR_12 && !FUNC_3(VAR_10, "error")) {
        VAR_12 = FUNC_1(VAR_9, VAR_8,
                                   "description", VAR_10, sizeof(VAR_10));
        if (VAR_12 || !VAR_10[0])
            VAR_12 = FUNC_1(VAR_9, VAR_8, "code",
                                       VAR_10, sizeof(VAR_10));
        if (!VAR_12)
            FUNC_0(VAR_5, VAR_0, "Server error: %s\n", VAR_10);
        return -1;
    }

    VAR_12 = FUNC_1(VAR_9, VAR_8, "code", VAR_10, sizeof(VAR_10));
    if (!VAR_12 && !FUNC_3(VAR_10, "NetStream.Play.Start")) VAR_7->state = VAR_2;
    if (!VAR_12 && !FUNC_3(VAR_10, "NetStream.Play.Stop")) VAR_7->state = VAR_4;
    if (!VAR_12 && !FUNC_3(VAR_10, "NetStream.Play.UnpublishNotify")) VAR_7->state = VAR_4;
    if (!VAR_12 && !FUNC_3(VAR_10, "NetStream.Publish.Start")) VAR_7->state = VAR_3;
    if (!VAR_12 && !FUNC_3(VAR_10, "NetStream.Seek.Notify")) VAR_7->state = VAR_2;

    return 0;
}
