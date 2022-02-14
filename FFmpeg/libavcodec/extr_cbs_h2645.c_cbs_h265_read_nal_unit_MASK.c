
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_30__ {int log_ctx; } ;
struct TYPE_29__ {int data_size; int type; TYPE_1__* content; int * data; int data_ref; } ;
struct TYPE_28__ {int data_size; int data_bit_start; int data; int data_ref; int header; } ;
typedef TYPE_1__ H265RawVPS ;
typedef TYPE_1__ H265RawSlice ;
typedef TYPE_1__ H265RawSPS ;
typedef int H265RawSEI ;
typedef TYPE_1__ H265RawPPS ;
typedef int H265RawAUD ;
typedef int GetBitContext ;
typedef TYPE_5__ CodedBitstreamUnit ;
typedef TYPE_6__ CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_6__*,int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_6__*,int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_6__*,int *,TYPE_1__*,int) ;
 int FUNC_6 (TYPE_6__*,int *,int *) ;
 int FUNC_7 (TYPE_6__*,int *,TYPE_1__*) ;
 int FUNC_8 (TYPE_6__*,int *,TYPE_1__*) ;
 int FUNC_9 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_10 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_11 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_12 (TYPE_6__*,TYPE_5__*,int,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,int) ;

__attribute__((used)) static int FUNC_15(CodedBitstreamContext *VAR_8,
                                  CodedBitstreamUnit *VAR_9)
{
    GetBitContext VAR_10;
    int VAR_11;

    VAR_11 = FUNC_14(&VAR_10, VAR_9->data, 8 * VAR_9->data_size);
    if (VAR_11 < 0)
        return VAR_11;

    switch (VAR_9->type) {
    case 128:
        {
            H265RawVPS *VAR_12;

            VAR_11 = FUNC_12(VAR_8, VAR_9, sizeof(*VAR_12),
                                            &VAR_7);
            if (VAR_11 < 0)
                return VAR_11;
            VAR_12 = VAR_9->content;

            VAR_11 = FUNC_8(VAR_8, &VAR_10, VAR_12);
            if (VAR_11 < 0)
                return VAR_11;

            VAR_11 = FUNC_11(VAR_8, VAR_9);
            if (VAR_11 < 0)
                return VAR_11;
        }
        break;
    case 135:
        {
            H265RawSPS *VAR_13;

            VAR_11 = FUNC_12(VAR_8, VAR_9, sizeof(*VAR_13),
                                            &VAR_6);
            if (VAR_11 < 0)
                return VAR_11;
            VAR_13 = VAR_9->content;

            VAR_11 = FUNC_7(VAR_8, &VAR_10, VAR_13);
            if (VAR_11 < 0)
                return VAR_11;

            VAR_11 = FUNC_10(VAR_8, VAR_9);
            if (VAR_11 < 0)
                return VAR_11;
        }
        break;

    case 142:
        {
            H265RawPPS *VAR_14;

            VAR_11 = FUNC_12(VAR_8, VAR_9, sizeof(*VAR_14),
                                            &VAR_3);
            if (VAR_11 < 0)
                return VAR_11;
            VAR_14 = VAR_9->content;

            VAR_11 = FUNC_4(VAR_8, &VAR_10, VAR_14);
            if (VAR_11 < 0)
                return VAR_11;

            VAR_11 = FUNC_9(VAR_8, VAR_9);
            if (VAR_11 < 0)
                return VAR_11;
        }
        break;

    case 132:
    case 131:
    case 130:
    case 129:
    case 134:
    case 133:
    case 141:
    case 140:
    case 139:
    case 138:
    case 147:
    case 146:
    case 148:
    case 143:
    case 144:
    case 145:
        {
            H265RawSlice *VAR_15;
            int VAR_16, VAR_17;

            VAR_11 = FUNC_12(VAR_8, VAR_9, sizeof(*VAR_15),
                                            &VAR_5);
            if (VAR_11 < 0)
                return VAR_11;
            VAR_15 = VAR_9->content;

            VAR_11 = FUNC_6(VAR_8, &VAR_10, &VAR_15->header);
            if (VAR_11 < 0)
                return VAR_11;

            VAR_16 = FUNC_13(&VAR_10);
            VAR_17 = VAR_9->data_size;
            if (!VAR_9->data[VAR_17 - 1]) {
                int VAR_18;
                for (VAR_18 = 0; VAR_18 < VAR_17 && !VAR_9->data[VAR_17 - VAR_18 - 1]; VAR_18++);
                FUNC_2(VAR_8->log_ctx, VAR_0, "Deleted %d trailing zeroes "
                       "from slice data.\n", VAR_18);
                VAR_17 -= VAR_18;
            }

            VAR_15->data_size = VAR_17 - VAR_16 / 8;
            VAR_15->data_ref = FUNC_1(VAR_9->data_ref);
            if (!VAR_15->data_ref)
                return FUNC_0(VAR_1);
            VAR_15->data = *(VAR_9->data + VAR_16 / 8);
            VAR_15->data_bit_start = VAR_16 % 8;
        }
        break;

    case 149:
        {
            VAR_11 = FUNC_12(VAR_8, VAR_9,
                                            sizeof(H265RawAUD), ((void*)0));
            if (VAR_11 < 0)
                return VAR_11;

            VAR_11 = FUNC_3(VAR_8, &VAR_10, VAR_9->content);
            if (VAR_11 < 0)
                return VAR_11;
        }
        break;

    case 137:
    case 136:
        {
            VAR_11 = FUNC_12(VAR_8, VAR_9, sizeof(H265RawSEI),
                                            &VAR_4);

            if (VAR_11 < 0)
                return VAR_11;

            VAR_11 = FUNC_5(VAR_8, &VAR_10, VAR_9->content,
                                    VAR_9->type == 137);

            if (VAR_11 < 0)
                return VAR_11;
        }
        break;

    default:
        return FUNC_0(VAR_2);
    }

    return 0;
}
