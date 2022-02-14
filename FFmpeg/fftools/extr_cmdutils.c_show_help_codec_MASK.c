
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
typedef TYPE_1__ AVCodecDescriptor ;
typedef int AVCodec ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,...) ;
 TYPE_1__* FUNC_1 (char const*) ;
 int * FUNC_2 (char const*) ;
 int * FUNC_3 (char const*) ;
 int * FUNC_4 (int ,int const*,int) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1, int VAR_2)
{
    const AVCodecDescriptor *VAR_3;
    const AVCodec *VAR_4;

    if (!VAR_1) {
        FUNC_0(((void*)0), VAR_0, "No codec name specified.\n");
        return;
    }

    VAR_4 = VAR_2 ? FUNC_3(VAR_1) :
                      FUNC_2(VAR_1);

    if (VAR_4)
        FUNC_5(VAR_4);
    else if ((VAR_3 = FUNC_1(VAR_1))) {
        int VAR_5 = 0;

        while ((VAR_4 = FUNC_4(VAR_3->id, VAR_4, VAR_2))) {
            VAR_5 = 1;
            FUNC_5(VAR_4);
        }

        if (!VAR_5) {
            FUNC_0(((void*)0), VAR_0, "Codec '%s' is known to FFmpeg, "
                   "but no %s for it are available. FFmpeg might need to be "
                   "recompiled with additional external libraries.\n",
                   VAR_1, VAR_2 ? "encoders" : "decoders");
        }
    } else {
        FUNC_0(((void*)0), VAR_0, "Codec '%s' is not recognized by FFmpeg.\n",
               VAR_1);
    }
}
