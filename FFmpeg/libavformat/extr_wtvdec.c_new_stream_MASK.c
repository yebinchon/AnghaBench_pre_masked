
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WtvStream ;
struct TYPE_8__ {int id; int need_parsing; TYPE_1__* codecpar; int * priv_data; } ;
struct TYPE_7__ {int codec_type; scalar_t__ extradata_size; scalar_t__ extradata; } ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*) ;
 int * FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static AVStream * FUNC_5(AVFormatContext *VAR_1, AVStream *VAR_2, int VAR_3, int VAR_4)
{
    if (VAR_2) {
        if (VAR_2->codecpar->extradata) {
            FUNC_1(&VAR_2->codecpar->extradata);
            VAR_2->codecpar->extradata_size = 0;
        }
    } else {
        WtvStream *VAR_5 = FUNC_2(sizeof(WtvStream));
        if (!VAR_5)
            return ((void*)0);
        VAR_2 = FUNC_3(VAR_1, ((void*)0));
        if (!VAR_2) {
            FUNC_0(VAR_5);
            return ((void*)0);
        }
        VAR_2->id = VAR_3;
        VAR_2->priv_data = VAR_5;
    }
    VAR_2->codecpar->codec_type = VAR_4;
    VAR_2->need_parsing = VAR_0;
    FUNC_4(VAR_2, 64, 1, 10000000);
    return VAR_2;
}
