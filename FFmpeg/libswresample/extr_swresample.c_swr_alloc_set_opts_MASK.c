
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SwrContext {int log_level_offset; int user_out_ch_layout; int user_in_ch_layout; void* log_ctx; } ;
typedef int int64_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct SwrContext*,int ,char*) ;
 scalar_t__ FUNC_2 (struct SwrContext*,char*,int,int ) ;
 struct SwrContext* FUNC_3 () ;
 int FUNC_4 (struct SwrContext**) ;

struct SwrContext *FUNC_5(struct SwrContext *VAR_1,
                                      int64_t VAR_2, enum AVSampleFormat VAR_3, int VAR_4,
                                      int64_t VAR_5, enum AVSampleFormat VAR_6, int VAR_7,
                                      int VAR_8, void *VAR_9){
    if(!VAR_1) VAR_1= FUNC_3();
    if(!VAR_1) return ((void*)0);

    VAR_1->log_level_offset= VAR_8;
    VAR_1->log_ctx= VAR_9;

    if (FUNC_2(VAR_1, "ocl", VAR_2, 0) < 0)
        goto fail;

    if (FUNC_2(VAR_1, "osf", VAR_3, 0) < 0)
        goto fail;

    if (FUNC_2(VAR_1, "osr", VAR_4, 0) < 0)
        goto fail;

    if (FUNC_2(VAR_1, "icl", VAR_5, 0) < 0)
        goto fail;

    if (FUNC_2(VAR_1, "isf", VAR_6, 0) < 0)
        goto fail;

    if (FUNC_2(VAR_1, "isr", VAR_7, 0) < 0)
        goto fail;

    if (FUNC_2(VAR_1, "ich", FUNC_0(VAR_1-> user_in_ch_layout), 0) < 0)
        goto fail;

    if (FUNC_2(VAR_1, "och", FUNC_0(VAR_1->user_out_ch_layout), 0) < 0)
        goto fail;

    FUNC_2(VAR_1, "uch", 0, 0);
    return VAR_1;
fail:
    FUNC_1(VAR_1, VAR_0, "Failed to set option\n");
    FUNC_4(&VAR_1);
    return ((void*)0);
}
