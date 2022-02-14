
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef TYPE_1__* bondport_ref ;
typedef scalar_t__ __darwin_time_t ;
struct TYPE_3__ {scalar_t__ po_last_transmit_secs; scalar_t__ po_n_transmit; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(bondport_ref VAR_1, int32_t VAR_2,
        __darwin_time_t * VAR_3)
{
    if (VAR_1->po_last_transmit_secs != VAR_2) {
 VAR_1->po_last_transmit_secs = VAR_2;
 VAR_1->po_n_transmit = 0;
    }
    if (VAR_1->po_n_transmit < VAR_0) {
 VAR_1->po_n_transmit++;
 return (1);
    }
    if (VAR_3 != ((void*)0)) {
 *VAR_3 = VAR_2 + 1;
    }
    return (0);
}
