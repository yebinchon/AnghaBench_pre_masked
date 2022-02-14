
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* codec_name; int * surface; int * format; int * codec; int refcount; } ;
typedef TYPE_1__ MediaCodecDecContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(MediaCodecDecContext *VAR_0)
{
    if (!VAR_0)
        return;

    if (FUNC_0(&VAR_0->refcount, 1) == 1) {
        if (VAR_0->codec) {
            FUNC_2(VAR_0->codec);
            VAR_0->codec = ((void*)0);
        }

        if (VAR_0->format) {
            FUNC_3(VAR_0->format);
            VAR_0->format = ((void*)0);
        }

        if (VAR_0->surface) {
            FUNC_4(VAR_0->surface, ((void*)0));
            VAR_0->surface = ((void*)0);
        }

        FUNC_1(&VAR_0->codec_name);
        FUNC_1(&VAR_0);
    }
}
