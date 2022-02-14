
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_17__ {int interlaced; int pb; TYPE_4__* avctx; TYPE_5__* transform_args; int * plane; } ;
typedef TYPE_1__ VC2EncContext ;
typedef int TransformArgs ;
struct TYPE_21__ {int field; int istride; int idata; int * plane; TYPE_1__* ctx; } ;
struct TYPE_20__ {int (* execute ) (TYPE_4__*,int ,TYPE_5__*,int *,int,int) ;} ;
struct TYPE_19__ {int * linesize; int * data; } ;
struct TYPE_18__ {int size; int data; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_2__*,int,int) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (TYPE_4__*,int ,TYPE_5__*,int *,int,int) ;

__attribute__((used)) static int FUNC_10(VC2EncContext *VAR_6, AVPacket *VAR_7, const AVFrame *VAR_8,
                        const char *VAR_9, const int VAR_10, int VAR_11)
{
    int VAR_12, VAR_13;
    int64_t VAR_14;


    for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
        VAR_6->transform_args[VAR_12].ctx = VAR_6;
        VAR_6->transform_args[VAR_12].field = VAR_11;
        VAR_6->transform_args[VAR_12].plane = &VAR_6->plane[VAR_12];
        VAR_6->transform_args[VAR_12].idata = VAR_8->data[VAR_12];
        VAR_6->transform_args[VAR_12].istride = VAR_8->linesize[VAR_12];
    }
    VAR_6->avctx->execute(VAR_6->avctx, VAR_5, VAR_6->transform_args, ((void*)0), 3,
                      sizeof(TransformArgs));


    VAR_14 = VAR_10 + FUNC_2(VAR_6);

    if (VAR_11 < 2) {
        VAR_13 = FUNC_7(VAR_6->avctx, VAR_7,
                               VAR_14 << VAR_6->interlaced,
                               VAR_14 << VAR_6->interlaced);
        if (VAR_13) {
            FUNC_0(VAR_6->avctx, VAR_0, "Error getting output packet.\n");
            return VAR_13;
        }
        FUNC_8(&VAR_6->pb, VAR_7->data, VAR_7->size);
    }


    FUNC_3(VAR_6, VAR_4);
    FUNC_5(VAR_6);


    if (VAR_9) {
        FUNC_3(VAR_6, VAR_1);
        FUNC_1(&VAR_6->pb, VAR_9, 1);
    }


    FUNC_3(VAR_6, VAR_3);
    FUNC_4(VAR_6);


    FUNC_6(VAR_6);


    FUNC_3(VAR_6, VAR_2);

    return 0;
}
