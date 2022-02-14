
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nodes_confirmed; scalar_t__ nodes_delivered; int body; scalar_t__ queue; } ;
typedef TYPE_1__ job ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(job *VAR_0) {
    if (VAR_0 == ((void*)0)) return;
    if (VAR_0->queue) FUNC_0(VAR_0->queue);
    FUNC_2(VAR_0->body);
    if (VAR_0->nodes_delivered) FUNC_1(VAR_0->nodes_delivered);
    if (VAR_0->nodes_confirmed) FUNC_1(VAR_0->nodes_confirmed);
    FUNC_3(VAR_0);
}
