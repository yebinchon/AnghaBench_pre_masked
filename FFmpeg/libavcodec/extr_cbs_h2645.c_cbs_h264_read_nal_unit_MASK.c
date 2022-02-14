
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_1__ ;


struct TYPE_35__ {int log_ctx; } ;
struct TYPE_34__ {int data_size; int type; TYPE_1__* content; int * data; int data_ref; } ;
struct TYPE_33__ {int data_size; int data_bit_start; int data; int data_ref; int header; } ;
typedef TYPE_1__ H264RawSlice ;
typedef int H264RawSPSExtension ;
typedef TYPE_1__ H264RawSPS ;
typedef int H264RawSEI ;
typedef TYPE_1__ H264RawPPS ;
typedef int H264RawNALUnitHeader ;
typedef int H264RawFiller ;
typedef int H264RawAUD ;
typedef int GetBitContext ;
typedef TYPE_4__ CodedBitstreamUnit ;
typedef TYPE_5__ CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_5__*,int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_5__*,int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_5__*,int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_5__*,int *,TYPE_1__*) ;
 int FUNC_7 (TYPE_5__*,int *,TYPE_1__*) ;
 int FUNC_8 (TYPE_5__*,int *,TYPE_1__*) ;
 int FUNC_9 (TYPE_5__*,int *,int *) ;
 int FUNC_10 (TYPE_5__*,int *,TYPE_1__*) ;
 int FUNC_11 (TYPE_5__*,int *,TYPE_1__*) ;
 int FUNC_12 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_13 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_14 (TYPE_5__*,TYPE_4__*,int,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *,int) ;
 int FUNC_17 (TYPE_5__*,int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_18(CodedBitstreamContext *VAR_6,
                                  CodedBitstreamUnit *VAR_7)
{
    GetBitContext VAR_8;
    int VAR_9;

    VAR_9 = FUNC_16(&VAR_8, VAR_7->data, 8 * VAR_7->data_size);
    if (VAR_9 < 0)
        return VAR_9;

    switch (VAR_7->type) {
    case 129:
        {
            H264RawSPS *VAR_10;

            VAR_9 = FUNC_14(VAR_6, VAR_7, sizeof(*VAR_10), ((void*)0));
            if (VAR_9 < 0)
                return VAR_9;
            VAR_10 = VAR_7->content;

            VAR_9 = FUNC_10(VAR_6, &VAR_8, VAR_10);
            if (VAR_9 < 0)
                return VAR_9;

            VAR_9 = FUNC_13(VAR_6, VAR_7);
            if (VAR_9 < 0)
                return VAR_9;
        }
        break;

    case 128:
        {
            VAR_9 = FUNC_14(VAR_6, VAR_7,
                                            sizeof(H264RawSPSExtension),
                                            ((void*)0));
            if (VAR_9 < 0)
                return VAR_9;

            VAR_9 = FUNC_11(VAR_6, &VAR_8, VAR_7->content);
            if (VAR_9 < 0)
                return VAR_9;
        }
        break;

    case 132:
        {
            H264RawPPS *VAR_11;

            VAR_9 = FUNC_14(VAR_6, VAR_7, sizeof(*VAR_11),
                                            &VAR_3);
            if (VAR_9 < 0)
                return VAR_9;
            VAR_11 = VAR_7->content;

            VAR_9 = FUNC_7(VAR_6, &VAR_8, VAR_11);
            if (VAR_9 < 0)
                return VAR_9;

            VAR_9 = FUNC_12(VAR_6, VAR_7);
            if (VAR_9 < 0)
                return VAR_9;
        }
        break;

    case 130:
    case 133:
    case 137:
        {
            H264RawSlice *VAR_12;
            int VAR_13, VAR_14;

            VAR_9 = FUNC_14(VAR_6, VAR_7, sizeof(*VAR_12),
                                            &VAR_5);
            if (VAR_9 < 0)
                return VAR_9;
            VAR_12 = VAR_7->content;

            VAR_9 = FUNC_9(VAR_6, &VAR_8, &VAR_12->header);
            if (VAR_9 < 0)
                return VAR_9;

            VAR_13 = FUNC_15(&VAR_8);
            VAR_14 = VAR_7->data_size;
            if (!VAR_7->data[VAR_14 - 1]) {
                int VAR_15;
                for (VAR_15 = 0; VAR_15 < VAR_14 && !VAR_7->data[VAR_14 - VAR_15 - 1]; VAR_15++);
                FUNC_2(VAR_6->log_ctx, VAR_0, "Deleted %d trailing zeroes "
                       "from slice data.\n", VAR_15);
                VAR_14 -= VAR_15;
            }

            VAR_12->data_size = VAR_14 - VAR_13 / 8;
            VAR_12->data_ref = FUNC_1(VAR_7->data_ref);
            if (!VAR_12->data_ref)
                return FUNC_0(VAR_1);
            VAR_12->data = *(VAR_7->data + VAR_13 / 8);
            VAR_12->data_bit_start = VAR_13 % 8;
        }
        break;

    case 138:
        {
            VAR_9 = FUNC_14(VAR_6, VAR_7,
                                            sizeof(H264RawAUD), ((void*)0));
            if (VAR_9 < 0)
                return VAR_9;

            VAR_9 = FUNC_3(VAR_6, &VAR_8, VAR_7->content);
            if (VAR_9 < 0)
                return VAR_9;
        }
        break;

    case 131:
        {
            VAR_9 = FUNC_14(VAR_6, VAR_7, sizeof(H264RawSEI),
                                            &VAR_4);
            if (VAR_9 < 0)
                return VAR_9;

            VAR_9 = FUNC_8(VAR_6, &VAR_8, VAR_7->content);
            if (VAR_9 < 0)
                return VAR_9;
        }
        break;

    case 134:
        {
            VAR_9 = FUNC_14(VAR_6, VAR_7,
                                            sizeof(H264RawFiller), ((void*)0));
            if (VAR_9 < 0)
                return VAR_9;

            VAR_9 = FUNC_6(VAR_6, &VAR_8, VAR_7->content);
            if (VAR_9 < 0)
                return VAR_9;
        }
        break;

    case 136:
    case 135:
        {
            VAR_9 = FUNC_14(VAR_6, VAR_7,
                                            sizeof(H264RawNALUnitHeader),
                                            ((void*)0));
            if (VAR_9 < 0)
                return VAR_9;

            VAR_9 = (VAR_7->type == 136 ?
                   FUNC_4 :
                   FUNC_5)(VAR_6, &VAR_8, VAR_7->content);
            if (VAR_9 < 0)
                return VAR_9;
        }
        break;

    default:
        return FUNC_0(VAR_2);
    }

    return 0;
}
