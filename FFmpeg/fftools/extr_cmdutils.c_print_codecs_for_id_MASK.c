
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_4__ {char* name; } ;
typedef TYPE_1__ AVCodec ;


 TYPE_1__* FUNC_0 (int,TYPE_1__ const*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(enum AVCodecID VAR_0, int VAR_1)
{
    const AVCodec *VAR_2 = ((void*)0);

    FUNC_1(" (%s: ", VAR_1 ? "encoders" : "decoders");

    while ((VAR_2 = FUNC_0(VAR_0, VAR_2, VAR_1)))
        FUNC_1("%s ", VAR_2->name);

    FUNC_1(")");
}
