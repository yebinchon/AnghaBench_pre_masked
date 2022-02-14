
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int filter_ctx_label ;
typedef int dst_filter_ctx_label ;
typedef int buf ;
struct TYPE_14__ {char* name; int nb_outputs; TYPE_1__* filter; TYPE_4__** outputs; } ;
struct TYPE_13__ {int nb_filters; TYPE_6__** filters; } ;
struct TYPE_10__ {int num; int den; } ;
struct TYPE_12__ {scalar_t__ type; int w; int h; int sample_rate; TYPE_2__ time_base; int format; int channel_layout; int dstpad; int srcpad; TYPE_6__* dst; } ;
struct TYPE_11__ {char* name; } ;
struct TYPE_9__ {char* name; } ;
typedef int FILE ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterGraph ;
typedef TYPE_6__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int,int ) ;
 char* FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (char*,int,char*,char*,char*) ;

__attribute__((used)) static void FUNC_6(FILE *VAR_2, AVFilterGraph *VAR_3)
{
    int VAR_4, VAR_5;

    FUNC_4(VAR_2, "digraph G {\n");
    FUNC_4(VAR_2, "node [shape=box]\n");
    FUNC_4(VAR_2, "rankdir=LR\n");

    for (VAR_4 = 0; VAR_4 < VAR_3->nb_filters; VAR_4++) {
        char VAR_6[128];
        const AVFilterContext *VAR_7 = VAR_3->filters[VAR_4];

        FUNC_5(VAR_6, sizeof(VAR_6), "%s\\n(%s)",
                 VAR_7->name,
                 VAR_7->filter->name);

        for (VAR_5 = 0; VAR_5 < VAR_7->nb_outputs; VAR_5++) {
            AVFilterLink *VAR_8 = VAR_7->outputs[VAR_5];
            if (VAR_8) {
                char VAR_9[128];
                const AVFilterContext *VAR_10 = VAR_8->dst;

                FUNC_5(VAR_9, sizeof(VAR_9),
                         "%s\\n(%s)",
                         VAR_10->name,
                         VAR_10->filter->name);

                FUNC_4(VAR_2, "\"%s\" -> \"%s\" [ label= \"inpad:%s -> outpad:%s\\n",
                        VAR_6, VAR_9,
                        FUNC_3(VAR_8->srcpad, 0),
                        FUNC_3(VAR_8->dstpad, 0));

                if (VAR_8->type == VAR_1) {
                    const AVPixFmtDescriptor *VAR_11 = FUNC_2(VAR_8->format);
                    FUNC_4(VAR_2,
                            "fmt:%s w:%d h:%d tb:%d/%d",
                            VAR_11->name,
                            VAR_8->w, VAR_8->h,
                            VAR_8->time_base.num, VAR_8->time_base.den);
                } else if (VAR_8->type == VAR_0) {
                    char VAR_12[255];
                    FUNC_0(VAR_12, sizeof(VAR_12), -1,
                                                 VAR_8->channel_layout);
                    FUNC_4(VAR_2,
                            "fmt:%s sr:%d cl:%s tb:%d/%d",
                            FUNC_1(VAR_8->format),
                            VAR_8->sample_rate, VAR_12,
                            VAR_8->time_base.num, VAR_8->time_base.den);
                }
                FUNC_4(VAR_2, "\" ];\n");
            }
        }
    }
    FUNC_4(VAR_2, "}\n");
}
