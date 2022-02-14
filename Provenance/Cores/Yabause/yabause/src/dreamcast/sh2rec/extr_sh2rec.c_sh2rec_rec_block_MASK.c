
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ block; scalar_t__ ptr; } ;
typedef TYPE_1__ sh2rec_block_t ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(sh2rec_block_t *VAR_0) {
    int VAR_1 = 0;

    while(!VAR_1) {
        VAR_1 = FUNC_1(VAR_0, 0);
    }


    FUNC_0((uint32)VAR_0->block, ((u32)VAR_0->ptr) - ((u32)VAR_0->block));

    return 0;
}
