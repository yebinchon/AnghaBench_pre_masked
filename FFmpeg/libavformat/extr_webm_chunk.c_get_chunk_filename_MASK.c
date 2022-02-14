
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ chunk_index; int header_filename; TYPE_2__* avf; } ;
typedef TYPE_1__ WebMChunkContext ;
struct TYPE_6__ {int url; TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,int,int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,char*,...) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3, int VAR_4, char VAR_5[VAR_2])
{
    WebMChunkContext *VAR_6 = VAR_3->priv_data;
    AVFormatContext *VAR_7 = VAR_6->avf;
    if (!VAR_5) {
        return FUNC_0(VAR_1);
    }
    if (VAR_4) {
        int VAR_8;
        if (!VAR_6->header_filename) {
            FUNC_2(VAR_7, VAR_0, "No header filename provided\n");
            return FUNC_0(VAR_1);
        }
        VAR_8 = FUNC_3(VAR_5, VAR_6->header_filename, VAR_2);
        if (VAR_8 >= VAR_2) {
            FUNC_2(VAR_7, VAR_0, "Header filename too long\n");
            return FUNC_0(VAR_1);
        }
    } else {
        if (FUNC_1(VAR_5, VAR_2,
                                  VAR_3->url, VAR_6->chunk_index - 1) < 0) {
            FUNC_2(VAR_7, VAR_0, "Invalid chunk filename template '%s'\n", VAR_3->url);
            return FUNC_0(VAR_1);
        }
    }
    return 0;
}
