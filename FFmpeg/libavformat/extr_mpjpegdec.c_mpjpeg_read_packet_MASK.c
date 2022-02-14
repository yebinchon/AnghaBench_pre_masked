
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_12__ {char* data; int size; int pos; } ;
struct TYPE_11__ {int searchstr_len; int * searchstr; int * boundary; scalar_t__ strict_mime_boundary; } ;
typedef TYPE_1__ MPJPEGDemuxContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_2__*,int const) ;
 void* FUNC_2 (char*,int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int ,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int const) ;
 int FUNC_11 (char*,int *,int) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (int ,int*,int *,TYPE_3__*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    int VAR_5;
    int VAR_6;

    MPJPEGDemuxContext *VAR_7 = VAR_3->priv_data;
    if (VAR_7->boundary == ((void*)0)) {
        uint8_t* VAR_8 = ((void*)0);
        if (VAR_7->strict_mime_boundary) {
            VAR_8 = FUNC_12(VAR_3->pb);
        }
        if (VAR_8 != ((void*)0)) {
            VAR_7->boundary = FUNC_2("--%s", VAR_8);
            VAR_7->searchstr = FUNC_2("\r\n--%s\r\n", VAR_8);
            FUNC_3(&VAR_8);
        } else {
            VAR_7->boundary = FUNC_7("--");
            VAR_7->searchstr = FUNC_7("\r\n--");
        }
        if (!VAR_7->boundary || !VAR_7->searchstr) {
            FUNC_3(&VAR_7->boundary);
            FUNC_3(&VAR_7->searchstr);
            return FUNC_0(VAR_1);
        }
        VAR_7->searchstr_len = FUNC_14(VAR_7->searchstr);
    }

    VAR_6 = FUNC_13(VAR_3->pb, &VAR_5, VAR_7->boundary, VAR_3);


    if (VAR_6 < 0)
        return VAR_6;

    if (VAR_5 > 0) {

        VAR_6 = FUNC_4(VAR_3->pb, VAR_4, VAR_5);
    } else {

        int VAR_9 = 0, VAR_10;

        const int VAR_11 = 2048;
        FUNC_5(VAR_4);
        VAR_4->data = ((void*)0);
        VAR_4->size = 0;
        VAR_4->pos = FUNC_9(VAR_3->pb);

        while ((VAR_6 = FUNC_10(VAR_3->pb, VAR_11 - VAR_9)) >= 0 &&
               (VAR_6 = FUNC_1(VAR_3->pb, VAR_4, VAR_11 - VAR_9)) >= 0) {

            char *VAR_12;

            VAR_10 = VAR_6 + VAR_9;
            VAR_12 = VAR_4->data + VAR_4->size - VAR_10;
            do {
                if (!FUNC_11(VAR_12, VAR_7->searchstr, VAR_7->searchstr_len)) {

                    FUNC_8(VAR_3->pb, -VAR_10, VAR_2);
                    VAR_4->size -= VAR_10;
                    return VAR_4->size;
                }
                VAR_10--;
                VAR_12++;
            } while (VAR_10 >= VAR_7->searchstr_len);
            VAR_9 = VAR_10;
        }


        if (VAR_6 == VAR_0) {
            VAR_6 = VAR_4->size > 0 ? VAR_4->size : VAR_0;
        } else {
            FUNC_6(VAR_4);
        }
    }

    return VAR_6;
}
