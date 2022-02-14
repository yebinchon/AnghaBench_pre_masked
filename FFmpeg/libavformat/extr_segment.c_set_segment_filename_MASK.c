
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
typedef int buf ;
struct TYPE_9__ {int url; TYPE_2__* priv_data; } ;
struct TYPE_7__ {int filename; } ;
struct TYPE_8__ {int segment_idx_wrap; int segment_idx; char* entry_prefix; TYPE_1__ cur_entry; scalar_t__ use_strftime; TYPE_3__* avf; } ;
typedef TYPE_2__ SegmentContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int,int ,int) ;
 int FUNC_3 (TYPE_3__*,int ,char*,...) ;
 int FUNC_4 (int *,size_t) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 struct tm* FUNC_7 (int *,struct tm*) ;
 int FUNC_8 (int ,size_t,char*,char*,char*) ;
 int FUNC_9 (char*,int,int ,struct tm*) ;
 size_t FUNC_10 (char*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_3)
{
    SegmentContext *VAR_4 = VAR_3->priv_data;
    AVFormatContext *VAR_5 = VAR_4->avf;
    size_t VAR_6;
    int VAR_7;
    char VAR_8[1024];
    char *VAR_9;

    if (VAR_4->segment_idx_wrap)
        VAR_4->segment_idx %= VAR_4->segment_idx_wrap;
    if (VAR_4->use_strftime) {
        time_t VAR_10;
        struct tm *VAR_11, VAR_12;
        FUNC_11(&VAR_10);
        VAR_11 = FUNC_7(&VAR_10, &VAR_12);
        if (!FUNC_9(VAR_8, sizeof(VAR_8), VAR_3->url, VAR_11)) {
            FUNC_3(VAR_5, VAR_0, "Could not get segment filename with strftime\n");
            return FUNC_0(VAR_1);
        }
    } else if (FUNC_2(VAR_8, sizeof(VAR_8),
                                     VAR_3->url, VAR_4->segment_idx) < 0) {
        FUNC_3(VAR_5, VAR_0, "Invalid segment filename template '%s'\n", VAR_3->url);
        return FUNC_0(VAR_1);
    }
    VAR_9 = FUNC_5(VAR_8);
    if (!VAR_9)
        return FUNC_0(VAR_2);
    FUNC_6(VAR_5, VAR_9);


    VAR_6 = FUNC_10(FUNC_1(VAR_5->url)) + 1;
    if (VAR_4->entry_prefix)
        VAR_6 += FUNC_10(VAR_4->entry_prefix);

    if ((VAR_7 = FUNC_4(&VAR_4->cur_entry.filename, VAR_6)) < 0)
        return VAR_7;
    FUNC_8(VAR_4->cur_entry.filename, VAR_6, "%s%s",
             VAR_4->entry_prefix ? VAR_4->entry_prefix : "",
             FUNC_1(VAR_5->url));

    return 0;
}
