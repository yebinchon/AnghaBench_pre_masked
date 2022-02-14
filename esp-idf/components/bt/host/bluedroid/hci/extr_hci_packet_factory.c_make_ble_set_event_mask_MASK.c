
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int as_array; } ;
typedef TYPE_1__ bt_event_mask_t ;
typedef int BT_HDR ;


 int FUNC_0 (int*,int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int,int**) ;

__attribute__((used)) static BT_HDR *FUNC_2(const bt_event_mask_t *VAR_1)
{
    uint8_t *VAR_2;
    uint8_t VAR_3 = sizeof(bt_event_mask_t);
    BT_HDR *VAR_4 = FUNC_1(VAR_0, VAR_3, &VAR_2);

    FUNC_0(VAR_2, VAR_1->as_array);
    return VAR_4;
}
