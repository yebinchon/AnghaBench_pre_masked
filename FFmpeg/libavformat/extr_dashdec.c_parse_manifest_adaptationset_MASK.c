
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
struct TYPE_29__ {TYPE_2__* priv_data; } ;
struct TYPE_28__ {void* adaptionset_bitstreamswitching_val; void* adaptionset_segmentalignment_val; void* adaptionset_maxframerate_val; void* adaptionset_minframerate_val; void* adaptionset_maxheight_val; void* adaptionset_minheight_val; void* adaptionset_maxwidth_val; void* adaptionset_minwidth_val; void* adaptionset_maxbw_val; void* adaptionset_minbw_val; void* adaptionset_lang_val; void* adaptionset_par_val; void* adaptionset_contenttype_val; } ;
struct TYPE_27__ {int name; } ;
typedef TYPE_2__ DASHContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (TYPE_3__*,char const*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_0, const char *VAR_1,
                                        xmlNodePtr VAR_2,
                                        xmlNodePtr VAR_3,
                                        xmlNodePtr VAR_4,
                                        xmlNodePtr VAR_5,
                                        xmlNodePtr VAR_6)
{
    int VAR_7 = 0;
    DASHContext *VAR_8 = VAR_0->priv_data;
    xmlNodePtr VAR_9 = ((void*)0);
    xmlNodePtr VAR_10 = ((void*)0);
    xmlNodePtr VAR_11 = ((void*)0);
    xmlNodePtr VAR_12 = ((void*)0);
    xmlNodePtr VAR_13 = ((void*)0);
    xmlNodePtr VAR_14 = ((void*)0);
    VAR_8->adaptionset_contenttype_val = FUNC_3(VAR_2, "contentType");
    VAR_8->adaptionset_par_val = FUNC_3(VAR_2, "par");
    VAR_8->adaptionset_lang_val = FUNC_3(VAR_2, "lang");
    VAR_8->adaptionset_minbw_val = FUNC_3(VAR_2, "minBandwidth");
    VAR_8->adaptionset_maxbw_val = FUNC_3(VAR_2, "maxBandwidth");
    VAR_8->adaptionset_minwidth_val = FUNC_3(VAR_2, "minWidth");
    VAR_8->adaptionset_maxwidth_val = FUNC_3(VAR_2, "maxWidth");
    VAR_8->adaptionset_minheight_val = FUNC_3(VAR_2, "minHeight");
    VAR_8->adaptionset_maxheight_val = FUNC_3(VAR_2, "maxHeight");
    VAR_8->adaptionset_minframerate_val = FUNC_3(VAR_2, "minFrameRate");
    VAR_8->adaptionset_maxframerate_val = FUNC_3(VAR_2, "maxFrameRate");
    VAR_8->adaptionset_segmentalignment_val = FUNC_3(VAR_2, "segmentAlignment");
    VAR_8->adaptionset_bitstreamswitching_val = FUNC_3(VAR_2, "bitstreamSwitching");

    VAR_14 = FUNC_2(VAR_2);
    while (VAR_14) {
        if (!FUNC_0(VAR_14->name, (const char *)"SegmentTemplate")) {
            VAR_9 = VAR_14;
        } else if (!FUNC_0(VAR_14->name, (const char *)"ContentComponent")) {
            VAR_10 = VAR_14;
        } else if (!FUNC_0(VAR_14->name, (const char *)"BaseURL")) {
            VAR_11 = VAR_14;
        } else if (!FUNC_0(VAR_14->name, (const char *)"SegmentList")) {
            VAR_12 = VAR_14;
        } else if (!FUNC_0(VAR_14->name, (const char *)"SupplementalProperty")) {
            VAR_13 = VAR_14;
        } else if (!FUNC_0(VAR_14->name, (const char *)"Representation")) {
            VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_14,
                                                VAR_2,
                                                VAR_3,
                                                VAR_4,
                                                VAR_5,
                                                VAR_6,
                                                VAR_9,
                                                VAR_10,
                                                VAR_11,
                                                VAR_12,
                                                VAR_13);
            if (VAR_7 < 0) {
                return VAR_7;
            }
        }
        VAR_14 = FUNC_4(VAR_14);
    }
    return 0;
}
