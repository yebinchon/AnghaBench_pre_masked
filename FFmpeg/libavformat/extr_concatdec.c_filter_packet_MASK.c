
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bsf; } ;
typedef TYPE_1__ ConcatStream ;
typedef int AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3, ConcatStream *VAR_4, AVPacket *VAR_5)
{
    int VAR_6;

    if (VAR_4->bsf) {
        VAR_6 = FUNC_2(VAR_4->bsf, VAR_5);
        if (VAR_6 < 0) {
            FUNC_3(VAR_3, VAR_1, "h264_mp4toannexb filter "
                   "failed to send input packet\n");
            FUNC_4(VAR_5);
            return VAR_6;
        }

        while (!VAR_6)
            VAR_6 = FUNC_1(VAR_4->bsf, VAR_5);

        if (VAR_6 < 0 && (VAR_6 != FUNC_0(VAR_2) && VAR_6 != VAR_0)) {
            FUNC_3(VAR_3, VAR_1, "h264_mp4toannexb filter "
                   "failed to receive output packet\n");
            return VAR_6;
        }
    }
    return 0;
}
