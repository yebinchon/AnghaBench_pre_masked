
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipsec_pcb {scalar_t__ ipsec_output_service_class; } ;
struct ip_out_args {int ipoa_sotc; int ipoa_flags; } ;
typedef int * ifnet_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct ipsec_pcb* FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2(ifnet_t VAR_6, struct ip_out_args *VAR_7)
{
 struct ipsec_pcb *VAR_8;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
  return;
 VAR_8 = FUNC_0(VAR_6);

 if (VAR_5 == 0) {
  VAR_7->ipoa_flags |= VAR_1;
  VAR_7->ipoa_sotc = FUNC_1(VAR_8->ipsec_output_service_class);
 } else if (VAR_8->ipsec_output_service_class != VAR_2 ||
    VAR_4 != 0) {
  VAR_7->ipoa_flags &= ~VAR_1;
 } else {
  VAR_7->ipoa_flags |= VAR_0;
  VAR_7->ipoa_sotc = VAR_3;
 }
}
