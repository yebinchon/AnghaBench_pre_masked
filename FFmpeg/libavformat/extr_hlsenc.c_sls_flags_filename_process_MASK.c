
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct AVFormatContext {int dummy; } ;
typedef scalar_t__ int64_t ;
struct TYPE_7__ {TYPE_5__* avf; int current_segment_final_filename_fmt; } ;
typedef TYPE_1__ VariantStream ;
struct TYPE_9__ {int url; } ;
struct TYPE_8__ {int flags; } ;
typedef int HLSSegment ;
typedef TYPE_2__ HLSContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char**) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,char*) ;
 int FUNC_5 (char**,int ,char,scalar_t__) ;
 scalar_t__ FUNC_6 (double) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct AVFormatContext *VAR_6, HLSContext *VAR_7,
                                      VariantStream *VAR_8, HLSSegment *VAR_9,
                                      double VAR_10, int64_t VAR_11, int64_t VAR_12)
{
    if ((VAR_7->flags & (VAR_5 | VAR_4)) &&
        FUNC_7(VAR_8->current_segment_final_filename_fmt)) {
        char * VAR_13 = FUNC_3(VAR_8->current_segment_final_filename_fmt);
        if (!VAR_13) {
            return FUNC_0(VAR_2);
        }
        FUNC_4(VAR_8->avf, VAR_13);
        if (VAR_7->flags & VAR_5) {
            char *VAR_14 = ((void*)0);
            if (FUNC_5(&VAR_14, VAR_8->avf->url, 's', VAR_11 + VAR_12) < 1) {
                FUNC_2(VAR_7, VAR_0,
                       "Invalid second level segment filename template '%s', "
                       "you can try to remove second_level_segment_size flag\n",
                       VAR_8->avf->url);
                FUNC_1(&VAR_14);
                return FUNC_0(VAR_1);
            }
            FUNC_4(VAR_8->avf, VAR_14);
        }
        if (VAR_7->flags & VAR_4) {
            char *VAR_15 = ((void*)0);
            if (FUNC_5(&VAR_15, VAR_8->avf->url,
                                             't', (int64_t)FUNC_6(VAR_10 * VAR_3)) < 1) {
                FUNC_2(VAR_7, VAR_0,
                       "Invalid second level segment filename template '%s', "
                       "you can try to remove second_level_segment_time flag\n",
                       VAR_8->avf->url);
                FUNC_1(&VAR_15);
                return FUNC_0(VAR_1);
            }
            FUNC_4(VAR_8->avf, VAR_15);
        }
    }
    return 0;
}
