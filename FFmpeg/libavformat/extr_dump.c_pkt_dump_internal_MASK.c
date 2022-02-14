
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stream_index; int flags; int duration; int dts; int pts; int size; int data; } ;
typedef int FILE ;
typedef int AVRational ;
typedef TYPE_1__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int *,int,int ,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, FILE *VAR_3, int VAR_4, const AVPacket *VAR_5,
                              int VAR_6, AVRational VAR_7)
{
    FUNC_0("stream #%d:\n", VAR_5->stream_index);
    FUNC_0("  keyframe=%d\n", (VAR_5->flags & VAR_1) != 0);
    FUNC_0("  duration=%0.3f\n", VAR_5->duration * FUNC_1(VAR_7));

    FUNC_0("  dts=");
    if (VAR_5->dts == VAR_0)
        FUNC_0("N/A");
    else
        FUNC_0("%0.3f", VAR_5->dts * FUNC_1(VAR_7));

    FUNC_0("  pts=");
    if (VAR_5->pts == VAR_0)
        FUNC_0("N/A");
    else
        FUNC_0("%0.3f", VAR_5->pts * FUNC_1(VAR_7));
    FUNC_0("\n");
    FUNC_0("  size=%d\n", VAR_5->size);
    if (VAR_6)
        FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5->data, VAR_5->size);
}
