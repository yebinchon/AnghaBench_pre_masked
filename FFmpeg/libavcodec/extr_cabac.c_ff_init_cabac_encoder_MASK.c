
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int bit_left; } ;
struct TYPE_4__ {int range; TYPE_2__ pb; scalar_t__ outstanding_count; scalar_t__ low; } ;
typedef TYPE_1__ CABACContext ;


 int FUNC_0 (TYPE_2__*,int *,int) ;

void FUNC_1(CABACContext *VAR_0, uint8_t *VAR_1, int VAR_2){
    FUNC_0(&VAR_0->pb, VAR_1, VAR_2);

    VAR_0->low= 0;
    VAR_0->range= 0x1FE;
    VAR_0->outstanding_count= 0;
    VAR_0->pb.bit_left++;
}
