
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int serial_data_type_t ;
struct TYPE_6__ {int (* transmit_data ) (int ,scalar_t__,int ) ;} ;
struct TYPE_5__ {scalar_t__ event; int len; scalar_t__ offset; scalar_t__ data; } ;
typedef TYPE_1__ BT_HDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(BT_HDR *VAR_3, bool VAR_4)
{
    uint16_t VAR_5 = VAR_3->event & VAR_0;
    serial_data_type_t VAR_6 = FUNC_0(VAR_5);

    VAR_2->transmit_data(VAR_6, VAR_3->data + VAR_3->offset, VAR_3->len);

    if (VAR_5 != VAR_1 && VAR_4) {
        FUNC_1(VAR_3);
    }
}
