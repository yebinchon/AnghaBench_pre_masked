
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ frame_ct_out; int * session; } ;
typedef TYPE_2__ VTEncContext ;
struct TYPE_8__ {int den; } ;
struct TYPE_10__ {scalar_t__ extradata_size; scalar_t__ extradata; TYPE_1__ time_base; TYPE_2__* priv_data; } ;
typedef int * CVPixelBufferRef ;
typedef int * CVPixelBufferPoolRef ;
typedef int CMVideoCodecType ;
typedef int CMTime ;
typedef int * CMSampleBufferRef ;
typedef int CFStringRef ;
typedef int CFNumberRef ;
typedef int CFDictionaryRef ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,int **) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ,int ,int *,int *,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__*,int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (TYPE_3__*,int ,int ,int ,int ,int ,int **) ;
 int FUNC_9 (TYPE_2__*,int ,int **,int *) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_4,
                                    CMVideoCodecType VAR_5,
                                    CFStringRef VAR_6,
                                    CFNumberRef VAR_7,
                                    CFDictionaryRef VAR_8,
                                    CFDictionaryRef VAR_9)
{
    VTEncContext *VAR_10 = VAR_4->priv_data;
    int VAR_11;
    CVPixelBufferPoolRef VAR_12 = ((void*)0);
    CVPixelBufferRef VAR_13 = ((void*)0);
    CMTime VAR_14;
    CMSampleBufferRef VAR_15 = ((void*)0);

    VAR_11 = FUNC_8(VAR_4,
                                  VAR_5,
                                  VAR_6,
                                  VAR_7,
                                  VAR_8,
                                  VAR_9,
                                  &VAR_10->session);
    if (VAR_11)
        goto pe_cleanup;

    VAR_12 = FUNC_5(VAR_10->session);
    if(!VAR_12){
        FUNC_7(VAR_4, VAR_0, "Error getting pixel buffer pool.\n");
        goto pe_cleanup;
    }

    VAR_11 = FUNC_2(((void*)0),
                                                VAR_12,
                                                &VAR_13);

    if(VAR_11 != VAR_3){
        FUNC_7(VAR_4, VAR_0, "Error creating frame from pool: %d\n", VAR_11);
        goto pe_cleanup;
    }

    VAR_14 = FUNC_1(0, VAR_4->time_base.den);
    VAR_11 = FUNC_4(VAR_10->session,
                                             VAR_13,
                                             VAR_14,
                                             VAR_2,
                                             ((void*)0),
                                             ((void*)0),
                                             ((void*)0));

    if (VAR_11) {
        FUNC_7(VAR_4,
               VAR_0,
               "Error sending frame for extradata: %d\n",
               VAR_11);

        goto pe_cleanup;
    }


    VAR_11 = FUNC_3(VAR_10->session,
                                                VAR_1);

    if (VAR_11)
        goto pe_cleanup;

    VAR_11 = FUNC_9(VAR_10, 0, &VAR_15, ((void*)0));
    if (VAR_11) {
        FUNC_7(VAR_4, VAR_0, "popping: %d\n", VAR_11);
        goto pe_cleanup;
    }

    FUNC_0(VAR_15);



pe_cleanup:
    if(VAR_10->session)
        FUNC_0(VAR_10->session);

    VAR_10->session = ((void*)0);
    VAR_10->frame_ct_out = 0;

    FUNC_6(VAR_11 != 0 || (VAR_4->extradata && VAR_4->extradata_size > 0));

    return VAR_11;
}
