
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ass_line ;
struct TYPE_11__ {int id; } ;
struct TYPE_10__ {TYPE_4__* priv_data; } ;
struct TYPE_9__ {int num_rects; TYPE_1__** rects; } ;
struct TYPE_8__ {char* ass; scalar_t__ type; } ;
typedef TYPE_2__ AVSubtitle ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ ASSEncodeContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (unsigned char*,char const*,int) ;
 int FUNC_4 (char*,int,char*,int,long,char*) ;
 size_t FUNC_5 (char*,char*) ;
 int FUNC_6 (char const*,char*,int) ;
 long FUNC_7 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_4,
                            unsigned char *VAR_5, int VAR_6,
                            const AVSubtitle *VAR_7)
{
    ASSEncodeContext *VAR_8 = VAR_4->priv_data;
    int VAR_9, VAR_10, VAR_11 = 0;

    for (VAR_9=0; VAR_9<VAR_7->num_rects; VAR_9++) {
        char VAR_12[2048];
        const char *VAR_13 = VAR_7->rects[VAR_9]->ass;
        long int VAR_14;
        char *VAR_15;

        if (VAR_7->rects[VAR_9]->type != VAR_3) {
            FUNC_2(VAR_4, VAR_1, "Only SUBTITLE_ASS type supported.\n");
            return FUNC_0(VAR_2);
        }
        VAR_10 = FUNC_3(VAR_5+VAR_11, VAR_13, VAR_6-VAR_11);

        if (VAR_10 > VAR_6-VAR_11-1) {
            FUNC_2(VAR_4, VAR_1, "Buffer too small for ASS event.\n");
            return FUNC_0(VAR_2);
        }

        VAR_11 += VAR_10;
    }

    return VAR_11;
}
