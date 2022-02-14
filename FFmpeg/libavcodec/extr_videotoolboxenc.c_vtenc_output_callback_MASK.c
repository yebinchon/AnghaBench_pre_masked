
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VTEncodeInfoFlags ;
struct TYPE_7__ {scalar_t__ async_error; } ;
typedef TYPE_1__ VTEncContext ;
struct TYPE_8__ {int flags; int extradata; TYPE_1__* priv_data; } ;
typedef scalar_t__ OSStatus ;
typedef int ExtraSEI ;
typedef scalar_t__ CMSampleBufferRef ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_5(
    void *VAR_3,
    void *VAR_4,
    OSStatus VAR_5,
    VTEncodeInfoFlags VAR_6,
    CMSampleBufferRef VAR_7)
{
    AVCodecContext *VAR_8 = VAR_3;
    VTEncContext *VAR_9 = VAR_8->priv_data;
    ExtraSEI *VAR_10 = VAR_4;

    if (VAR_9->async_error) {
        if(VAR_7) FUNC_0(VAR_7);
        return;
    }

    if (VAR_5) {
        FUNC_1(VAR_8, VAR_2, "Error encoding frame: %d\n", (int)VAR_5);
        FUNC_2(VAR_9, VAR_0);
        return;
    }

    if (!VAR_7) {
        return;
    }

    if (!VAR_8->extradata && (VAR_8->flags & VAR_1)) {
        int VAR_11 = FUNC_3(VAR_8, VAR_7);
        if (VAR_11) {
            FUNC_2(VAR_9, VAR_11);
            return;
        }
    }

    FUNC_4(VAR_9, VAR_7, VAR_10);
}
