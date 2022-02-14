
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_10__ {TYPE_2__* priv_data; } ;
struct TYPE_9__ {int uncompressed_offset; scalar_t__ compressor; int compressed_size; scalar_t__ compressed_offset; } ;
struct TYPE_7__ {scalar_t__ buffer; } ;
struct TYPE_8__ {int tex_size; TYPE_1__ gbc; int * tex_buf; TYPE_3__* chunks; } ;
typedef TYPE_2__ HapContext ;
typedef TYPE_3__ HapChunk ;
typedef int GetByteContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_3, void *VAR_4,
                                    int VAR_5, int VAR_6)
{
    HapContext *VAR_7 = VAR_3->priv_data;

    HapChunk *VAR_8 = &VAR_7->chunks[VAR_5];
    GetByteContext VAR_9;
    uint8_t *VAR_10 = VAR_7->tex_buf + VAR_8->uncompressed_offset;

    FUNC_2(&VAR_9, VAR_7->gbc.buffer + VAR_8->compressed_offset, VAR_8->compressed_size);

    if (VAR_8->compressor == VAR_2) {
        int VAR_11;
        int64_t VAR_12 = VAR_7->tex_size;


        VAR_11 = FUNC_3(&VAR_9, VAR_10, &VAR_12);
        if (VAR_11 < 0) {
             FUNC_0(VAR_3, VAR_0, "Snappy uncompress error\n");
             return VAR_11;
        }
    } else if (VAR_8->compressor == VAR_1) {
        FUNC_1(&VAR_9, VAR_10, VAR_8->compressed_size);
    }

    return 0;
}
