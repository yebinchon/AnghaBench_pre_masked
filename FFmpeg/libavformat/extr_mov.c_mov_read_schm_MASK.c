
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int scheme; } ;
struct TYPE_15__ {int nb_streams; TYPE_5__** streams; } ;
struct TYPE_14__ {TYPE_2__* priv_data; } ;
struct TYPE_13__ {int size; } ;
struct TYPE_12__ {TYPE_8__* fc; } ;
struct TYPE_10__ {TYPE_9__* default_encrypted_sample; } ;
struct TYPE_11__ {scalar_t__ pseudo_stream_id; TYPE_1__ cenc; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ MOVContext ;
typedef TYPE_4__ MOVAtom ;
typedef TYPE_5__ AVStream ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_9__* FUNC_1 (int ,int,int) ;
 int FUNC_2 (TYPE_8__*,int ,char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(MOVContext *VAR_4, AVIOContext *VAR_5, MOVAtom VAR_6)
{
    AVStream *VAR_7;
    MOVStreamContext *VAR_8;

    if (VAR_4->fc->nb_streams < 1)
        return 0;
    VAR_7 = VAR_4->fc->streams[VAR_4->fc->nb_streams-1];
    VAR_8 = VAR_7->priv_data;

    if (VAR_8->pseudo_stream_id != 0) {
        FUNC_2(VAR_4->fc, VAR_2, "schm boxes are only supported in first sample descriptor\n");
        return VAR_1;
    }

    if (VAR_6.size < 8)
        return VAR_0;

    FUNC_3(VAR_5);

    if (!VAR_8->cenc.default_encrypted_sample) {
        VAR_8->cenc.default_encrypted_sample = FUNC_1(0, 16, 16);
        if (!VAR_8->cenc.default_encrypted_sample) {
            return FUNC_0(VAR_3);
        }
    }

    VAR_8->cenc.default_encrypted_sample->scheme = FUNC_3(VAR_5);
    return 0;
}
