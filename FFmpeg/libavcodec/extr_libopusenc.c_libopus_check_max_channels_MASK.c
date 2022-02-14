
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int channels; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,char*,int) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_2,
                                      int VAR_3) {
    if (VAR_2->channels > VAR_3) {
        FUNC_1(VAR_2, VAR_0, "Opus mapping family undefined for %d channels.\n",
               VAR_2->channels);
        return FUNC_0(VAR_1);
    }

    return 0;
}
