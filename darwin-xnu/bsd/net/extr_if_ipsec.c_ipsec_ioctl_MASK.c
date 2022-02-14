
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_long ;
struct ipsec_pcb {int ipsec_slot_size; int ipsec_use_netif; } ;
struct ifreq {int ifr_mtu; } ;
typedef int ifnet_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int ) ;
 struct ipsec_pcb* FUNC_1 (int ) ;

__attribute__((used)) static errno_t
FUNC_2(ifnet_t VAR_2,
   u_long VAR_3,
   void *VAR_4)
{



 errno_t VAR_5 = 0;

 switch(VAR_3) {
  case 128: {
   {
    FUNC_0(VAR_2, ((struct ifreq*)VAR_4)->ifr_mtu);
   }
   break;
  }

  case 129:

   break;

  default:
   VAR_5 = VAR_1;
 }

 return VAR_5;
}
