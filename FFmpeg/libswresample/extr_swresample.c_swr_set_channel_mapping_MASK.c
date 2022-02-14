
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SwrContext {int const* channel_map; scalar_t__ in_convert; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

int FUNC_1(struct SwrContext *VAR_1, const int *VAR_2){
    if(!VAR_1 || VAR_1->in_convert)
        return FUNC_0(VAR_0);
    VAR_1->channel_map = VAR_2;
    return 0;
}
