
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {void* frames; void* header_filesize; } ;
typedef TYPE_1__ MP3DecContext ;
typedef int AVStream ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ FUNC_0 (char,char,char,char) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_1, AVStream *VAR_2, int64_t VAR_3)
{
    uint32_t VAR_4;
    MP3DecContext *VAR_5 = VAR_1->priv_data;


    FUNC_3(VAR_1->pb, VAR_3 + 4 + 32, VAR_0);
    VAR_4 = FUNC_2(VAR_1->pb);
    if (VAR_4 == FUNC_0('V', 'B', 'R', 'I')) {

        if (FUNC_1(VAR_1->pb) == 1) {

            FUNC_4(VAR_1->pb, 4);
            VAR_5->header_filesize = FUNC_2(VAR_1->pb);
            VAR_5->frames = FUNC_2(VAR_1->pb);
        }
    }
}
