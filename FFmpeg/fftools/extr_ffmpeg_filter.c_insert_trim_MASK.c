
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_9__ {int output_pads; int * graph; } ;
typedef int AVFilterGraph ;
typedef TYPE_1__ AVFilterContext ;
typedef int AVFilter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ,char*,char const*) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ) ;
 int * FUNC_3 (char const*) ;
 TYPE_1__* FUNC_4 (int *,int const*,char const*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int,TYPE_1__*,int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(int64_t VAR_7, int64_t VAR_8,
                       AVFilterContext **VAR_9, int *VAR_10,
                       const char *VAR_11)
{
    AVFilterGraph *VAR_12 = (*VAR_9)->graph;
    AVFilterContext *VAR_13;
    const AVFilter *VAR_14;
    enum AVMediaType VAR_15 = FUNC_7((*VAR_9)->output_pads, *VAR_10);
    const char *VAR_16 = (VAR_15 == VAR_1) ? "trim" : "atrim";
    int VAR_17 = 0;

    if (VAR_8 == VAR_6 && VAR_7 == VAR_3)
        return 0;

    VAR_14 = FUNC_3(VAR_16);
    if (!VAR_14) {
        FUNC_1(((void*)0), VAR_2, "%s filter not present, cannot limit "
               "recording time.\n", VAR_16);
        return VAR_0;
    }

    VAR_13 = FUNC_4(VAR_12, VAR_14, VAR_11);
    if (!VAR_13)
        return FUNC_0(VAR_5);

    if (VAR_8 != VAR_6) {
        VAR_17 = FUNC_2(VAR_13, "durationi", VAR_8,
                                VAR_4);
    }
    if (VAR_17 >= 0 && VAR_7 != VAR_3) {
        VAR_17 = FUNC_2(VAR_13, "starti", VAR_7,
                                VAR_4);
    }
    if (VAR_17 < 0) {
        FUNC_1(VAR_13, VAR_2, "Error configuring the %s filter", VAR_16);
        return VAR_17;
    }

    VAR_17 = FUNC_5(VAR_13, ((void*)0));
    if (VAR_17 < 0)
        return VAR_17;

    VAR_17 = FUNC_6(*VAR_9, *VAR_10, VAR_13, 0);
    if (VAR_17 < 0)
        return VAR_17;

    *VAR_9 = VAR_13;
    *VAR_10 = 0;
    return 0;
}
