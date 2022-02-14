
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int log_ctx; } ;
struct TYPE_7__ {int data_size; int* data; int * data_ref; } ;
typedef TYPE_1__ CodedBitstreamFragment ;
typedef TYPE_2__ CodedBitstreamContext ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int**) ;
 int FUNC_3 (int ,int ,char*,...) ;
 int* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int,int,int*,size_t,int *) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (int*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(CodedBitstreamContext *VAR_8,
                                   CodedBitstreamFragment *VAR_9,
                                   int VAR_10)
{
    AVBufferRef *VAR_11;
    uint8_t *VAR_12;
    size_t VAR_13;
    int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    int VAR_20, VAR_21, VAR_22, VAR_23;

    if (VAR_9->data_size < 4) {

        return VAR_0;
    }

    for (VAR_21 = 0; VAR_21 + 1 < VAR_9->data_size && VAR_9->data[VAR_21] != 0xff; VAR_21++);
    if (VAR_21 > 0) {
        FUNC_3(VAR_8->log_ctx, VAR_3, "Discarding %d bytes at "
               "beginning of image.\n", VAR_21);
    }
    for (++VAR_21; VAR_21 + 1 < VAR_9->data_size && VAR_9->data[VAR_21] == 0xff; VAR_21++);
    if (VAR_21 + 1 >= VAR_9->data_size && VAR_9->data[VAR_21]) {
        FUNC_3(VAR_8->log_ctx, VAR_2, "Invalid JPEG image: "
               "no SOI marker found.\n");
        return VAR_0;
    }
    VAR_17 = VAR_9->data[VAR_21];
    if (VAR_17 != VAR_6) {
        FUNC_3(VAR_8->log_ctx, VAR_2, "Invalid JPEG image: first "
               "marker is %02x, should be SOI.\n", VAR_17);
        return VAR_0;
    }
    for (++VAR_21; VAR_21 + 1 < VAR_9->data_size && VAR_9->data[VAR_21] == 0xff; VAR_21++);
    if (VAR_21 + 1 >= VAR_9->data_size) {
        FUNC_3(VAR_8->log_ctx, VAR_2, "Invalid JPEG image: "
               "no image content found.\n");
        return VAR_0;
    }
    VAR_17 = VAR_9->data[VAR_21];
    VAR_15 = VAR_21 + 1;

    for (VAR_14 = 0;; VAR_14++) {
        if (VAR_17 == VAR_5) {
            break;
        } else if (VAR_17 == VAR_7) {
            for (VAR_21 = VAR_15; VAR_21 + 1 < VAR_9->data_size; VAR_21++) {
                if (VAR_9->data[VAR_21] != 0xff)
                    continue;
                VAR_16 = VAR_21;
                for (++VAR_21; VAR_21 + 1 < VAR_9->data_size &&
                          VAR_9->data[VAR_21] == 0xff; VAR_21++);
                if (VAR_21 + 1 >= VAR_9->data_size) {
                    VAR_19 = -1;
                } else {
                    if (VAR_9->data[VAR_21] == 0x00)
                        continue;
                    VAR_19 = VAR_9->data[VAR_21];
                    VAR_18 = VAR_21 + 1;
                }
                break;
            }
        } else {
            VAR_21 = VAR_15;
            if (VAR_21 + 2 > VAR_9->data_size) {
                FUNC_3(VAR_8->log_ctx, VAR_2, "Invalid JPEG image: "
                       "truncated at %02x marker.\n", VAR_17);
                return VAR_0;
            }
            VAR_23 = FUNC_1(VAR_9->data + VAR_21);
            if (VAR_21 + VAR_23 > VAR_9->data_size) {
                FUNC_3(VAR_8->log_ctx, VAR_2, "Invalid JPEG image: "
                       "truncated at %02x marker segment.\n", VAR_17);
                return VAR_0;
            }
            VAR_16 = VAR_15 + VAR_23;

            VAR_21 = VAR_16;
            if (VAR_9->data[VAR_21] != 0xff) {
                VAR_19 = -1;
            } else {
                for (++VAR_21; VAR_21 + 1 < VAR_9->data_size &&
                          VAR_9->data[VAR_21] == 0xff; VAR_21++);
                if (VAR_21 + 1 >= VAR_9->data_size) {
                    VAR_19 = -1;
                } else {
                    VAR_19 = VAR_9->data[VAR_21];
                    VAR_18 = VAR_21 + 1;
                }
            }
        }

        if (VAR_17 == VAR_7) {
            VAR_23 = FUNC_1(VAR_9->data + VAR_15);

            VAR_11 = ((void*)0);
            VAR_12 = FUNC_4(VAR_16 - VAR_15 +
                                 VAR_1);
            if (!VAR_12)
                return FUNC_0(VAR_4);

            FUNC_6(VAR_12, VAR_9->data + VAR_15, VAR_23);
            for (VAR_21 = VAR_15 + VAR_23, VAR_22 = VAR_23; VAR_21 < VAR_16; VAR_21++, VAR_22++) {
                if (VAR_9->data[VAR_21] == 0xff) {
                    while (VAR_9->data[VAR_21] == 0xff)
                        ++VAR_21;
                    VAR_12[VAR_22] = 0xff;
                } else {
                    VAR_12[VAR_22] = VAR_9->data[VAR_21];
                }
            }
            VAR_13 = VAR_22;

            FUNC_7(VAR_12 + VAR_13, 0, VAR_1);

        } else {
            VAR_12 = VAR_9->data + VAR_15;
            VAR_13 = VAR_16 - VAR_15;
            VAR_11 = VAR_9->data_ref;
        }

        VAR_20 = FUNC_5(VAR_8, VAR_9, VAR_14, VAR_17,
                                      VAR_12, VAR_13, VAR_11);
        if (VAR_20 < 0) {
            if (!VAR_11)
                FUNC_2(&VAR_12);
            return VAR_20;
        }

        if (VAR_19 == -1)
            break;
        VAR_17 = VAR_19;
        VAR_15 = VAR_18;
    }

    return 0;
}
