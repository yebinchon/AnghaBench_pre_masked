
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int u_long ;
struct utun_pcb {scalar_t__ utun_slot_size; int utun_use_netif; } ;
struct ifreq {int ifr_mtu; } ;
typedef int ifnet_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct utun_pcb* FUNC_1 (int ) ;

__attribute__((used)) static errno_t
FUNC_2(ifnet_t VAR_3,
     u_long VAR_4,
     void *VAR_5)
{



 errno_t VAR_6 = 0;

 switch(VAR_4) {
  case 128: {
   {
    FUNC_0(VAR_3, ((struct ifreq*)VAR_5)->ifr_mtu);
   }
   break;
  }

  case 129:

   break;

  default:
   VAR_6 = VAR_1;
 }

 return VAR_6;
}
