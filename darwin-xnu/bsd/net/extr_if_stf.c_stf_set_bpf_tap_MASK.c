
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stf_softc {int tap_callback; int tap_mode; } ;
typedef int ifnet_t ;
typedef int errno_t ;
typedef int bpf_tap_mode ;
typedef int bpf_packet_func ;


 struct stf_softc* FUNC_0 (int ) ;

__attribute__((used)) static errno_t
FUNC_1(
 ifnet_t VAR_0,
 bpf_tap_mode VAR_1,
 bpf_packet_func VAR_2)
{
 struct stf_softc *VAR_3 = FUNC_0(VAR_0);

 VAR_3->tap_mode = VAR_1;
 VAR_3->tap_callback = VAR_2;

 return 0;
}
