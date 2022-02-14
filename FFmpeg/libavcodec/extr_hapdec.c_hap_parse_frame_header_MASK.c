
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef enum HapSectionType { ____Placeholder_HapSectionType } HapSectionType ;
struct TYPE_16__ {scalar_t__ codec_tag; TYPE_1__* priv_data; } ;
struct TYPE_15__ {scalar_t__ buffer; } ;
struct TYPE_14__ {int compressor; scalar_t__ compressed_offset; int compressed_size; scalar_t__ uncompressed_offset; scalar_t__ uncompressed_size; } ;
struct TYPE_13__ {int texture_section_size; scalar_t__ tex_size; int chunk_count; TYPE_2__* chunks; TYPE_3__ gbc; } ;
typedef TYPE_1__ HapContext ;
typedef TYPE_2__ HapChunk ;
typedef TYPE_3__ GetByteContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 int FUNC_1 (TYPE_4__*,int ,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,int*,int*) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_8)
{
    HapContext *VAR_9 = VAR_8->priv_data;
    GetByteContext *VAR_10 = &VAR_9->gbc;
    int VAR_11;
    enum HapSectionType VAR_12;
    const char *VAR_13;
    int VAR_14, VAR_15;

    VAR_15 = FUNC_4(VAR_10, &VAR_9->texture_section_size, &VAR_12);
    if (VAR_15 != 0)
        return VAR_15;

    if ((VAR_8->codec_tag == FUNC_0('H','a','p','1') && (VAR_12 & 0x0F) != VAR_4) ||
        (VAR_8->codec_tag == FUNC_0('H','a','p','5') && (VAR_12 & 0x0F) != VAR_3) ||
        (VAR_8->codec_tag == FUNC_0('H','a','p','Y') && (VAR_12 & 0x0F) != VAR_6) ||
        (VAR_8->codec_tag == FUNC_0('H','a','p','A') && (VAR_12 & 0x0F) != VAR_5) ||
        ((VAR_8->codec_tag == FUNC_0('H','a','p','M') && (VAR_12 & 0x0F) != VAR_5) &&
                                                        (VAR_12 & 0x0F) != VAR_6)) {
        FUNC_1(VAR_8, VAR_2,
               "Invalid texture format %#04x.\n", VAR_12 & 0x0F);
        return VAR_0;
    }

    switch (VAR_12 & 0xF0) {
        case 129:
        case 128:
            VAR_15 = FUNC_5(VAR_9, 1, 1);
            if (VAR_15 == 0) {
                VAR_9->chunks[0].compressor = VAR_12 & 0xF0;
                VAR_9->chunks[0].compressed_offset = 0;
                VAR_9->chunks[0].compressed_size = VAR_9->texture_section_size;
            }
            if (VAR_9->chunks[0].compressor == 129) {
                VAR_13 = "none";
            } else {
                VAR_13 = "snappy";
            }
            break;
        case 130:
            VAR_15 = FUNC_4(VAR_10, &VAR_11, &VAR_12);
            if (VAR_15 == 0 && VAR_12 != VAR_7)
                VAR_15 = VAR_0;
            if (VAR_15 == 0)
                VAR_15 = FUNC_7(VAR_9, VAR_11);
            VAR_13 = "complex";
            break;
        default:
            VAR_15 = VAR_0;
            break;
    }

    if (VAR_15 != 0)
        return VAR_15;


    VAR_9->tex_size = 0;
    for (VAR_14 = 0; VAR_14 < VAR_9->chunk_count; VAR_14++) {
        HapChunk *VAR_16 = &VAR_9->chunks[VAR_14];


        if (VAR_16->compressed_offset + VAR_16->compressed_size > FUNC_2(VAR_10))
            return VAR_0;



        VAR_16->uncompressed_offset = VAR_9->tex_size;


        if (VAR_16->compressor == 128) {
            GetByteContext VAR_17;
            int64_t VAR_18;
            FUNC_3(&VAR_17, VAR_10->buffer + VAR_16->compressed_offset,
                             VAR_16->compressed_size);
            VAR_18 = FUNC_6(&VAR_17);
            if (VAR_18 < 0) {
                return VAR_18;
            }
            VAR_16->uncompressed_size = VAR_18;
        } else if (VAR_16->compressor == 129) {
            VAR_16->uncompressed_size = VAR_16->compressed_size;
        } else {
            return VAR_0;
        }
        VAR_9->tex_size += VAR_16->uncompressed_size;
    }

    FUNC_1(VAR_8, VAR_1, "%s compressor\n", VAR_13);

    return VAR_15;
}
