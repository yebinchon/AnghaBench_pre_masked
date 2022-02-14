
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ extradata_size; int extradata; } ;
typedef int AVIOContext ;
typedef int AVFormatContext ;
typedef TYPE_1__ AVCodecParameters ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

int FUNC_4(AVFormatContext *VAR_2, AVCodecParameters *VAR_3, AVIOContext *VAR_4, int VAR_5)
{
    int VAR_6 = FUNC_3(VAR_3, VAR_5);
    if (VAR_6 < 0)
        return VAR_6;
    VAR_6 = FUNC_2(VAR_4, VAR_3->extradata, VAR_5);
    if (VAR_6 != VAR_5) {
        FUNC_0(&VAR_3->extradata);
        VAR_3->extradata_size = 0;
        FUNC_1(VAR_2, VAR_1, "Failed to read extradata of size %d\n", VAR_5);
        return VAR_6 < 0 ? VAR_6 : VAR_0;
    }

    return VAR_6;
}
