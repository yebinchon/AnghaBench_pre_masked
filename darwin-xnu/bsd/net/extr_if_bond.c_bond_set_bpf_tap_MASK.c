
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ifnet {int dummy; } ;
typedef TYPE_1__* ifbond_ref ;
typedef int bpf_tap_mode ;
typedef void* bpf_packet_func ;
struct TYPE_4__ {int * ifb_bpf_output; int * ifb_bpf_input; } ;






 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_4(struct ifnet * VAR_1, bpf_tap_mode VAR_2, bpf_packet_func VAR_3)
{
    ifbond_ref VAR_4;

    FUNC_0();
    VAR_4 = FUNC_3(VAR_1);
    if (VAR_4 == ((void*)0) || FUNC_2(VAR_4)) {
 FUNC_1();
 return (VAR_0);
    }
    switch (VAR_2) {
    case 131:
 VAR_4->ifb_bpf_input = VAR_4->ifb_bpf_output = ((void*)0);
 break;

    case 130:
 VAR_4->ifb_bpf_input = VAR_3;
 break;

    case 128:
 VAR_4->ifb_bpf_output = VAR_3;
 break;

    case 129:
 VAR_4->ifb_bpf_input = VAR_4->ifb_bpf_output = VAR_3;
 break;
    default:
 break;
    }
    FUNC_1();
    return 0;
}
