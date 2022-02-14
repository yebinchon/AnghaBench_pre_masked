
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t len; scalar_t__ layer_specific; scalar_t__ offset; scalar_t__ event; } ;
typedef TYPE_1__ BT_HDR ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static BT_HDR *FUNC_2(size_t VAR_0)
{
    BT_HDR *VAR_1 = (BT_HDR *)FUNC_1(sizeof(BT_HDR) + VAR_0);
    FUNC_0(VAR_1);
    VAR_1->event = 0;
    VAR_1->offset = 0;
    VAR_1->layer_specific = 0;
    VAR_1->len = VAR_0;
    return VAR_1;
}
