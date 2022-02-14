
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct HLSContext {int nb_varstreams; TYPE_1__* var_streams; } ;
struct TYPE_2__ {int varname; int baseurl; int ccgroup; int language; int agroup; int streams; int m3u8_name; int old_segments; int segments; int vtt_m3u8_name; int vtt_basename; int fmp4_init_filename; int base_output_dirname; int basename; int * vtt_avf; } ;
typedef TYPE_1__ VariantStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct HLSContext *VAR_0)
{
    int VAR_1 = 0;
    AVFormatContext *VAR_2 = ((void*)0);
    VariantStream *VAR_3 = ((void*)0);

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_varstreams; VAR_1++) {
        VAR_3 = &VAR_0->var_streams[VAR_1];
        VAR_2 = VAR_3->vtt_avf;

        FUNC_0(&VAR_3->basename);
        FUNC_0(&VAR_3->base_output_dirname);
        FUNC_0(&VAR_3->fmp4_init_filename);
        if (VAR_2) {
            FUNC_0(&VAR_3->vtt_basename);
            FUNC_0(&VAR_3->vtt_m3u8_name);
        }

        FUNC_1(VAR_3->segments);
        FUNC_1(VAR_3->old_segments);
        FUNC_0(&VAR_3->m3u8_name);
        FUNC_0(&VAR_3->streams);
        FUNC_0(&VAR_3->agroup);
        FUNC_0(&VAR_3->language);
        FUNC_0(&VAR_3->ccgroup);
        FUNC_0(&VAR_3->baseurl);
        FUNC_0(&VAR_3->varname);
    }
}
