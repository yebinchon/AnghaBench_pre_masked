
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SwsContext {int srcRange; int dstRange; int brightness; int contrast; int saturation; int const* srcColorspaceTable; int const* dstColorspaceTable; int srcBpc; size_t cascaded_mainindex; int srcW; int srcH; int dstW; int dstH; int dstFormat; struct SwsContext** cascaded_context; int param; int flags; int alphablend; int srcFormat; int cascaded_tmpStride; int cascaded_tmp; void* srcFormatBpp; void* dstFormatBpp; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int AVPixFmtDescriptor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int const*) ;
 int FUNC_1 (int ,int ,int,int,int,int) ;
 int FUNC_2 (struct SwsContext*,int ,char*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (struct SwsContext*) ;
 int FUNC_5 (struct SwsContext*,int const*,int,int,int,int) ;
 int FUNC_6 (struct SwsContext*,int const*,int,int,int) ;
 int FUNC_7 (struct SwsContext*,int const*,int) ;
 int FUNC_8 (struct SwsContext*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int const*,int const*,int) ;
 int FUNC_15 (int const*,int const*,int) ;
 struct SwsContext* FUNC_16 (int,int,int ,int,int,int,int ,int ) ;
 struct SwsContext* FUNC_17 (int,int,int,int,int,int ,int ,int *,int *,int ) ;
 int FUNC_18 (struct SwsContext*,int *,int *) ;

int FUNC_19(struct SwsContext *VAR_6, const int VAR_7[4],
                             int VAR_8, const int VAR_9[4], int VAR_10,
                             int VAR_11, int VAR_12, int VAR_13)
{
    const AVPixFmtDescriptor *VAR_14;
    const AVPixFmtDescriptor *VAR_15;
    int VAR_16 = 0;

    FUNC_8(VAR_6);
    VAR_14 = FUNC_3(VAR_6->dstFormat);
    VAR_15 = FUNC_3(VAR_6->srcFormat);

    if(!FUNC_13(VAR_6->dstFormat) && !FUNC_11(VAR_6->dstFormat))
        VAR_10 = 0;
    if(!FUNC_13(VAR_6->srcFormat) && !FUNC_11(VAR_6->srcFormat))
        VAR_8 = 0;

    if (VAR_6->srcRange != VAR_8 ||
        VAR_6->dstRange != VAR_10 ||
        VAR_6->brightness != VAR_11 ||
        VAR_6->contrast != VAR_12 ||
        VAR_6->saturation != VAR_13 ||
        FUNC_14(VAR_6->srcColorspaceTable, VAR_7, sizeof(int) * 4) ||
        FUNC_14(VAR_6->dstColorspaceTable, VAR_9, sizeof(int) * 4)
    )
        VAR_16 = 1;

    FUNC_15(VAR_6->srcColorspaceTable, VAR_7, sizeof(int) * 4);
    FUNC_15(VAR_6->dstColorspaceTable, VAR_9, sizeof(int) * 4);



    VAR_6->brightness = VAR_11;
    VAR_6->contrast = VAR_12;
    VAR_6->saturation = VAR_13;
    VAR_6->srcRange = VAR_8;
    VAR_6->dstRange = VAR_10;



    if (VAR_16 && (VAR_6->srcBpc == 8 || !FUNC_13(VAR_6->srcFormat)))
        FUNC_4(VAR_6);

    VAR_6->dstFormatBpp = FUNC_0(VAR_14);
    VAR_6->srcFormatBpp = FUNC_0(VAR_15);

    if (VAR_6->cascaded_context[VAR_6->cascaded_mainindex])
        return FUNC_19(VAR_6->cascaded_context[VAR_6->cascaded_mainindex],VAR_7, VAR_8,VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);

    if (!VAR_16)
        return 0;

    if ((FUNC_13(VAR_6->dstFormat) || FUNC_11(VAR_6->dstFormat)) && (FUNC_13(VAR_6->srcFormat) || FUNC_11(VAR_6->srcFormat))) {
        if (!VAR_6->cascaded_context[0] &&
            FUNC_14(VAR_6->dstColorspaceTable, VAR_6->srcColorspaceTable, sizeof(int) * 4) &&
            VAR_6->srcW && VAR_6->srcH && VAR_6->dstW && VAR_6->dstH) {
            enum AVPixelFormat VAR_17;
            int VAR_18, VAR_19;
            int VAR_20 = VAR_6->srcW;
            int VAR_21 = VAR_6->srcH;
            int VAR_22 = VAR_6->dstW;
            int VAR_23 = VAR_6->dstH;
            int VAR_24;
            FUNC_2(VAR_6, VAR_1, "YUV color matrix differs for YUV->YUV, using intermediate RGB to convert\n");

            if (FUNC_12(VAR_6->dstFormat) || FUNC_9(VAR_6->dstFormat)) {
                if (FUNC_10(VAR_6->srcFormat) && FUNC_10(VAR_6->dstFormat)) {
                    VAR_17 = VAR_5;
                } else {
                    VAR_17 = VAR_3;
                }
            } else {
                if (FUNC_10(VAR_6->srcFormat) && FUNC_10(VAR_6->dstFormat)) {
                    VAR_17 = VAR_4;
                } else {
                    VAR_17 = VAR_2;
                }
            }

            if (VAR_20*VAR_21 > VAR_22*VAR_23) {
                VAR_18 = VAR_22;
                VAR_19 = VAR_23;
            } else {
                VAR_18 = VAR_20;
                VAR_19 = VAR_21;
            }

            VAR_24 = FUNC_1(VAR_6->cascaded_tmp, VAR_6->cascaded_tmpStride,
                                VAR_18, VAR_19, VAR_17, 64);
            if (VAR_24 < 0)
                return VAR_24;

            VAR_6->cascaded_context[0] = FUNC_16(VAR_20, VAR_21, VAR_6->srcFormat,
                                                        VAR_18, VAR_19, VAR_17,
                                                        VAR_6->flags, VAR_6->param);
            if (!VAR_6->cascaded_context[0])
                return -1;

            VAR_6->cascaded_context[0]->alphablend = VAR_6->alphablend;
            VAR_24 = FUNC_18(VAR_6->cascaded_context[0], ((void*)0) , ((void*)0));
            if (VAR_24 < 0)
                return VAR_24;

            FUNC_19(VAR_6->cascaded_context[0], VAR_7,
                                     VAR_8, VAR_9, VAR_10,
                                     VAR_11, VAR_12, VAR_13);

            VAR_6->cascaded_context[1] = FUNC_17(VAR_18, VAR_19, VAR_17,
                                                    VAR_22, VAR_23, VAR_6->dstFormat,
                                                    VAR_6->flags, ((void*)0), ((void*)0), VAR_6->param);
            if (!VAR_6->cascaded_context[1])
                return -1;
            FUNC_19(VAR_6->cascaded_context[1], VAR_7,
                                     VAR_8, VAR_9, VAR_10,
                                     0, 1 << 16, 1 << 16);
            return 0;
        }
        return -1;
    }

    if (!FUNC_13(VAR_6->dstFormat) && !FUNC_11(VAR_6->dstFormat)) {
        FUNC_5(VAR_6, VAR_7, VAR_8, VAR_11,
                                 VAR_12, VAR_13);


        if (VAR_0)
            FUNC_6(VAR_6, VAR_7, VAR_11,
                                       VAR_12, VAR_13);
    }

    FUNC_7(VAR_6, VAR_9, VAR_10);

    return 0;
}
