
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_19__ ;


typedef enum HapSectionType { ____Placeholder_HapSectionType } HapSectionType ;
struct TYPE_26__ {TYPE_7__* f; } ;
typedef TYPE_2__ ThreadFrame ;
struct TYPE_30__ {int key_frame; int pict_type; } ;
struct TYPE_29__ {int coded_width; int coded_height; int (* execute2 ) (TYPE_5__*,int ,TYPE_7__*,scalar_t__*,int) ;TYPE_1__* codec; TYPE_3__* priv_data; } ;
struct TYPE_28__ {int size; int data; } ;
struct TYPE_24__ {int buffer; } ;
struct TYPE_27__ {int tex_rat; int texture_count; int tex_size; scalar_t__* chunk_results; int chunk_count; int slice_count; int tex_buf; int tex_data; TYPE_19__ gbc; scalar_t__ texture_section_size; int tex_rat2; } ;
struct TYPE_25__ {scalar_t__ update_thread_context; } ;
typedef TYPE_3__ HapContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_5__*,int ,char*,...) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_19__*) ;
 int FUNC_4 (TYPE_19__*,int ,int) ;
 int FUNC_5 (TYPE_19__*,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (TYPE_19__*,int*,int*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*,int ,TYPE_7__*,scalar_t__*,int) ;
 int FUNC_12 (TYPE_5__*,int ,TYPE_7__*,scalar_t__*,int) ;
 int FUNC_13 (TYPE_5__*,int ,TYPE_7__*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_14(AVCodecContext *VAR_9, void *VAR_10,
                      int *VAR_11, AVPacket *VAR_12)
{
    HapContext *VAR_13 = VAR_9->priv_data;
    ThreadFrame VAR_14;
    int VAR_15, VAR_16, VAR_17;
    int VAR_18;
    int VAR_19;
    enum HapSectionType VAR_20;
    int VAR_21 = 0;
    int VAR_22[2] = {0, 0};

    FUNC_4(&VAR_13->gbc, VAR_12->data, VAR_12->size);

    VAR_22[0] = VAR_13->tex_rat;


    if (VAR_13->texture_count == 2) {
        VAR_15 = FUNC_6(&VAR_13->gbc, &VAR_19, &VAR_20);
        if (VAR_15 != 0)
            return VAR_15;
        if ((VAR_20 & 0x0F) != 0x0D) {
            FUNC_1(VAR_9, VAR_1, "Invalid section type in 2 textures mode %#04x.\n", VAR_20);
            return VAR_0;
        }
        VAR_21 = 4;
        VAR_22[1] = VAR_13->tex_rat2;
    }


    VAR_14.f = VAR_10;
    VAR_15 = FUNC_8(VAR_9, &VAR_14, 0);
    if (VAR_15 < 0)
        return VAR_15;

    for (VAR_17 = 0; VAR_17 < VAR_13->texture_count; VAR_17++) {
        FUNC_5(&VAR_13->gbc, VAR_21, VAR_3);


        VAR_15 = FUNC_10(VAR_9);
        if (VAR_15 < 0)
            return VAR_15;

        VAR_21 += VAR_13->texture_section_size + 4;

        if (VAR_9->codec->update_thread_context)
            FUNC_7(VAR_9);


        if (FUNC_9(VAR_13)) {

            VAR_13->tex_data = VAR_13->gbc.buffer;
            VAR_18 = FUNC_0(VAR_13->texture_section_size, FUNC_3(&VAR_13->gbc));
        } else {

            VAR_15 = FUNC_2(&VAR_13->tex_buf, VAR_13->tex_size);
            if (VAR_15 < 0)
                return VAR_15;

            VAR_9->execute2(VAR_9, VAR_6, ((void*)0),
                            VAR_13->chunk_results, VAR_13->chunk_count);

            for (VAR_16 = 0; VAR_16 < VAR_13->chunk_count; VAR_16++) {
                if (VAR_13->chunk_results[VAR_16] < 0)
                    return VAR_13->chunk_results[VAR_16];
            }

            VAR_13->tex_data = VAR_13->tex_buf;
            VAR_18 = VAR_13->tex_size;
        }

        if (VAR_18 < (VAR_9->coded_width / VAR_5)
            *(VAR_9->coded_height / VAR_4)
            *VAR_22[VAR_17]) {
            FUNC_1(VAR_9, VAR_1, "Insufficient data\n");
            return VAR_0;
        }


        if (VAR_17 == 0){
            VAR_9->execute2(VAR_9, VAR_8, VAR_14.f, ((void*)0), VAR_13->slice_count);
        } else{
            VAR_14.f = VAR_10;
            VAR_9->execute2(VAR_9, VAR_7, VAR_14.f, ((void*)0), VAR_13->slice_count);
        }
    }


    VAR_14.f->pict_type = VAR_2;
    VAR_14.f->key_frame = 1;
    *VAR_11 = 1;

    return VAR_12->size;
}
