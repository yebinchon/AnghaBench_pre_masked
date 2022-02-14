
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cbc; } ;
typedef TYPE_1__ VAAPIEncodeMPEG2Context ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
typedef int CodedBitstreamFragment ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,char*,int) ;
 int FUNC_1 (int ,int *,int,int,void*,int *) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_1,
                                         CodedBitstreamFragment *VAR_2,
                                         int VAR_3, void *VAR_4)
{
    VAAPIEncodeMPEG2Context *VAR_5 = VAR_1->priv_data;
    int VAR_6;

    VAR_6 = FUNC_1(VAR_5->cbc, VAR_2, -1, VAR_3, VAR_4, ((void*)0));
    if (VAR_6 < 0) {
        FUNC_0(VAR_1, VAR_0, "Failed to add header: "
               "type = %d.\n", VAR_3);
        return VAR_6;
    }

    return 0;
}
