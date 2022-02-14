
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int UInt32 ;
struct TYPE_8__ {int * extradata; int converter; } ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
typedef scalar_t__ OSStatus ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ ATDecodeContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,char*,int) ;
 int * FUNC_4 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_3)
{
    ATDecodeContext *VAR_4 = VAR_3->priv_data;
    if (FUNC_5(VAR_3)) {
        OSStatus VAR_5;
        UInt32 VAR_6;
        uint8_t *VAR_7 = FUNC_4(VAR_3, &VAR_6);
        if (!VAR_7)
            return FUNC_0(VAR_1);

        VAR_5 = FUNC_1(VAR_4->converter,
                                           VAR_2,
                                           VAR_6, VAR_7);
        if (VAR_5 != 0)
            FUNC_3(VAR_3, VAR_0, "AudioToolbox cookie error: %i\n", (int)VAR_5);

        if (VAR_7 != VAR_4->extradata)
            FUNC_2(VAR_7);
    }
    return 0;
}
