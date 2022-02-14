
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_14__ {int name; } ;
struct TYPE_13__ {int nb_components; } ;
struct TYPE_12__ {int nb_channel_layouts; scalar_t__* channel_layouts; int all_counts; scalar_t__ all_layouts; } ;
struct TYPE_11__ {int nb_formats; int* formats; } ;
struct TYPE_10__ {scalar_t__ type; int format; int sample_rate; TYPE_6__* out_channel_layouts; TYPE_6__* in_channel_layouts; TYPE_5__* out_samplerates; TYPE_5__* in_samplerates; TYPE_5__* out_formats; TYPE_5__* in_formats; scalar_t__ channel_layout; int channels; TYPE_8__* src; TYPE_1__* dst; } ;
struct TYPE_9__ {int name; } ;
typedef TYPE_2__ AVFilterLink ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int,int,int,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_8__*,int ,char*,...) ;
 TYPE_7__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_6__**) ;
 int FUNC_9 (TYPE_5__**) ;
 int FUNC_10 (int,int,int) ;

__attribute__((used)) static int FUNC_11(AVFilterLink *VAR_7, AVFilterLink *VAR_8)
{
    if (!VAR_7 || !VAR_7->in_formats)
        return 0;

    if (VAR_7->type == VAR_1) {
        if(VAR_8 && VAR_8->type == VAR_1){

            int VAR_9= FUNC_7(VAR_8->format)->nb_components % 2 == 0;
            enum AVPixelFormat VAR_10= VAR_4;
            int VAR_11;
            for (VAR_11=0; VAR_11<VAR_7->in_formats->nb_formats; VAR_11++) {
                enum AVPixelFormat VAR_12 = VAR_7->in_formats->formats[VAR_11];
                VAR_10= FUNC_2(VAR_10, VAR_12, VAR_8->format, VAR_9, ((void*)0));
            }
            FUNC_6(VAR_7->src,VAR_2, "picking %s out of %d ref:%s alpha:%d\n",
                   FUNC_4(VAR_10), VAR_7->in_formats->nb_formats,
                   FUNC_4(VAR_8->format), VAR_9);
            VAR_7->in_formats->formats[0] = VAR_10;
        }
    } else if (VAR_7->type == VAR_0) {
        if(VAR_8 && VAR_8->type == VAR_0){
            enum AVSampleFormat VAR_13= VAR_5;
            int VAR_14;
            for (VAR_14=0; VAR_14<VAR_7->in_formats->nb_formats; VAR_14++) {
                enum AVSampleFormat VAR_15 = VAR_7->in_formats->formats[VAR_14];
                VAR_13 = FUNC_10(VAR_13, VAR_15, VAR_8->format);
            }
            FUNC_6(VAR_7->src,VAR_2, "picking %s out of %d ref:%s\n",
                   FUNC_5(VAR_13), VAR_7->in_formats->nb_formats,
                   FUNC_5(VAR_8->format));
            VAR_7->in_formats->formats[0] = VAR_13;
        }
    }

    VAR_7->in_formats->nb_formats = 1;
    VAR_7->format = VAR_7->in_formats->formats[0];

    if (VAR_7->type == VAR_0) {
        if (!VAR_7->in_samplerates->nb_formats) {
            FUNC_6(VAR_7->src, VAR_3, "Cannot select sample rate for"
                   " the link between filters %s and %s.\n", VAR_7->src->name,
                   VAR_7->dst->name);
            return FUNC_0(VAR_6);
        }
        VAR_7->in_samplerates->nb_formats = 1;
        VAR_7->sample_rate = VAR_7->in_samplerates->formats[0];

        if (VAR_7->in_channel_layouts->all_layouts) {
            FUNC_6(VAR_7->src, VAR_3, "Cannot select channel layout for"
                   " the link between filters %s and %s.\n", VAR_7->src->name,
                   VAR_7->dst->name);
            if (!VAR_7->in_channel_layouts->all_counts)
                FUNC_6(VAR_7->src, VAR_3, "Unknown channel layouts not "
                       "supported, try specifying a channel layout using "
                       "'aformat=channel_layouts=something'.\n");
            return FUNC_0(VAR_6);
        }
        VAR_7->in_channel_layouts->nb_channel_layouts = 1;
        VAR_7->channel_layout = VAR_7->in_channel_layouts->channel_layouts[0];
        if ((VAR_7->channels = FUNC_1(VAR_7->channel_layout)))
            VAR_7->channel_layout = 0;
        else
            VAR_7->channels = FUNC_3(VAR_7->channel_layout);
    }

    FUNC_9(&VAR_7->in_formats);
    FUNC_9(&VAR_7->out_formats);
    FUNC_9(&VAR_7->in_samplerates);
    FUNC_9(&VAR_7->out_samplerates);
    FUNC_8(&VAR_7->in_channel_layouts);
    FUNC_8(&VAR_7->out_channel_layouts);

    return 0;
}
