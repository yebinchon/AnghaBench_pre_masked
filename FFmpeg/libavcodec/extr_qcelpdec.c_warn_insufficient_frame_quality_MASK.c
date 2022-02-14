
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frame_number; } ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int ,char const*) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_1,
                                            const char *VAR_2)
{
    FUNC_0(VAR_1, VAR_0, "Frame #%d, IFQ: %s\n",
           VAR_1->frame_number, VAR_2);
}
