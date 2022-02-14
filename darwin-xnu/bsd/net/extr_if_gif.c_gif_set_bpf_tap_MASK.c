
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gif_softc {int tap_callback; int tap_mode; } ;
typedef int ifnet_t ;
typedef int errno_t ;
typedef int bpf_tap_mode ;
typedef int bpf_packet_func ;


 int FUNC_0 (struct gif_softc*) ;
 int FUNC_1 (struct gif_softc*) ;
 struct gif_softc* FUNC_2 (int ) ;

__attribute__((used)) static errno_t
FUNC_3(
 ifnet_t VAR_0,
 bpf_tap_mode VAR_1,
 bpf_packet_func VAR_2)
{
 struct gif_softc *VAR_3 = FUNC_2(VAR_0);

 FUNC_0(VAR_3);
 VAR_3->tap_mode = VAR_1;
 VAR_3->tap_callback = VAR_2;
 FUNC_1(VAR_3);

 return (0);
}
