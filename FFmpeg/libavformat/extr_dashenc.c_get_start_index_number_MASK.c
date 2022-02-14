
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ window_size; } ;
struct TYPE_5__ {scalar_t__ segment_index; scalar_t__ nb_segments; } ;
typedef TYPE_1__ OutputStream ;
typedef TYPE_2__ DASHContext ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(OutputStream *VAR_0, DASHContext *VAR_1,
                                   int *VAR_2, int *VAR_3) {
    *VAR_2 = 0;
    *VAR_3 = 1;
    if (VAR_1->window_size) {
        *VAR_2 = FUNC_0(VAR_0->nb_segments - VAR_1->window_size, 0);
        *VAR_3 = FUNC_0(VAR_0->segment_index - VAR_1->window_size, 1);
    }
}
