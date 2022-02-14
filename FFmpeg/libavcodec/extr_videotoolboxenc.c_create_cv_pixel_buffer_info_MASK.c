
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; int color_range; int pix_fmt; } ;
typedef int * CFNumberRef ;
typedef int * CFMutableDictionaryRef ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int,int *,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int **) ;

__attribute__((used)) static int FUNC_8(AVCodecContext* VAR_8,
                                       CFMutableDictionaryRef* VAR_9)
{
    CFNumberRef VAR_10 = ((void*)0);
    CFNumberRef VAR_11 = ((void*)0);
    CFNumberRef VAR_12 = ((void*)0);
    CFMutableDictionaryRef VAR_13 = ((void*)0);
    int VAR_14;
    int VAR_15 = FUNC_6(VAR_8,
                                     VAR_8->pix_fmt,
                                     VAR_8->color_range,
                                     &VAR_14,
                                     ((void*)0));
    if (VAR_15) return VAR_15;

    VAR_13 = FUNC_1(
                            VAR_1,
                            20,
                            &VAR_2,
                            &VAR_4);

    if (!VAR_13) goto pbinfo_nomem;

    VAR_10 = FUNC_3(VAR_1,
                                         VAR_3,
                                         &VAR_14);
    if (!VAR_10) goto pbinfo_nomem;

    FUNC_2(VAR_13,
                         VAR_6,
                         VAR_10);
    FUNC_7(&VAR_10);

    VAR_11 = FUNC_3(VAR_1,
                               VAR_3,
                               &VAR_8->width);
    if (!VAR_11) return FUNC_0(VAR_0);

    FUNC_2(VAR_13,
                         VAR_7,
                         VAR_11);
    FUNC_7(&VAR_11);

    VAR_12 = FUNC_3(VAR_1,
                                VAR_3,
                                &VAR_8->height);
    if (!VAR_12) goto pbinfo_nomem;

    FUNC_2(VAR_13,
                         VAR_5,
                         VAR_12);
    FUNC_7(&VAR_12);

    FUNC_5(VAR_8, VAR_13);

    *VAR_9 = VAR_13;
    return 0;

pbinfo_nomem:
    FUNC_7(&VAR_10);
    FUNC_7(&VAR_11);
    FUNC_7(&VAR_12);
    if (VAR_13) FUNC_4(VAR_13);

    return FUNC_0(VAR_0);
}
