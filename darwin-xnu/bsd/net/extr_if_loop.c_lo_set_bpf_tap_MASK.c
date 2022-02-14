
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int dummy; } ;
typedef int errno_t ;
typedef int bpf_tap_mode ;
typedef int * bpf_packet_func ;
struct TYPE_2__ {int bpf_mode; int * bpf_callback; } ;






 int FUNC_0 (int) ;
 struct ifnet* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static errno_t
FUNC_1(struct ifnet *VAR_2, bpf_tap_mode VAR_3,
    bpf_packet_func VAR_4)
{
 FUNC_0(VAR_2 == VAR_0);

 VAR_1[0].bpf_mode = VAR_3;

 switch (VAR_3) {
  case 131:
  case 130:
   VAR_1[0].bpf_callback = ((void*)0);
   break;

  case 128:
  case 129:
   VAR_1[0].bpf_callback = VAR_4;
   break;
 }

 return (0);
}
