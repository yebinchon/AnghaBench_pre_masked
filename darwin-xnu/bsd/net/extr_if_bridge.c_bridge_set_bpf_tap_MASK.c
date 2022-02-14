
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_softc {int sc_flags; int * sc_bpf_output; int * sc_bpf_input; } ;
typedef int ifnet_t ;
typedef int errno_t ;
typedef int bpf_tap_mode ;
typedef void* bpf_packet_func ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bridge_softc*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static errno_t
FUNC_3(ifnet_t VAR_2, bpf_tap_mode VAR_3, bpf_packet_func VAR_4)
{
 struct bridge_softc *VAR_5 = (struct bridge_softc *)FUNC_2(VAR_2);


 if (VAR_5 == ((void*)0) || (VAR_5->sc_flags & VAR_1)) {
  return (VAR_0);
 }
 FUNC_0(FUNC_1(VAR_5));
 switch (VAR_3) {
  case 131:
   VAR_5->sc_bpf_input = VAR_5->sc_bpf_output = ((void*)0);
   break;

  case 130:
   VAR_5->sc_bpf_input = VAR_4;
   break;

  case 128:
   VAR_5->sc_bpf_output = VAR_4;
   break;

  case 129:
   VAR_5->sc_bpf_input = VAR_5->sc_bpf_output = VAR_4;
   break;

  default:
   break;
 }

 return (0);
}
