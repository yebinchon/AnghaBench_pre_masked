
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; } ;
struct TYPE_6__ {TYPE_2__* freespace; TYPE_1__ base; } ;
typedef TYPE_3__ sh2rec_mem_usedblock ;
struct TYPE_5__ {int size; int ptr; } ;



int FUNC_0(void *VAR_0, int VAR_1) {
    sh2rec_mem_usedblock *VAR_2 = (sh2rec_mem_usedblock *)VAR_0;


    if(VAR_2->freespace->size > VAR_1) {
        VAR_2->freespace->size -= VAR_1;
        VAR_2->base.size += VAR_1;
        VAR_2->freespace->ptr += VAR_1;
        return 1;
    }

    return 0;
}
