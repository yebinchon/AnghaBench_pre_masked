
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u64 ;
struct s2io_nic {TYPE_1__* def_mac_addr; } ;
struct TYPE_2__ {void** mac_addr; } ;



__attribute__((used)) static void FUNC_0(struct s2io_nic *VAR_0, int VAR_1, u64 VAR_2)
{
 VAR_0->def_mac_addr[VAR_1].mac_addr[5] = (u8) (VAR_2);
 VAR_0->def_mac_addr[VAR_1].mac_addr[4] = (u8) (VAR_2 >> 8);
 VAR_0->def_mac_addr[VAR_1].mac_addr[3] = (u8) (VAR_2 >> 16);
 VAR_0->def_mac_addr[VAR_1].mac_addr[2] = (u8) (VAR_2 >> 24);
 VAR_0->def_mac_addr[VAR_1].mac_addr[1] = (u8) (VAR_2 >> 32);
 VAR_0->def_mac_addr[VAR_1].mac_addr[0] = (u8) (VAR_2 >> 40);
}
