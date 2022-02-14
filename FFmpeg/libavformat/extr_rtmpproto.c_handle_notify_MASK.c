
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef char uint8_t ;
typedef int statusmsg ;
typedef int commandbuffer ;
struct TYPE_16__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_19__ {int buffer; int buffer_end; } ;
struct TYPE_18__ {int received_metadata; int has_video; int has_audio; } ;
struct TYPE_17__ {int data; int size; } ;
typedef TYPE_2__ RTMPPacket ;
typedef TYPE_3__ RTMPContext ;
typedef TYPE_4__ GetByteContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int,int ) ;
 int FUNC_5 (TYPE_4__*,int) ;
 scalar_t__ FUNC_6 (TYPE_4__*,char*,int,int*) ;
 int FUNC_7 (TYPE_4__*,char*,int,int*) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(URLContext *VAR_3, RTMPPacket *VAR_4)
{
    RTMPContext *VAR_5 = VAR_3->priv_data;
    uint8_t VAR_6[64];
    char VAR_7[128];
    int VAR_8, VAR_9, VAR_10 = 0;
    GetByteContext VAR_11;

    FUNC_4(&VAR_11, VAR_4->data, VAR_4->size);
    if (FUNC_7(&VAR_11, VAR_6, sizeof(VAR_6),
                           &VAR_8))
        return VAR_2;

    if (!FUNC_9(VAR_6, "onMetaData")) {

        if (FUNC_2(&VAR_11) == VAR_0) {


            VAR_5->received_metadata = 1;

            FUNC_5(&VAR_11, 4);
            while (FUNC_3(&VAR_11) > 3) {
                if (FUNC_6(&VAR_11, VAR_7, sizeof(VAR_7),
                                      &VAR_8))
                    return VAR_2;

                VAR_8 = FUNC_8(VAR_11.buffer, VAR_11.buffer_end);
                if (VAR_8 < 0)
                    return VAR_2;
                FUNC_5(&VAR_11, VAR_8);



                if (!FUNC_9(VAR_7, "videocodecid")) {
                    VAR_5->has_video = 1;
                }
                if (!FUNC_9(VAR_7, "audiocodecid")) {
                    VAR_5->has_audio = 1;
                }
            }
            if (FUNC_1(&VAR_11) != VAR_1)
                return VAR_2;
        }
    }


    if (!FUNC_9(VAR_6, "@setDataFrame")) {
        VAR_10 = VAR_11.buffer - VAR_4->data;
        VAR_9 = FUNC_7(&VAR_11, VAR_7,
                                 sizeof(VAR_7), &VAR_8);
        if (VAR_9 < 0)
            return VAR_2;
    }

    return FUNC_0(VAR_5, VAR_4, VAR_10);
}
