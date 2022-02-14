
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int webm ;
typedef int uint8_t ;
typedef int opus ;
typedef int oggs ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int send_started; int hd; int content_type; } ;
typedef TYPE_2__ IcecastContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (int ,int const*,int) ;
 scalar_t__ FUNC_2 (int const*,int const*,int) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    IcecastContext *VAR_4 = VAR_1->priv_data;
    if (!VAR_4->send_started) {
        VAR_4->send_started = 1;
        if (!VAR_4->content_type && VAR_3 >= 8) {
            static const uint8_t VAR_5[4] = { 0x4F, 0x67, 0x67, 0x53 };
            static const uint8_t VAR_6[4] = { 0x1A, 0x45, 0xDF, 0xA3 };
            static const uint8_t VAR_7[8] = { 0x4F, 0x70, 0x75, 0x73, 0x48, 0x65, 0x61, 0x64 };
            if (FUNC_2(VAR_2, VAR_5, sizeof(VAR_5)) == 0) {
                FUNC_0(VAR_1, VAR_0, "Streaming Ogg but appropriate content type NOT set!\n");
                FUNC_0(VAR_1, VAR_0, "Set it with -content_type application/ogg\n");
            } else if (FUNC_2(VAR_2, VAR_7, sizeof(VAR_7)) == 0) {
                FUNC_0(VAR_1, VAR_0, "Streaming Opus but appropriate content type NOT set!\n");
                FUNC_0(VAR_1, VAR_0, "Set it with -content_type audio/ogg\n");
            } else if (FUNC_2(VAR_2, VAR_6, sizeof(VAR_6)) == 0) {
                FUNC_0(VAR_1, VAR_0, "Streaming WebM but appropriate content type NOT set!\n");
                FUNC_0(VAR_1, VAR_0, "Set it with -content_type video/webm\n");
            } else {
                FUNC_0(VAR_1, VAR_0, "It seems you are streaming an unsupported format.\n");
                FUNC_0(VAR_1, VAR_0, "It might work, but is not officially supported in Icecast!\n");
            }
        }
    }
    return FUNC_1(VAR_4->hd, VAR_2, VAR_3);
}
